/**
 *
 * Copyright (c) 2024 Johannes Krottmayer <johannes@krotti42.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */

#define _ASM_ASSEMBLY_

#include <asm.h>
#include <stm32h745.h>

#define LDOEN               1
#define ACTVOSRDY           13

.syntax unified
.thumb
.text

ENTRY_S(_start)
    /**
     * Setup main stack pointer (SP_main)
     */
    ldr r0, =_stack_e
    mov sp, r0

    /**
     * Setup power supply for NUCLEO-H745ZI-Q board to direct SMPS mode.
     * This is the default configuration from the board.
     * 
     * ATTENTION
     * After setup the right power mode, it's mandatory to check the ACTVOSRDY
     * bit in PWR_CSR1 register. When this bit isn't set, the system runs in a
     * limited mode (Run*). In this mode reads and writes from/to RAM might be
     * corrupted. 
     */
    ldr r6, =PWR_CR3
    movs r0, 1
    lsls r1, r0, LDOEN          /* Disable LDO */
    mvns r2, r1
    ldr r3, [r6]
    ands r3, r2
    str r3, [r6]
    lsls r1, r0, ACTVOSRDY
1:                              /* Loop until ACTVOSRDY is valid */
    ldr r6, =PWR_CSR1
    ldr r3, [r6]
    ands r3, r1
    cmp r3, r1
    bne 1b
    
    /**
     * Zero section .bss
     */
    ldr r4, =_bss_s
    ldr r5, =_bss_e
    movs r0, #0
2:
    cmp r4, r5
    beq 3f
    str r0, [r4], #+4
    b 2b
    
    /**
     * Initialize section .data
     */
3:
    ldr r4, =_data_s
    ldr r5, =_data_e
    ldr r6, =_data_s_load
4:
    cmp r4, r5
    beq 5f
    ldr r3, [r6], #+4
    str r3, [r4], #+4
    b 4b
5:
    
    bl icache_inval
    bl dcache_inval
    bl icache_enable
    bl dcache_enable
    bl ahbp_enable
    bl itcm_enable
    bl dtcm_enable
    bl fpu_enable
    bl main
2:
    b 2b
ENTRY_E(_start)


.end

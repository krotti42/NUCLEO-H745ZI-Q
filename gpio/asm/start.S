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

ENTRY(_start)
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
1:                                      /* Loop until ACTVOSRDY is valid */
    ldr r6, =PWR_CSR1
    ldr r3, [r6]
    ands r3, r1
    cmp r3, r1
    bne 1b
    
    sub sp, 8
    bl main
    add sp, 8
2:
    b 2b



.end
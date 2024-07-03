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

/**
 * Cortex-M7 ITCM/DTCM (Tightly-Coupled Memory) functions
 */

#define _ASM_ASSEMBLY_

#include <asm.h>
#include <cortex_m7.h>

.syntax unified
.thumb
.text

/**
 * Enable ITCM
 */
FUNCTION_S(itcm_enable)
    push { lr }
    ldr r2, =CM7_ITCMCR
    mov r0, 1
    mvns r1, r0
    ldr r3, [r2]
    ands r3, r1
    orrs r3, r0
    str r3, [r2]
    dsb
    isb
    pop { lr }
    bx lr
FUNCTION_E(itcm_enable)

/**
 * Disable ITCM
 */
FUNCTION_S(itcm_disable)
    push { lr }
    ldr r2, =CM7_ITCMCR
    mov r0, 1
    mvns r1, r0
    ldr r3, [r2]
    ands r3, r1
    str r3, [r2]
    dsb
    isb
    pop { lr }
    bx lr
FUNCTION_E(itcm_disable)

/**
 * Enable DTCM
 */
FUNCTION_S(dtcm_enable)
    push { lr }
    ldr r2, =CM7_DTCMCR
    mov r0, 1
    mvns r1, r0
    ldr r3, [r2]
    ands r3, r1
    orrs r3, r0
    str r3, [r2]
    dsb
    isb
    pop { lr }
    bx lr
FUNCTION_E(dtcm_enable)

/**
 * Disable DTCM
 */
FUNCTION_S(dtcm_disable)
    push {lr}
    ldr r2, =CM7_DTCMCR
    mov r0, 1
    mvns r1, r0
    ldr r3, [r2]
    ands r3, r1
    str r3, [r2]
    dsb
    isb
    pop {lr}
    bx lr
FUNCTION_E(dtcm_disable)

.end

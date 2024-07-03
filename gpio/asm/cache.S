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
 * Cortex-M7 cache maintenance functions
 */

#define _ASM_ASSEMBLY_

#include <asm.h>
#include <cortex_m7.h>

.syntax unified
.thumb
.text

/**
 * Invalidate instruction cache
 */
FUNCTION_S(icache_inval)
    push { lr }
    ldr r3, =ICIALLU
    movs r0, 0
    str r0, [r3]
    dsb
    isb
    pop { lr }
    bx lr
FUNCTION_E(icache_inval)

/**
 * Enable instruction cache
 */
FUNCTION_S(icache_enable)
    push { lr }
    ldr r3, =CCR
    movs r0, 1
    lsls r1, r0, 17
    ldr r2, [r3]
    orrs r2, r1
    str r2, [r3]
    dsb
    isb
    pop { lr }
    bx lr
FUNCTION_E(icache_enable)

/**
 * Disable instruction cache
 */
FUNCTION_S(icache_disable)
    push { lr }
    ldr r3, =CCR
    movs r0, 1
    lsls r1, r0, 17
    mvns r0, r1
    ldr r2, [r3]
    ands r2, r1
    str r2, [r3]
    dsb
    isb
    pop { lr }
    bx lr
FUNCTION_E(icache_disable)

/**
 * Invalidate data cache
 */
FUNCTION_S(dcache_inval)
    push { r4, r6, r7, r8, r11, lr }
    mov r0, 0
    ldr r11, =CSSELR
    str r0, [r11]
    dsb
    ldr r11, =CCSIDR
    ldr r2, [r11]
    and r1, r2, #0x7
    add r7, r1, #0x4
    ubfx r4, r2, #3, #10
    ubfx r2, r2, #13, #15
    clz r6, r4
    ldr r11, =DCISW
1:
    mov r1, r4
    lsls r8, r2, r7
2:
    lsls r3, r1, r6
    orrs r3, r3, r8
    str r3, [r11]
    subs r1, r1, #0x1
    bge 2b
    subs r2, r2, #0x1
    bge 1b
    dsb
    isb
    pop { r4, r6, r7, r8, r11, lr }
    bx lr
FUNCTION_E(dcache_inval)

/**
 * Clean (flush) and invalidate data cache
 */
FUNCTION_S(dcache_cleaninval)
    push { r4, r6, r7, r8, r11, lr }
    mov r0, 0
    ldr r11, =CSSELR
    str r0, [r11]
    dsb
    ldr r11, =CCSIDR
    ldr r2, [r11]
    and r1, r2, #0x7
    add r7, r1, #0x4
    ubfx r4, r2, #3, #10
    ubfx r2, r2, #13, #15
    clz r6, r4
    ldr r11, =DCCISW
1:
    mov r1, r4
    lsls r8, r2, r7
2:
    lsls r3, r1, r6
    orrs r3, r3, r8
    str r3, [r11]
    subs r1, r1, #0x1
    bge 2b
    subs r2, r2, #0x1
    bge 1b
    dsb
    isb
    pop { r4, r6, r7, r8, r11, lr }
    bx lr
FUNCTION_E(dcache_cleaninval)

/**
 * Clean (flush) data cache
 */
FUNCTION_S(dcache_clean)
    push { r4, r6, r7, r8, r11, lr }
    mov r0, 0
    ldr r11, =CSSELR
    str r0, [r11]
    dsb
    ldr r11, =CCSIDR
    ldr r2, [r11]
    and r1, r2, #0x7
    add r7, r1, #0x4
    ubfx r4, r2, #3, #10
    ubfx r2, r2, #13, #15
    clz r6, r4
    ldr r11, =DCCSW
1:
    mov r1, r4
    lsls r8, r2, r7
2:
    lsls r3, r1, r6
    orrs r3, r3, r8
    str r3, [r11]
    subs r1, r1, #0x1
    bge 2b
    subs r2, r2, #0x1
    bge 1b
    dsb
    isb
    pop { r4, r6, r7, r8, r11, lr }
    bx lr
FUNCTION_E(dcache_clean)

/**
 * Enable data cache
 */
FUNCTION_S(dcache_enable)
    push { lr }
    ldr r3, =CCR
    movs r0, 1
    lsls r1, r0, 16
    ldr r2, [r3]
    orrs r2, r1
    str r2, [r3]
    dsb
    isb
    pop { lr }
    bx lr
FUNCTION_E(dcache_enable)

/**
 * Disable data cache
 */
FUNCTION_S(dcache_disable)
    push { lr }
    ldr r3, =CCR
    movs r0, 1
    lsls r1, r0, 16
    mvns r0, r1
    ldr r2, [r3]
    ands r2, r1
    str r2, [r3]
    dsb
    isb
    pop { lr }
    bx lr
FUNCTION_E(dcache_disable)

.end

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
 * Cortex-M7 FPU functions
 */

#define _ASM_ASSEMBLY_

#include <asm.h>
#include <cortex_m7.h>

.syntax unified
.thumb
.text

/**
 * Enable FPU
 */
FUNCTION_S(fpu_enable)
    push { r6, lr}
    ldr r6, =CPACR
    mov r0, 0xF
    lsls r1, r0, 20
    mvns r2, r1
    ldr r3, [r6]
    ands r3, r2
    orrs r3, r1
    str r3, [r6]
    dsb
    isb
    pop { r6, lr}
    bx lr
FUNCTION_E(fpu_enable)

.end

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
#include <cortex_m7.h>

.syntax unified
.thumb

.section .isr_vector
.long _stack_e
.long _start
.long isr_default
.long isr_default
.long isr_default
.long isr_default
.long isr_default
.long 0
.long 0
.long 0
.long 0
.long isr_default
.long isr_default
.long 0
.long isr_default
.long isr_systick
.rept 150
.long 0
.endr

.text

ISR_S(isr_default)
1:
    b 1b
ISR_E(isr_default)

ISR_S(isr_systick)
    push { r4-r11 }
    ldr r3, =ICSR
    movs r0, #1
    lsls r1, r0, #25
    str r1, [r3]
    bl handler_systick
    pop { r4-r11 }
    ldr r0, =0xFFFFFFF9
    bx r0
ISR_E(isr_systick)

.end

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

#include <cortex_m7.h>

int nvic_is_active(int irq_nr)
{
    int reg_off;
    int reg_pos;
    unsigned int reg_tmp;
    
    reg_off = irq_nr / 32;
    reg_pos = irq_nr % 32;
    
    switch (reg_off) {
        case 0:
            reg_tmp = *((volatile unsigned int *) NVIC_IABR0);
            break;
        case 1:
            reg_tmp = *((volatile unsigned int *) NVIC_IABR1);
            break;
        case 2:
            reg_tmp = *((volatile unsigned int *) NVIC_IABR2);
            break;
        case 3:
            reg_tmp = *((volatile unsigned int *) NVIC_IABR3);
            break;
        case 4:
            reg_tmp = *((volatile unsigned int *) NVIC_IABR4);
            break;
        case 5:
            reg_tmp = *((volatile unsigned int *) NVIC_IABR5);
            break;
        case 6:
            reg_tmp = *((volatile unsigned int *) NVIC_IABR6);
            break;
        case 7:
            reg_tmp = *((volatile unsigned int *) NVIC_IABR7);
            break;
        default:
            return 0;
    }
    
    if (reg_tmp & (1 << reg_pos))
        return 1;
    
    return 0;
}

void nvic_clear_pending(int irq_nr)
{
    int reg_off;
    int reg_pos;
    unsigned int reg_tmp;
    
    reg_off = irq_nr / 32;
    reg_pos = irq_nr % 32;
    
    switch (reg_off) {
        case 0:
            reg_tmp = *((volatile unsigned int *) NVIC_ICPR0);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ICPR0) = reg_tmp;
            break;
        case 1:
            reg_tmp = *((volatile unsigned int *) NVIC_ICPR1);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ICPR1) = reg_tmp;
            break;
        case 2:
            reg_tmp = *((volatile unsigned int *) NVIC_ICPR2);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ICPR2) = reg_tmp;
            break;
        case 3:
            reg_tmp = *((volatile unsigned int *) NVIC_ICPR3);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ICPR3) = reg_tmp;
            break;
        case 4:
            reg_tmp = *((volatile unsigned int *) NVIC_ICPR4);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ICPR4) = reg_tmp;
            break;
        case 5:
            reg_tmp = *((volatile unsigned int *) NVIC_ICPR5);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ICPR5) = reg_tmp;
            break;
        case 6:
            reg_tmp = *((volatile unsigned int *) NVIC_ICPR6);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ICPR6) = reg_tmp;
            break;
        case 7:
            reg_tmp = *((volatile unsigned int *) NVIC_ICPR7);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ICPR7) = reg_tmp;
            break;
        default:
            return;
    }
}

void nvic_enable(int irq_nr)
{
    int reg_off;
    int reg_pos;
    unsigned int reg_tmp;
    
    reg_off = irq_nr / 32;
    reg_pos = irq_nr % 32;
    
    switch (reg_off) {
        case 0:
            reg_tmp = *((volatile unsigned int *) NVIC_ISER0);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ISER0) = reg_tmp;
            break;
        case 1:
            reg_tmp = *((volatile unsigned int *) NVIC_ISER1);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ISER1) = reg_tmp;
            break;
        case 2:
            reg_tmp = *((volatile unsigned int *) NVIC_ISER2);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ISER2) = reg_tmp;
            break;
        case 3:
            reg_tmp = *((volatile unsigned int *) NVIC_ISER3);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ISER3) = reg_tmp;
            break;
        case 4:
            reg_tmp = *((volatile unsigned int *) NVIC_ISER4);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ISER4) = reg_tmp;
            break;
        case 5:
            reg_tmp = *((volatile unsigned int *) NVIC_ISER5);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ISER5) = reg_tmp;
            break;
        case 6:
            reg_tmp = *((volatile unsigned int *) NVIC_ISER6);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ISER6) = reg_tmp;
            break;
        case 7:
            reg_tmp = *((volatile unsigned int *) NVIC_ISER7);
            reg_tmp |= (1 << reg_pos);
            *((volatile unsigned int *) NVIC_ISER7) = reg_tmp;
            break;
        default:
            return;
    }
}

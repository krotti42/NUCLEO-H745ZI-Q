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

#include <stm32h745.h>
#include <nvic.h>

#define TIM7EN          5
#define OPM             3
#define CEN             0
#define UIE             0
#define UIF             0
#define TIM7IRQ         55

volatile int delay_timeout;

void handler_delay(void)
{
    unsigned int tmp;
    
    if (!nvic_is_active(TIM7IRQ))
        return;
    
    if (*((volatile unsigned int *) TIM7_SR) && (1 << UIF)) {
        tmp = *((volatile unsigned int *) TIM7_SR);
        tmp &= ~(1 << UIF);
        *((volatile unsigned int *) TIM7_SR) = tmp;
        nvic_clear_pending(TIM7IRQ);
        delay_timeout = 1;
    }
}

void delay_init(void)
{
    unsigned int tmp;
    
    tmp = *((volatile unsigned int *) RCC_APB1LENR);
    tmp |= (1 << TIM7EN);
    *((volatile unsigned int *) RCC_APB1LENR) = tmp;
    nvic_enable(TIM7IRQ);
}

void delay_us(int us)
{
    delay_timeout = 0;
    *((volatile unsigned int *) TIM7_PSC) = 1;
    *((volatile unsigned int *) TIM7_CNT) = 0;
    *((volatile unsigned int *) TIM7_ARR) = (us * 50);
    *((volatile unsigned int *) TIM7_DIER) |= (1 << UIE);
    *((volatile unsigned int *) TIM7_CR1) |= (1 << OPM);
    *((volatile unsigned int *) TIM7_CR1) |= (1 << CEN);
    
    while (!delay_timeout)
        ;
}

void delay_ms(int ms)
{
    int i;
    
    for (i = 0; i < ms; i++)
        delay_us(1000);
}

void delay_s(int s)
{
    int i;
    
    for (i = 0; i < s; i++)
        delay_ms(1000);
}

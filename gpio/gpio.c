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
#include <gpio.h>

void gpio_set_mode(int port, int pin, int mode)
{
    unsigned int tmp_reg;
    unsigned int tmp_mode;
    
    switch (mode) {
        case GPIO_MODE_INPUT:
            tmp_mode = 0;
            break;
        case GPIO_MODE_OUTPUT:
            tmp_mode = 1;
            break;
        case GPIO_MODE_ALT:
            tmp_mode = 2;
            break;
        case GPIO_MODE_ANALOG:
            tmp_mode = 3;
            break;
        default:
            return;
    }
    
    if (pin < 0 || pin > 15)
        return;
    
    switch (port) {
        case GPIOA: {
            tmp_reg = *((unsigned int *) GPIOA_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOA_MODER) = tmp_reg;
            break;
        }
        case GPIOB:
            tmp_reg = *((unsigned int *) GPIOB_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOB_MODER) = tmp_reg;
            break;
        case GPIOC:
            tmp_reg = *((unsigned int *) GPIOC_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOC_MODER) = tmp_reg;
            break;
        case GPIOD:
            tmp_reg = *((unsigned int *) GPIOD_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOD_MODER) = tmp_reg;
            break;
        case GPIOE:
            tmp_reg = *((unsigned int *) GPIOE_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOE_MODER) = tmp_reg;
            break;
        case GPIOF:
            tmp_reg = *((unsigned int *) GPIOF_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOF_MODER) = tmp_reg;
            break;
        case GPIOG:
            tmp_reg = *((unsigned int *) GPIOG_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOG_MODER) = tmp_reg;
            break;
        case GPIOH:
            tmp_reg = *((unsigned int *) GPIOH_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOH_MODER) = tmp_reg;
            break;
        case GPIOI:
            tmp_reg = *((unsigned int *) GPIOI_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOI_MODER) = tmp_reg;
            break;
        case GPIOJ:
            tmp_reg = *((unsigned int *) GPIOJ_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOJ_MODER) = tmp_reg;
            break;
        case GPIOK:
            tmp_reg = *((unsigned int *) GPIOK_MODER);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_mode << (pin * 2));
            *((unsigned int *) GPIOK_MODER) = tmp_reg;
            break;
        default:
            return;
    }
}

void gpio_set_otype(int port, int pin, int otype, int pupd)
{
    unsigned int tmp_otype;
    unsigned int tmp_pupd;
    unsigned int tmp_reg;
    
    switch (otype) {
        case GPIO_OTYPE_PP:
            tmp_otype = 0;
            break;
        case GPIO_OTPYE_OD:
            tmp_otype = 1;
            break;
        default:
            return;
    }
    
    switch (pupd) {
        case GPIO_PUPD_NO:
            tmp_pupd = 0;
            break;
        case GPIO_PUPD_PU:
            tmp_pupd = 1;
            break;
        case GPIO_PUPD_PD:
            tmp_pupd = 2;
            break;
        default:
            return;
    }
    
    switch (port) {
        case GPIOA:
            tmp_reg = *((unsigned int *) GPIOA_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOA_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOA_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOA_PUPDR) = tmp_reg;
            break;
        case GPIOB:
            tmp_reg = *((unsigned int *) GPIOB_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOB_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOB_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOB_PUPDR) = tmp_reg;
            break;
        case GPIOC:
            tmp_reg = *((unsigned int *) GPIOC_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOC_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOC_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOC_PUPDR) = tmp_reg;
            break;
        case GPIOD:
            tmp_reg = *((unsigned int *) GPIOD_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOD_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOD_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOD_PUPDR) = tmp_reg;
            break;
        case GPIOE:
            tmp_reg = *((unsigned int *) GPIOE_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOE_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOE_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOE_PUPDR) = tmp_reg;
            break;
        case GPIOF:
            tmp_reg = *((unsigned int *) GPIOF_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOF_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOF_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOF_PUPDR) = tmp_reg;
            break;
        case GPIOG:
            tmp_reg = *((unsigned int *) GPIOG_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOG_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOG_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOG_PUPDR) = tmp_reg;
            break;
        case GPIOH:
            tmp_reg = *((unsigned int *) GPIOH_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOH_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOH_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOH_PUPDR) = tmp_reg;
            break;
        case GPIOI:
            tmp_reg = *((unsigned int *) GPIOI_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOI_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOI_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOI_PUPDR) = tmp_reg;
            break;
        case GPIOJ:
            tmp_reg = *((unsigned int *) GPIOJ_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOJ_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOJ_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOJ_PUPDR) = tmp_reg;
            break;
        case GPIOK:
            tmp_reg = *((unsigned int *) GPIOK_OTYPER);
            tmp_reg &= ~(1 << pin);
            tmp_reg |= (tmp_otype << pin);
            *((unsigned int *) GPIOK_OTYPER) = tmp_reg;
            tmp_reg = *((unsigned int *) GPIOK_PUPDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_pupd << (pin * 2));
            *((unsigned int *) GPIOK_PUPDR) = tmp_reg;
            break;
        default:
            return;
    }
}

void gpio_set_ospeed(int port, int pin, int ospeed)
{
    unsigned int tmp_reg;
    unsigned int tmp_speed;
    
    switch (ospeed) {
        case GPIO_SPEED_LOW:
            tmp_speed = 0;
            break;
        case GPIO_SPEED_MED:
            tmp_speed = 1;
            break;
        case GPIO_SPEED_HIGH:
            tmp_speed = 2;
            break;
        case GPIO_SPEED_VHIGH:
            tmp_speed = 3;
            break;
        default:
            return;
    }
    
    if (pin < 0 || pin > 15)
        return;
    
    switch (port) {
        case GPIOA:
            tmp_reg = *((unsigned int *) GPIOA_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOA_OSPEEDR) = tmp_reg;
            break;
        case GPIOB:
            tmp_reg = *((unsigned int *) GPIOB_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOB_OSPEEDR) = tmp_reg;
            break;
        case GPIOC:
            tmp_reg = *((unsigned int *) GPIOC_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOC_OSPEEDR) = tmp_reg;
            break;
        case GPIOD:
            tmp_reg = *((unsigned int *) GPIOD_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOD_OSPEEDR) = tmp_reg;
            break;
        case GPIOE:
            tmp_reg = *((unsigned int *) GPIOE_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOE_OSPEEDR) = tmp_reg;
            break;
        case GPIOF:
            tmp_reg = *((unsigned int *) GPIOF_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOF_OSPEEDR) = tmp_reg;
            break;
        case GPIOG:
            tmp_reg = *((unsigned int *) GPIOG_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOG_OSPEEDR) = tmp_reg;
            break;
        case GPIOH:
            tmp_reg = *((unsigned int *) GPIOH_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOH_OSPEEDR) = tmp_reg;
            break;
        case GPIOI:
            tmp_reg = *((unsigned int *) GPIOI_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOI_OSPEEDR) = tmp_reg;
            break;
        case GPIOJ:
            tmp_reg = *((unsigned int *) GPIOJ_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOJ_OSPEEDR) = tmp_reg;
            break;
        case GPIOK:
            tmp_reg = *((unsigned int *) GPIOK_OSPEEDR);
            tmp_reg &= ~(3 << (pin * 2));
            tmp_reg |= (tmp_speed << (pin * 2));
            *((unsigned int *) GPIOK_OSPEEDR) = tmp_reg;
            break;
        default:
            return;
    }
}

void gpio_set_alternate(int port, int pin, int alternate)
{
    unsigned int tmp_reg;
    unsigned int tmp_alt;
    
    if (alternate < 0 || alternate > 15)
        return;
    
    tmp_alt = alternate;
    
    if (pin < 0 || pin > 15)
        return;
    
    if (pin > 7) {
        switch (port) {
            case GPIOA:
                tmp_reg = *((unsigned int *) GPIOA_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOA_AFRH) = tmp_reg;
                break;
            case GPIOB:
                tmp_reg = *((unsigned int *) GPIOB_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOB_AFRH) = tmp_reg;
                break;
            case GPIOC:
                tmp_reg = *((unsigned int *) GPIOC_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOC_AFRH) = tmp_reg;
                break;
            case GPIOD:
                tmp_reg = *((unsigned int *) GPIOD_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOD_AFRH) = tmp_reg;
                break;
            case GPIOE:
                tmp_reg = *((unsigned int *) GPIOE_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOE_AFRH) = tmp_reg;
                break;
            case GPIOF:
                tmp_reg = *((unsigned int *) GPIOF_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOF_AFRH) = tmp_reg;
                break;
            case GPIOG:
                tmp_reg = *((unsigned int *) GPIOG_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOG_AFRH) = tmp_reg;
                break;
            case GPIOH:
                tmp_reg = *((unsigned int *) GPIOH_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOH_AFRH) = tmp_reg;
                break;
            case GPIOI:
                tmp_reg = *((unsigned int *) GPIOI_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOI_AFRH) = tmp_reg;
                break;
            case GPIOJ:
                tmp_reg = *((unsigned int *) GPIOJ_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOJ_AFRH) = tmp_reg;
                break;
            case GPIOK:
                tmp_reg = *((unsigned int *) GPIOK_AFRH);
                tmp_reg &= ~(15 << ((pin - 8) * 4));
                tmp_reg |= (tmp_alt << ((pin - 8) * 4));
                *((unsigned int *) GPIOK_AFRH) = tmp_reg;
                break;
                break;
            default:
                return;
    }
    } else {
        switch (port) {
            case GPIOA:
                tmp_reg = *((unsigned int *) GPIOA_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOA_AFRL) = tmp_reg;
                break;
            case GPIOB:
                tmp_reg = *((unsigned int *) GPIOB_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOB_AFRL) = tmp_reg;
                break;
            case GPIOC:
                tmp_reg = *((unsigned int *) GPIOC_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOC_AFRL) = tmp_reg;
                break;
            case GPIOD:
                tmp_reg = *((unsigned int *) GPIOD_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOD_AFRL) = tmp_reg;
                break;
            case GPIOE:
                tmp_reg = *((unsigned int *) GPIOE_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOE_AFRL) = tmp_reg;
                break;
            case GPIOF:
                tmp_reg = *((unsigned int *) GPIOF_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOF_AFRL) = tmp_reg;
                break;
            case GPIOG:
                tmp_reg = *((unsigned int *) GPIOG_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOG_AFRL) = tmp_reg;
                break;
            case GPIOH:
                tmp_reg = *((unsigned int *) GPIOH_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOH_AFRL) = tmp_reg;
                break;
            case GPIOI:
                tmp_reg = *((unsigned int *) GPIOI_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOI_AFRL) = tmp_reg;
                break;
            case GPIOJ:
                tmp_reg = *((unsigned int *) GPIOJ_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOJ_AFRL) = tmp_reg;
                break;
            case GPIOK:
                tmp_reg = *((unsigned int *) GPIOK_AFRL);
                tmp_reg &= ~(15 << (pin * 4));
                tmp_reg |= (tmp_alt << (pin * 4));
                *((unsigned int *) GPIOK_AFRL) = tmp_reg;
                break;
            default:
                return;
    }
    }
}

void gpio_init(int port)
{
    unsigned int tmp_reg;
    
    switch (port) {
        case GPIOA:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 0);
            tmp_reg |= (1 << 0);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOB:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 1);
            tmp_reg |= (1 << 1);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOC:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 2);
            tmp_reg |= (1 << 2);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOD:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 3);
            tmp_reg |= (1 << 3);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOE:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 4);
            tmp_reg |= (1 << 4);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOF:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 5);
            tmp_reg |= (1 << 5);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOG:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 6);
            tmp_reg |= (1 << 6);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOH:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 7);
            tmp_reg |= (1 << 7);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOI:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 8);
            tmp_reg |= (1 << 8);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOJ:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 9);
            tmp_reg |= (1 << 9);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        case GPIOK:
            tmp_reg = *((unsigned int *) RCC_AHB4ENR);
            tmp_reg &= ~(1 << 10);
            tmp_reg |= (1 << 10);
            *((unsigned int *) RCC_AHB4ENR) = tmp_reg;
            break;
        default:
            return;
    }
}

void gpio_set_pin(int port, int pin, int val)
{
    unsigned int tmp;
    
    if (val) {
        switch (port) {
            case GPIOA:
                tmp = *((unsigned int *) GPIOA_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOA_BSRR) = tmp;
                break;
            case GPIOB:
                tmp = *((unsigned int *) GPIOB_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOB_BSRR) = tmp;
                break;
            case GPIOC:
                tmp = *((unsigned int *) GPIOC_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOC_BSRR) = tmp;
                break;
            case GPIOD:
                tmp = *((unsigned int *) GPIOD_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOD_BSRR) = tmp;
                break;
            case GPIOE:
                tmp = *((unsigned int *) GPIOE_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOE_BSRR) = tmp;
                break;
            case GPIOF:
                tmp = *((unsigned int *) GPIOF_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOF_BSRR) = tmp;
                break;
            case GPIOG:
                tmp = *((unsigned int *) GPIOG_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOG_BSRR) = tmp;
                break;
            case GPIOH:
                tmp = *((unsigned int *) GPIOH_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOH_BSRR) = tmp;
                break;
            case GPIOI:
                tmp = *((unsigned int *) GPIOI_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOI_BSRR) = tmp;
                break;
            case GPIOJ:
                tmp = *((unsigned int *) GPIOJ_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOJ_BSRR) = tmp;
                break;
            case GPIOK:
                tmp = *((unsigned int *) GPIOK_BSRR);
                tmp &= ~(1 << pin);
                tmp |= (1 << pin);
                *((unsigned int *) GPIOK_BSRR) = tmp;
                break;
            default:
                return;
        }
    } else {
        switch (port) {
            case GPIOA:
                tmp = *((unsigned int *) GPIOA_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOA_BSRR) = tmp;
                break;
            case GPIOB:
                tmp = *((unsigned int *) GPIOB_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOB_BSRR) = tmp;
                break;
            case GPIOC:
                tmp = *((unsigned int *) GPIOC_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOC_BSRR) = tmp;
                break;
            case GPIOD:
                tmp = *((unsigned int *) GPIOD_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOD_BSRR) = tmp;
                break;
            case GPIOE:
                tmp = *((unsigned int *) GPIOE_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOE_BSRR) = tmp;
                break;
            case GPIOF:
                tmp = *((unsigned int *) GPIOF_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOF_BSRR) = tmp;
                break;
            case GPIOG:
                tmp = *((unsigned int *) GPIOG_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOG_BSRR) = tmp;
                break;
            case GPIOH:
                tmp = *((unsigned int *) GPIOH_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOH_BSRR) = tmp;
                break;
            case GPIOI:
                tmp = *((unsigned int *) GPIOI_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOI_BSRR) = tmp;
                break;
            case GPIOJ:
                tmp = *((unsigned int *) GPIOJ_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOJ_BSRR) = tmp;
                break;
            case GPIOK:
                tmp = *((unsigned int *) GPIOK_BSRR);
                tmp &= ~(1 << (pin + 16));
                tmp |= (1 << (pin + 16));
                *((unsigned int *) GPIOK_BSRR) = tmp;
                break;
            default:
                return;
        }
    }
}

int gpio_get_pin(int port, int pin)
{
    unsigned int tmp;
    
    switch (port) {
        case GPIOA:
            tmp = *((unsigned int *) GPIOA_IDR);
            break;
        case GPIOB:
            tmp = *((unsigned int *) GPIOB_IDR);
            break;
        case GPIOC:
            tmp = *((unsigned int *) GPIOC_IDR);
            break;
        case GPIOD:
            tmp = *((unsigned int *) GPIOD_IDR);
            break;
        case GPIOE:
            tmp = *((unsigned int *) GPIOE_IDR);
            break;
        case GPIOF:
            tmp = *((unsigned int *) GPIOF_IDR);
            break;
        case GPIOG:
            tmp = *((unsigned int *) GPIOG_IDR);
            break;
        case GPIOH:
            tmp = *((unsigned int *) GPIOH_IDR);
            break;
        case GPIOI:
            tmp = *((unsigned int *) GPIOI_IDR);
            break;
        case GPIOJ:
            tmp = *((unsigned int *) GPIOJ_IDR);
            break;
        case GPIOK:
            tmp = *((unsigned int *) GPIOK_IDR);
            break;
        default:
            return 0;
    }
    
    if (tmp & (1 << pin))
        return 1;
    
    return 0;
}

void gpio_wr(int port, unsigned short val)
{
    unsigned int tmp;
    tmp = (unsigned int) val;
    
    switch (port) {
        case GPIOA:
            *((unsigned int *) GPIOA_ODR) = tmp;
            break;
        case GPIOB:
            *((unsigned int *) GPIOB_ODR) = tmp;
            break;
        case GPIOC:
            *((unsigned int *) GPIOC_ODR) = tmp;
            break;
        case GPIOD:
            *((unsigned int *) GPIOD_ODR) = tmp;
            break;
        case GPIOE:
            *((unsigned int *) GPIOE_ODR) = tmp;
            break;
        case GPIOF:
            *((unsigned int *) GPIOF_ODR) = tmp;
            break;
        case GPIOG:
            *((unsigned int *) GPIOG_ODR) = tmp;
            break;
        case GPIOH:
            *((unsigned int *) GPIOH_ODR) = tmp;
            break;
        case GPIOI:
            *((unsigned int *) GPIOI_ODR) = tmp;
            break;
        case GPIOJ:
            *((unsigned int *) GPIOJ_ODR) = tmp;
            break;
        case GPIOK:
            *((unsigned int *) GPIOK_ODR) = tmp;
            break;
        default:
            return;
    }
}

unsigned short gpio_rd(int port)
{
    unsigned int tmp;
    
    switch (port) {
        case GPIOA:
            tmp = *((unsigned int *) GPIOA_IDR);
            break;
        case GPIOB:
            tmp = *((unsigned int *) GPIOB_IDR);
            break;
        case GPIOC:
            tmp = *((unsigned int *) GPIOC_IDR);
            break;
        case GPIOD:
            tmp = *((unsigned int *) GPIOD_IDR);
            break;
        case GPIOE:
            tmp = *((unsigned int *) GPIOE_IDR);
            break;
        case GPIOF:
            tmp = *((unsigned int *) GPIOF_IDR);
            break;
        case GPIOG:
            tmp = *((unsigned int *) GPIOG_IDR);
            break;
        case GPIOH:
            tmp = *((unsigned int *) GPIOH_IDR);
            break;
        case GPIOI:
            tmp = *((unsigned int *) GPIOI_IDR);
            break;
        case GPIOJ:
            tmp = *((unsigned int *) GPIOJ_IDR);
            break;
        case GPIOK:
            tmp = *((unsigned int *) GPIOK_IDR);
            break;
        default:
            return 0;
    }
    
    return (unsigned short) tmp;
}

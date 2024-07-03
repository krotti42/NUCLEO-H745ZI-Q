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

#ifndef _GPIO_H
#define _GPIO_H

enum gpio_port_e {
    GPIOA,
    GPIOB,
    GPIOC,
    GPIOD,
    GPIOE,
    GPIOF,
    GPIOG,
    GPIOH,
    GPIOI,
    GPIOJ,
    GPIOK
};

enum gpio_mode_e {
    GPIO_MODE_INPUT,
    GPIO_MODE_OUTPUT,
    GPIO_MODE_ALT,
    GPIO_MODE_ANALOG
};

enum gpio_otype_e {
    GPIO_OTYPE_PP,
    GPIO_OTPYE_OD
};

enum gpio_pupd_e {
    GPIO_PUPD_NO,
    GPIO_PUPD_PU,
    GPIO_PUPD_PD
};

enum gpio_speed_e {
    GPIO_SPEED_LOW,
    GPIO_SPEED_MED,
    GPIO_SPEED_HIGH,
    GPIO_SPEED_VHIGH
};

extern void gpio_init(int port);
extern void gpio_set_mode(int port, int pin, int mode);
extern void gpio_set_otype(int port, int pin, int otype, int pupd);
extern void gpio_set_ospeed(int port, int pin, int ospeed);
extern void gpio_set_alternate(int port, int pin, int alternate);
extern void gpio_set_pin(int port, int pin, int val);
extern int gpio_get_pin(int port, int pin);
extern void gpio_wr(int port, unsigned short val);
extern unsigned short gpio_rd(int port);

#endif

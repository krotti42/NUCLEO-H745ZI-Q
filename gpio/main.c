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

#include <board.h>
#include <gpio.h>

/* Blue button */
#define USER_BUTTON_PORT        GPIOC
#define USER_BUTTOM_PIN         13

/* Yellow LED */
#define USER_LED_PORT           GPIOE
#define USER_LED_PIN            1

/* Heartbeat (red LED) */
#define HEARTBEAT_PORT          GPIOB
#define HEARTBEAT_PIN           14

/* MCO2 output */
#define MCO2_PORT               GPIOC
#define MCO2_PIN                9

void main(void)
{
    int pin_state = 0;
    
    board_setup();
    
    /* Setup heartbeat pin */
    gpio_init(HEARTBEAT_PORT);
    gpio_set_mode(HEARTBEAT_PORT, HEARTBEAT_PIN, GPIO_MODE_OUTPUT);
    gpio_set_pin(HEARTBEAT_PORT, HEARTBEAT_PIN, 0);
    
    /* Setup MCO2 output pin */
    gpio_init(MCO2_PORT);
    gpio_set_mode(MCO2_PORT, MCO2_PIN, GPIO_MODE_ALT);
    gpio_set_alternate(MCO2_PORT, MCO2_PIN, 0);
    
    /* Setup blue button */
    gpio_init(USER_BUTTON_PORT);
    gpio_set_mode(USER_BUTTON_PORT, USER_BUTTOM_PIN, GPIO_MODE_INPUT);
    
    /* Setup yellow LED */
    gpio_init(USER_LED_PORT);
    gpio_set_mode(USER_LED_PORT, USER_LED_PIN, GPIO_MODE_OUTPUT);
    
    while (1) {
        if (gpio_get_pin(USER_BUTTON_PORT, USER_BUTTOM_PIN)) {
            /**
             * TODO: Add delay function for button bouncing
             */
            
            if (pin_state) {
                pin_state = 0;
                gpio_set_pin(USER_LED_PORT, USER_LED_PIN, 0);
            } else {
                gpio_set_pin(USER_LED_PORT, USER_LED_PIN, 1);
                pin_state = 1;
            }
        }
    }
}

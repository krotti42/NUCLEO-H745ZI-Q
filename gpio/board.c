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
#include <cortex_m7.h>


/* RCC_CR register flags */
#define HSEON               (1 << 16)
#define HSERDY              (1 << 17)
#define HSEBYP              (1 << 18)
#define PLL1ON              (1 << 24)
#define PLL1RDY             (1 << 25)
#define PLL2ON              (1 << 26)
#define PLL2RDY             (1 << 27)
#define PLL3ON              (1 << 28)
#define PLL3RDY             (1 << 29)

#define VOSRDY              (1 << 13)

void board_setup(void)
{
    unsigned int tmp;
    
    /**
     * Disable all peripheral clocks
     */
    tmp = *((unsigned int *) RCC_AHB1ENR);
    tmp &= 0xE1FC3FDC;
    *((unsigned int *) RCC_AHB1ENR) = tmp;
    
    tmp = *((unsigned int *) RCC_AHB2ENR);
    tmp &= 0x1FFFFD8E;
    *((unsigned int *) RCC_AHB2ENR) = tmp;
    
    tmp = *((unsigned int *) RCC_AHB3ENR);
    tmp &= 0x0FFEAECE;
    tmp |= (1 << 31);           /* Enable AXI-SRAM */
    *((unsigned int *) RCC_AHB3ENR) = tmp;
    
    tmp = *((unsigned int *) RCC_AHB4ENR);
    tmp &= 0xECD7F800;
    *((unsigned int *) RCC_AHB4ENR) = tmp;
    
    tmp = *((unsigned int *) RCC_APB1LENR);
    tmp &= 0x17003400;
    *((unsigned int *) RCC_APB1LENR) = tmp;
    
    tmp = *((unsigned int *) RCC_APB1HENR);
    tmp &= 0xFFFFFEC9;
    *((unsigned int *) RCC_APB1HENR) = tmp;
    
    tmp = *((unsigned int *) RCC_APB2ENR);
    tmp &= 0xCE28CFCC;
    *((unsigned int *) RCC_APB2ENR) = tmp;
    
    tmp = *((unsigned int *) RCC_APB3ENR);
    tmp &= 0xFFFFFFA7;
    *((unsigned int *) RCC_APB3ENR) = tmp;
    
    tmp = *((unsigned int *) RCC_APB4ENR);
    tmp &= 0xFFDE2155;
    *((unsigned int *) RCC_APB4ENR) = tmp;
    
    /**
     * Switch to VOS1
     */
    tmp = *((unsigned int *) PWR_D3CR);
    tmp &= 0xFFFF3FFF;
    tmp |= (3 << 14);
    *((unsigned int *) PWR_D3CR) = tmp;
    
    /* Wait until VOS is ready */
    while (!(*((unsigned int *) PWR_D3CR) & VOSRDY))
        ;
    
    /**
     * Setup FLASH latency for VOS1
     */
    tmp = *((unsigned int *) FLASH_ACR);
    tmp &= 0xFFFFFFC0;
    tmp |= (3 << 0);
    tmp |= (2 << 4);
    *((unsigned int *) FLASH_ACR) = tmp;
    
    /**
     * Enable MCO2 clock output and setup RTC prescaler
     */
    tmp = *(unsigned int *) (RCC_CFGR);
    tmp &= 0x00030000;
    tmp |= (8 << 25);           /* MCO2 prescaler is 10 => Output should be 40MHz */
    tmp |= (3 << 29);           /* MCO2 clock source is PLL1 output P */
    tmp |= (8 << 8);            /* RTC prescaler is 8 => 1MHz */
    *(unsigned int *) (RCC_CFGR) = tmp;
    
    /**
     * Enable external 8MHz clock from STLink 
     */
    tmp = *((unsigned int *) RCC_CR);
    tmp |= HSEON;
    tmp |= HSEBYP;
    *((unsigned int *) RCC_CR) = tmp;
    
    /* Wait until HSE is ready */
    while (!(*((unsigned int *) RCC_CR) & HSERDY))
        ;
    
    /**
     * Setup PLL1, PLL2 and PLL3 clock source and prescale
     */
    tmp = *((unsigned int *) RCC_PLLCKSELR);
    tmp &= 0xFC0C0C0C;
    tmp |= 2;                   /* HSE is PLL clock source */
    tmp |= (2 << 4);            /* PLL1 prescale by 2 */
    tmp |= (2 << 12);           /* PLL2 prescale by 2 */
    tmp |= (2 << 20);           /* PLL3 prescale by 2 */
    *((unsigned int *) RCC_PLLCKSELR) = tmp;
    
    /**
     * Setup PLL1, PLL2 and PLL3 fractional
     */
    tmp = *((unsigned int *) RCC_PLL1FRACR);
    tmp &= 0xFFFF0007;
    *((unsigned int *) RCC_PLL1FRACR) = tmp;
    
    tmp = *((unsigned int *) RCC_PLL2FRACR);
    tmp &= 0xFFFF0007;
    *((unsigned int *) RCC_PLL2FRACR) = tmp;
    
    tmp = *((unsigned int *) RCC_PLL3FRACR);
    tmp &= 0xFFFF0007;
    *((unsigned int *) RCC_PLL3FRACR) = tmp;
    
    /**
     * Setup PLL1, PLL2 and PLL3 fractional mode 
     */
    tmp = *(unsigned int *) (RCC_PLLCFGR);
    tmp &= 0xFE00F000;
    
    tmp |= (2 << 2);            /* PLL1 clock input range 4-8MHz */
    tmp |= (1 << 0);            /* Enable PLL1 fractional mode */
    tmp |= (1 << 16);           /* PLL1 output P enabled */
    
    tmp |= (2 << 6);            /* PLL2 clock input range 4-8MHz */
    tmp |= (1 << 4);            /* Enable PLL2 fractional mode */
    
    tmp |= (2 << 10);           /* PLL3 clock input range 4-8MHz */
    tmp |= (1 << 8);            /* Enable PLL3 fractional mode */
    
    *((unsigned int *) RCC_PLLCFGR) = tmp;
    
    /**
     * Setup PLL1
     */
    tmp = *(unsigned int *) (RCC_PLL1DIVR);
    tmp &= 0x8080000;
    
    tmp |= (199 << 0);          /* VCO frequency => 800MHz */
    tmp |= (1 << 9);            /* Output P => 400MHz */
    tmp |= (3 << 16);           /* Output Q => 200MHz */
    tmp |= (7 << 24);           /* Output R => 100MHz */
    
    *(unsigned int *) (RCC_PLL1DIVR) = tmp;
    
    /**
     * Setup PLL2
     */
    tmp = *(unsigned int *) (RCC_PLL2DIVR);
    tmp &= 0x8080000;
    
    tmp |= (99 << 0);          /* VCO frequency => 400MHz */
    tmp |= (1 << 9);            /* Output P => 200MHz */
    tmp |= (3 << 16);           /* Output Q => 100MHz */
    tmp |= (7 << 24);           /* Output R => 50MHz */
    
    *(unsigned int *) (RCC_PLL2DIVR) = tmp;
    
    /**
     * Setup PLL3
     */
    tmp = *(unsigned int *) (RCC_PLL3DIVR);
    tmp &= 0x8080000;
    
    tmp |= (49 << 0);           /* VCO frequency => 200MHz */
    tmp |= (1 << 9);            /* Output P => 100MHz */
    tmp |= (3 << 16);           /* Output Q => 50MHz */
    tmp |= (7 << 24);           /* Output R => 25MHz */
    
    *(unsigned int *) (RCC_PLL3DIVR) = tmp;
    
    /**
     * Enable PLL1
     */
    tmp = *((unsigned int *) RCC_CR);
    tmp |= PLL1ON;
    *((unsigned int *) RCC_CR) = tmp;
    
    /* Wait until PLL1 is ready */
    while (!(*((unsigned int *) RCC_CR) & PLL1RDY))
        ;
    
    /**
     * Enable PLL2 
     */
    tmp = *((unsigned int *) RCC_CR);
    tmp |= PLL2ON;
    *((unsigned int *) RCC_CR) = tmp;
    
    /* Wait until PLL2 is ready */
    while (!(*((unsigned int *) RCC_CR) & PLL2RDY))
        ;
    
    /**
     * Enable PLL3 
     */
    tmp = *((unsigned int *) RCC_CR);
    tmp |= PLL3ON;
    *((unsigned int *) RCC_CR) = tmp;
    
    /* Wait until PLL3 is ready */
    while (!(*((unsigned int *) RCC_CR) & PLL3RDY))
        ;
    
    /**
     * Switch system clock
     */
    tmp = *(unsigned int *) (RCC_D1CFGR);
    tmp &= 0xFFFFF080;
    tmp |= (0 << 8);
    tmp |= (4 << 4);
    tmp |= (8 << 0);
    *(unsigned int *) (RCC_D1CFGR) = tmp;
    
    tmp = *(unsigned int *) (RCC_D2CFGR);
    tmp &= 0xFFFFFFF8F;
    tmp |= (4 << 8);
    tmp |= (5 << 4);
    *(unsigned int *) (RCC_D2CFGR) = tmp;
    
    tmp = *(unsigned int *) (RCC_D3CFGR);
    tmp &= 0xFFFFFF88F;
    tmp |= (5 << 8);
    *(unsigned int *) (RCC_D3CFGR) = tmp;
    
    tmp = *(unsigned int *) (RCC_CFGR);
    tmp |= (3 << 0);                /* System clock is PLL1 output P */
    *(unsigned int *) (RCC_CFGR) = tmp;
    
    /**
     * Setup heartbeat (SysTick) to 1/4 second
     */
    *(unsigned int *) (SYST_CVR) = 0;
    *(unsigned int *) (SYST_RVR) = 0x00BEBC20;
    tmp = *(unsigned int *) (SYST_CSR);
    tmp |= (1 << 1);
    tmp |= (1 << 0);
    *(unsigned int *) (SYST_CSR) = tmp;
}

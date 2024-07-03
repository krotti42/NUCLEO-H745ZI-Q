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
 * STmicroelectronics STM32H745 peripherals registers
 */

#ifndef _STM32H745_H
#define _STM32H745_H

/**
 * Embedded Flash memory (FLASH) registers
 */

#define FLASH_ACR               0x52002000      /* FLASH access control register */
#define FLASH_KEYR1             0x52002004      /* FLASH key register for bank 1 */
#define FLASH_KEYR2             0x52002104      /* FLASH key register for bank 2 */
#define FLASH_OPTKEYR           0x52002008      /* FLASH option key register */
#define FLASH_CR1               0x5200200C      /* FLASH control register for bank 1 */
#define FLASH_CR2               0x5200210C      /* FLASH control register for bank 2 */
#define FLASH_SR1               0x52002010      /* FLASH status register for bank 1 */
#define FLASH_SR2               0x52002110      /* FLASH status register for bank 2 */
#define FLASH_CCR1              0x52002014      /* FLASH clear control register for bank 1 */
#define FLASH_CCR2              0x52002114      /* FLASH clear control register for bank 2 */
#define FLASH_OPTCR             0x52002018      /* FLASH option control register */
#define FLASH_OPTSR_CUR         0x5200201C      /* FLASH option status register */
#define FLASH_OPTSR_PRG         0x52002020      /* FLASH option status register */
#define FLASH_OPTCCR            0x52002024      /* FLASH option clear control register */
#define FLASH_PRAR_CUR1         0x52002028      /* FLASH protection address for bank 1 */
#define FLASH_PRAR_CUR2         0x52002128      /* FLASH protection address for bank 2 */
#define FLASH_PRAR_PRG1         0x5200202C      /* FLASH protection address for bank 1 */
#define FLASH_PRAR_PRG2         0x5200212C      /* FLASH protection address for bank 2 */
#define FLASH_SCAR_CUR1         0x52002030      /* FLASH secure address for bank 1 */
#define FLASH_SCAR_CUR2         0x52002130      /* FLASH secure address for bank 2 */
#define FLASH_SCAR_PRG1         0x52002034      /* FLASH secure address for bank 1 */
#define FLASH_SCAR_PRG2         0x52002134      /* FLASH secure address for bank 2 */
#define FLASH_WPSN_CUR1R        0x52002038      /* FLASH write sector protection for bank 1 */
#define FLASH_WPSN_CUR2R        0x52002138      /* FLASH write sector protection for bank 2 */
#define FLASH_WPSN_PRG1R        0x5200203C      /* FLASH write sector protection for bank 1 */
#define FLASH_WPSN_PRG12R       0x5200213C      /* FLASH write sector protection for bank 2 */
#define FLASH_BOOT7_CURR        0x52002040      /* FLASH register boot address for Cortex-M7 */
#define FLASH_BOOT7_PRGR        0x52002044      /* FLASH register boot address for Cortex-M7 */
#define FLASH_BOOT4_CURR        0x52002048      /* FLASH register boot address for Cortex-M4 */
#define FLASH_BOOT4_PRGR        0x5200204C      /* FLASH register boot address for Cortex-M4 */
#define FLASH_CRCCR1            0x52002050      /* FLASH CRC control register for bank 1 */
#define FLASH_CRCCR2            0x52002150      /* FLASH CRC control register for bank 2 */
#define FLASH_CRCSADD1R         0x52002054      /* FLASH CRC start address register for bank 1 */
#define FLASH_CRCSADD2R         0x52002154      /* FLASH CRC start address register for bank 2 */
#define FLASH_CRCEADD1R         0x52002058      /* FLASH CRC end address register for bank 1 */
#define FLASH_CRCEADD2R         0x52002158      /* FLASH CRC end address register for bank 2 */
#define FLASH_CRCDATAR          0x5200205C      /* FLASH CRC data register */
#define FLASH_ECC_FA1R          0x52002060      /* FLASH ECC fail address for bank 1 */
#define FLASH_ECC_FA2R          0x52002160      /* FLASH ECC fail address for bank 2 */

/**
 * ART (adaptive real-time) accelerator register (Cortex-M4 only)
 */

#define ART_CTR                 0x40024400      /* ART accelerator control register */

/**
 * Power control (PWR) registers
 */

#define PWR_CR1                 0x58024800      /* PWR control register 1 */
#define PWR_CSR1                0x58024804      /* PWR control status register 1 */
#define PWR_CR2                 0x58024808      /* PWR control register 2 */
#define PWR_CR3                 0x5802480C      /* PWR control register 3 */
#define PWR_CPU1CR              0x58024810      /* PWR CPU1 control register */
#define PWR_CPU2CR              0x58024814      /* PWR CPU2 control register */
#define PWR_D3CR                0x58024818      /* PWR D3 domain control register */
#define PWR_WKUPCR              0x58024820      /* PWR wakeup clear register */
#define PWR_WKUPFR              0x58024824      /* PWR wakeup flag register */
#define PWR_WKUPEPR             0x58024828      /* PWR wakeup enable and polarity register */

/**
 * Reset and Clock control (RCC) registers
 */

#define RCC_CR                  0x58024400      /* RCC source control register */
#define RCC_HSICFGR             0x58024404      /* RCC HSI configuration register */
#define RCC_CRRCR               0x58024408      /* RCC RCC clock recovery RC register */
#define RCC_CSICFGR             0x5802440C      /* RCC CSI configuration register */
#define RCC_CFGR                0x58024410      /* RCC clock configuration register */
#define RCC_D1CFGR              0x58024418      /* RCC domain 1 clock configuration register */
#define RCC_D2CFGR              0x5802441C      /* RCC domain 2 clock configuration register */
#define RCC_D3CFGR              0x58024420      /* RCC domain 3 clock configuration register */
#define RCC_PLLCKSELR           0x58024428      /* RCC PLLs clock source selection register */
#define RCC_PLLCFGR             0x5802442C      /* RCC PLLs configuration register */
#define RCC_PLL1DIVR            0x58024430      /* RCC PLL1 dividers configuration register */
#define RCC_PLL1FRACR           0x58024434      /* RCC PLL1 fractional divider register */
#define RCC_PLL2DIVR            0x58024438      /* RCC PLL2 dividers configuration register */
#define RCC_PLL2FRACR           0x5802443C      /* RCC PLL2 fractional divider register */
#define RCC_PLL3DIVR            0x58024440      /* RCC PLL3 dividers configuration register */
#define RCC_PLL3FRACR           0x58024444      /* RCC PLL3 fractional divider register */
#define RCC_D1CCIPR             0x5802444C      /* RCC domain 1 kernel clock configuration register */
#define RCC_D2CCIP1R            0x58024450      /* RCC domain 2 kernel clock configuration register */
#define RCC_D2CCIP2R            0x58024454      /* RCC domain 2 kernel clock configuration register */
#define RCC_D3CCIPR             0x58024458      /* RCC domain 3 kernel clock configuration register */
#define RCC_CIER                0x58024460      /* RCC clock source interrupt enable register */
#define RCC_CIFR                0x58024464      /* RCC clock source interrupt flag register */
#define RCC_CICR                0x58024468      /* RCC clock source interrupt clear register */
#define RCC_BDCR                0x58024470      /* RCC Backup domain control register */
#define RCC_CSR                 0x58024474      /* RCC clock control and status register */
#define RCC_AHB3RSTR            0x5802447C      /* RCC AHB3 reset register */
#define RCC_AHB1RSTR            0x58024480      /* RCC AHB1 peripheral reset register */
#define RCC_AHB2RSTR            0x58024484      /* RCC AHB2 peripheral reset register */
#define RCC_AHB4RSTR            0x58024488      /* RCC AHB4 peripheral reset register */
#define RCC_APB3RSTR            0x5802448C      /* RCC APB3 peripheral reset register */
#define RCC_APB1LRSTR           0x58024490      /* RCC APB1 peripheral reset register */
#define RCC_APB1HRSTR           0x58024494      /* RCC APB1 peripheral reset register */
#define RCC_APB2RSTR            0x58024498      /* RCC APB2 peripheral reset register */
#define RCC_APB4RSTR            0x5802449C      /* RCC APB4 peripheral reset register */
#define RCC_GCR                 0x580244A0      /* RCC global control register */
#define RCC_D3AMR               0x580244A8      /* RCC D3 Autonomous mode register */
#define RCC_RSR                 0x580244D0      /* RCC reset status register */
#define RCC_AHB3ENR             0x580244D4      /* RCC AHB3 clock register */
#define RCC_AHB1ENR             0x580244D8      /* RCC AHB1 clock register */
#define RCC_AHB2ENR             0x580244DC      /* RCC AHB2 clock register */
#define RCC_AHB4ENR             0x580244E0      /* RCC AHB4 clock register */
#define RCC_APB3ENR             0x580244E4      /* RCC APB3 clock register */
#define RCC_APB1LENR            0x580244E8      /* RCC APB1 clock register */
#define RCC_APB1HENR            0x580244EC      /* RCC APB1 clock register */
#define RCC_APB2ENR             0x580244F0      /* RCC APB2 clock register */
#define RCC_APB4ENR             0x580244F4      /* RCC APB4 clock register */
#define RCC_AHB3LPENR           0x580244FC      /* RCC AHB3 Sleep clock register */
#define RCC_AHB1LPENR           0x58024500      /* RCC AHB1 Sleep clock register */
#define RCC_AHB2LPENR           0x58024504      /* RCC AHB2 Sleep clock register */
#define RCC_AHB4LPENR           0x58024508      /* RCC AHB4 Sleep clock register */
#define RCC_APB3LPENR           0x5802450C      /* RCC APB3 Sleep clock register */
#define RCC_APB1LLPENR          0x58024510      /* RCC APB1 Low Sleep clock register */
#define RCC_APB1HLPENR          0x58024514      /* RCC APB1 High Sleep clock register */
#define RCC_APB2LPENR           0x58024518      /* RCC APB2 Sleep clock register */
#define RCC_APB4LPENR           0x5802451C      /* RCC APB4 Sleep clock register */
#define RCC_C1_RSR              0x58024530      /* RCC CPU1 reset status register */
#define RCC_C1_AHB3ENR          0x58024534      /* RCC CPU1 AHB3 clock register */
#define RCC_C1_AHB1ENR          0x58024538      /* RCC CPU1 AHB1 clock register */
#define RCC_C1_AHB2ENR          0x5802453C      /* RCC CPU1 AHB2 clock register */
#define RCC_C1_AHB4ENR          0x58024540      /* RCC CPU1 AHB4 clock register */
#define RCC_C1_APB3ENR          0x58024544      /* RCC CPU1 APB3 clock register */
#define RCC_C1_APB1LENR         0x58024548      /* RCC CPU1 APB1 clock register */
#define RCC_C1_APB1HENR         0x5802454C      /* RCC CPU1 APB1 clock register */
#define RCC_C1_APB2ENR          0x58024550      /* RCC CPU1 APB2 clock register */
#define RCC_C1_APB4ENR          0x58024554      /* RCC CPU1 APB4 clock register */
#define RCC_C1_AHB3LPENR        0x5802455C      /* RCC CPU1 AHB3 Sleep clock register */
#define RCC_C1_AHB1LPENR        0x58024560      /* RCC CPU1 AHB1 Sleep clock register */
#define RCC_C1_AHB2LPENR        0x58024564      /* RCC CPU1 AHB2 Sleep clock register */
#define RCC_C1_AHB4LPENR        0x58024568      /* RCC CPU1 AHB4 Sleep clock register */
#define RCC_C1_APB3LPENR        0x5802456C      /* RCC CPU1 AHB3 Sleep clock register */
#define RCC_C1_APB1LLPENR       0x58024570      /* RCC CPU1 APB1 Low Sleep clock register */
#define RCC_C1_APB1HLPENR       0x58024574      /* RCC CPU1 APB1 High Sleep clock register */
#define RCC_C1_APB2LPENR        0x58024578      /* RCC CPU1 APB2 Sleep clock register */
#define RCC_C1_APB4LPENR        0x5802457C      /* RCC CPU1 APB4 Sleep clock register */
#define RCC_C2_RSR              0x58024590      /* RCC CPU2 reset status register */
#define RCC_C2_AHB3ENR          0x58024594      /* RCC CPU2 AHB3 clock register */
#define RCC_C2_AHB1ENR          0x58024598      /* RCC CPU2 AHB1 clock register */
#define RCC_C2_AHB2ENR          0x5802459C      /* RCC CPU2 AHB2 clock register */
#define RCC_C2_AHB4ENR          0x580245A0      /* RCC CPU2 AHB4 clock register */
#define RCC_C2_APB3ENR          0x580245A4      /* RCC CPU2 APB3 clock register */
#define RCC_C2_APB1LENR         0x580245A8      /* RCC CPU2 APB1 clock register */
#define RCC_C2_APB1HENR         0x580245AC      /* RCC CPU2 APB1 clock register */
#define RCC_C2_APB2ENR          0x580245B0      /* RCC CPU2 APB2 clock register */
#define RCC_C2_APB4ENR          0x580245B4      /* RCC CPU2 APB4 clock register */
#define RCC_C2_AHB3LPENR        0x580245BC      /* RCC CPU2 AHB3 Sleep clock register */
#define RCC_C2_AHB1LPENR        0x580245C0      /* RCC CPU2 AHB1 Sleep clock register */
#define RCC_C2_AHB2LPENR        0x580245C4      /* RCC CPU2 AHB2 Sleep clock register */
#define RCC_C2_AHB4LPENR        0x580245C8      /* RCC CPU2 AHB4 Sleep clock register */
#define RCC_C2_APB3LPENR        0x580245CC      /* RCC CPU2 AHB3 Sleep clock register */
#define RCC_C2_APB1LLPENR       0x580245D0      /* RCC CPU2 APB1 Low Sleep clock register */
#define RCC_C2_APB1HLPENR       0x580245D4      /* RCC CPU2 APB1 High Sleep clock register */
#define RCC_C2_APB2LPENR        0x580245D8      /* RCC CPU2 APB2 Sleep clock register */
#define RCC_C2_APB4LPENR        0x580245DC      /* RCC CPU2 APB4 Sleep clock register */

/**
 * Clock recovery system (CRS) registers
 */

#define CRS_CR                  0x40008400      /* CRS control register */
#define CRS_CFGR                0x40008404      /* CRS configuration register */
#define CRS_ISR                 0x40008408      /* CRS interrupt and status register */
#define CRS_ICR                 0x4000840C      /* CRS interrupt flag clear register */

/**
 * Hardware semaphore (HSEM) registers
 */

#define HSEM_R0                 0x58026400      /* HSEM register semaphore */
#define HSEM_R1                 0x58026404
#define HSEM_R2                 0x58026408
#define HSEM_R3                 0x5802640C
#define HSEM_R4                 0x58026410
#define HSEM_R5                 0x58026414
#define HSEM_R6                 0x58026418
#define HSEM_R7                 0x5802641C
#define HSEM_R8                 0x58026420
#define HSEM_R9                 0x58026424
#define HSEM_R10                0x58026428
#define HSEM_R11                0x5802642C
#define HSEM_R12                0x58026430
#define HSEM_R13                0x58026434
#define HSEM_R14                0x58026438
#define HSEM_R15                0x5802643C
#define HSEM_R16                0x58026440
#define HSEM_R17                0x58026444
#define HSEM_R18                0x58026448
#define HSEM_R19                0x5802644C
#define HSEM_R20                0x58026450
#define HSEM_R21                0x58026454
#define HSEM_R22                0x58026458
#define HSEM_R23                0x5802645C
#define HSEM_R24                0x58026460
#define HSEM_R25                0x58026464
#define HSEM_R26                0x58026468
#define HSEM_R27                0x5802646C
#define HSEM_R28                0x58026470
#define HSEM_R29                0x58026474
#define HSEM_R30                0x58026478
#define HSEM_R31                0x5802647C
#define HSEM_RLR0               0x58026480      /* HSEM read lock register semaphore */
#define HSEM_RLR1               0x58026484
#define HSEM_RLR2               0x58026488
#define HSEM_RLR3               0x5802648C
#define HSEM_RLR4               0x58026490
#define HSEM_RLR5               0x58026494
#define HSEM_RLR6               0x58026498
#define HSEM_RLR7               0x5802649C
#define HSEM_RLR8               0x580264A0
#define HSEM_RLR9               0x580264A4
#define HSEM_RLR10              0x580264A8
#define HSEM_RLR11              0x580264AC
#define HSEM_RLR12              0x580264B0
#define HSEM_RLR13              0x580264B4
#define HSEM_RLR14              0x580264B8
#define HSEM_RLR15              0x580264BC
#define HSEM_RLR16              0x580264C0
#define HSEM_RLR17              0x580264C4
#define HSEM_RLR18              0x580264C8
#define HSEM_RLR19              0x580264CC
#define HSEM_RLR20              0x580264D0
#define HSEM_RLR21              0x580264D4
#define HSEM_RLR22              0x580264D8
#define HSEM_RLR23              0x580264DC
#define HSEM_RLR24              0x580264E0
#define HSEM_RLR25              0x580264E4
#define HSEM_RLR26              0x580264E8
#define HSEM_RLR27              0x580264EC
#define HSEM_RLR28              0x580264F0
#define HSEM_RLR29              0x580264F4
#define HSEM_RLR30              0x580264F8
#define HSEM_RLR31              0x580264FC
#define HSEM_C1IER              0x58026500      /* HSEM interrupt enable register */
#define HSEM_C1ICR              0x58026504      /* HSEM interrupt clear register */
#define HSEM_C1ISR              0x58026508      /* HSEM interrupt status register */
#define HSEM_C1MISR             0x5802650C      /* HSEM interrupt status register */
#define HSEM_C2IER              0x58026510      /* HSEM interrupt enable register */
#define HSEM_C2ICR              0x58026514      /* HSEM interrupt clear register */
#define HSEM_C2ISR              0x58026518      /* HSEM interrupt status register */
#define HSEM_C2MISR             0x5802651C      /* HSEM interrupt status register */
#define HSEM_CR                 0x58026540      /* HSEM clear register */
#define HSEM_KEYR               0x58026544      /* HSEM clear semaphore key register */


/**
 * General-purpose I/Os (GPIO) registers
 */

#ifndef _ASM_ASSEMBLY_

/* GPIO block reset (RCC) */
#define GPIO_RCC_RSTR           RCC_AHB4RSTR

#define GPIOARST                (1 << 0)
#define GPIOBRST                (1 << 1)
#define GPIOCRST                (1 << 2)
#define GPIODRST                (1 << 3)
#define GPIOERST                (1 << 4)
#define GPIOFRST                (1 << 5)
#define GPIOGRST                (1 << 6)
#define GPIOHRST                (1 << 7)
#define GPIOIRST                (1 << 8)
#define GPIOJRST                (1 << 9)
#define GPIOKRST                (1 << 10)

/* GPIO block clock enable (RCC) */
#define GPIO_RCC_ENR            RCC_AHB4ENR

#define GPIOAEN                 (1 << 0)
#define GPIOBEN                 (1 << 1)
#define GPIOCEN                 (1 << 2)
#define GPIODEN                 (1 << 3)
#define GPIOEEN                 (1 << 4)
#define GPIOFEN                 (1 << 5)
#define GPIOGEN                 (1 << 6)
#define GPIOHEN                 (1 << 7)
#define GPIOIEN                 (1 << 8)
#define GPIOJEN                 (1 << 9)
#define GPIOKEN                 (1 << 10)

/* GPIO register offsets */
#define GPIO_MODER              0x00            /* GPIO port mode register */
#define GPIO_OTYPER             0x04            /* GPIO port output type register */
#define GPIO_OSPEEDR            0x08            /* GPIO port output speed register  */
#define GPIO_PUPDR              0x0C            /* GPIO port pull-up/pull-down register */
#define GPIO_IDR                0x10            /* GPIO port input data register */
#define GPIO_ODR                0x14            /* GPIO port output data register */
#define GPIO_BSRR               0x18            /* GPIO port bit set/reset register */
#define GPIO_LCKR               0x1C            /* GPIO port configuration lock register */
#define GPIO_AFRL               0x20            /* GPIO alternate function low register */
#define GPIO_AFRH               0x24            /* GPIO alternate function high register */

#endif

/* GPIOA registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOA_BASE              0x58020000

#define GPIOA_MODER             (GPIOA_BASE + GPIO_MODER)
#define GPIOA_OTYPER            (GPIOA_BASE + GPIO_OTYPER)
#define GPIOA_OSPEEDR           (GPIOA_BASE + GPIO_OSPEEDR)
#define GPIOA_PUPDR             (GPIOA_BASE + GPIO_PUPDR)
#define GPIOA_IDR               (GPIOA_BASE + GPIO_IDR)
#define GPIOA_ODR               (GPIOA_BASE + GPIO_ODR)
#define GPIOA_BSRR              (GPIOA_BASE + GPIO_BSRR)
#define GPIOA_LCKR              (GPIOA_BASE + GPIO_LCKR)
#define GPIOA_AFRL              (GPIOA_BASE + GPIO_AFRL)
#define GPIOA_AFRH              (GPIOA_BASE + GPIO_AFRH)

#else

#define GPIOA_MODER             0x58020000      /* GPIO port mode register */
#define GPIOA_OTYPER            0x58020004      /* GPIO port output type register */
#define GPIOA_OSPEEDR           0x58020008      /* GPIO port output speed register  */
#define GPIOA_PUPDR             0x5802000C      /* GPIO port pull-up/pull-down register */
#define GPIOA_IDR               0x58020010      /* GPIO port input data register */
#define GPIOA_ODR               0x58020014      /* GPIO port output data register */
#define GPIOA_BSRR              0x58020018      /* GPIO port bit set/reset register */
#define GPIOA_LCKR              0x5802001C      /* GPIO port configuration lock register */
#define GPIOA_AFRL              0x58020020      /* GPIO alternate function low register */
#define GPIOA_AFRH              0x58020024      /* GPIO alternate function high register */

#endif

/* GPIOB registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOB_BASE              0x58020400

#define GPIOB_MODER             (GPIOB_BASE + GPIO_MODER)
#define GPIOB_OTYPER            (GPIOB_BASE + GPIO_OTYPER)
#define GPIOB_OSPEEDR           (GPIOB_BASE + GPIO_OSPEEDR)
#define GPIOB_PUPDR             (GPIOB_BASE + GPIO_PUPDR)
#define GPIOB_IDR               (GPIOB_BASE + GPIO_IDR)
#define GPIOB_ODR               (GPIOB_BASE + GPIO_ODR)
#define GPIOB_BSRR              (GPIOB_BASE + GPIO_BSRR)
#define GPIOB_LCKR              (GPIOB_BASE + GPIO_LCKR)
#define GPIOB_AFRL              (GPIOB_BASE + GPIO_AFRL)
#define GPIOB_AFRH              (GPIOB_BASE + GPIO_AFRH)

#else

#define GPIOB_MODER             0x58020400      /* GPIO port mode register */
#define GPIOB_OTYPER            0x58020404      /* GPIO port output type register */
#define GPIOB_OSPEEDR           0x58020408      /* GPIO port output speed register  */
#define GPIOB_PUPDR             0x5802040C      /* GPIO port pull-up/pull-down register */
#define GPIOB_IDR               0x58020410      /* GPIO port input data register */
#define GPIOB_ODR               0x58020414      /* GPIO port output data register */
#define GPIOB_BSRR              0x58020418      /* GPIO port bit set/reset register */
#define GPIOB_LCKR              0x5802041C      /* GPIO port configuration lock register */
#define GPIOB_AFRL              0x58020420      /* GPIO alternate function low register */
#define GPIOB_AFRH              0x58020424      /* GPIO alternate function high register */

#endif

/* GPIOC registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOC_BASE              0x58020800

#define GPIOC_MODER             (GPIOC_BASE + GPIO_MODER)
#define GPIOC_OTYPER            (GPIOC_BASE + GPIO_OTYPER)
#define GPIOC_OSPEEDR           (GPIOC_BASE + GPIO_OSPEEDR)
#define GPIOC_PUPDR             (GPIOC_BASE + GPIO_PUPDR)
#define GPIOC_IDR               (GPIOC_BASE + GPIO_IDR)
#define GPIOC_ODR               (GPIOC_BASE + GPIO_ODR)
#define GPIOC_BSRR              (GPIOC_BASE + GPIO_BSRR)
#define GPIOC_LCKR              (GPIOC_BASE + GPIO_LCKR)
#define GPIOC_AFRL              (GPIOC_BASE + GPIO_AFRL)
#define GPIOC_AFRH              (GPIOC_BASE + GPIO_AFRH)

#else

#define GPIOC_MODER             0x58020800      /* GPIO port mode register */
#define GPIOC_OTYPER            0x58020804      /* GPIO port output type register */
#define GPIOC_OSPEEDR           0x58020808      /* GPIO port output speed register  */
#define GPIOC_PUPDR             0x5802080C      /* GPIO port pull-up/pull-down register */
#define GPIOC_IDR               0x58020810      /* GPIO port input data register */
#define GPIOC_ODR               0x58020814      /* GPIO port output data register */
#define GPIOC_BSRR              0x58020818      /* GPIO port bit set/reset register */
#define GPIOC_LCKR              0x5802081C      /* GPIO port configuration lock register */
#define GPIOC_AFRL              0x58020820      /* GPIO alternate function low register */
#define GPIOC_AFRH              0x58020824      /* GPIO alternate function high register */

#endif

/* GPIOD registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOD_BASE              0x58020C00

#define GPIOD_MODER             (GPIOD_BASE + GPIO_MODER)
#define GPIOD_OTYPER            (GPIOD_BASE + GPIO_OTYPER)
#define GPIOD_OSPEEDR           (GPIOD_BASE + GPIO_OSPEEDR)
#define GPIOD_PUPDR             (GPIOD_BASE + GPIO_PUPDR)
#define GPIOD_IDR               (GPIOD_BASE + GPIO_IDR)
#define GPIOD_ODR               (GPIOD_BASE + GPIO_ODR)
#define GPIOD_BSRR              (GPIOD_BASE + GPIO_BSRR)
#define GPIOD_LCKR              (GPIOD_BASE + GPIO_LCKR)
#define GPIOD_AFRL              (GPIOD_BASE + GPIO_AFRL)
#define GPIOD_AFRH              (GPIOD_BASE + GPIO_AFRH)

#else

#define GPIOD_MODER             0x58020C00      /* GPIO port mode register */
#define GPIOD_OTYPER            0x58020C04      /* GPIO port output type register */
#define GPIOD_OSPEEDR           0x58020C08      /* GPIO port output speed register  */
#define GPIOD_PUPDR             0x58020C0C      /* GPIO port pull-up/pull-down register */
#define GPIOD_IDR               0x58020C10      /* GPIO port input data register */
#define GPIOD_ODR               0x58020C14      /* GPIO port output data register */
#define GPIOD_BSRR              0x58020C18      /* GPIO port bit set/reset register */
#define GPIOD_LCKR              0x58020C1C      /* GPIO port configuration lock register */
#define GPIOD_AFRL              0x58020C20      /* GPIO alternate function low register */
#define GPIOD_AFRH              0x58020C24      /* GPIO alternate function high register */

#endif

/* GPIOE registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOE_BASE              0x58021000

#define GPIOE_MODER             (GPIOE_BASE + GPIO_MODER)
#define GPIOE_OTYPER            (GPIOE_BASE + GPIO_OTYPER)
#define GPIOE_OSPEEDR           (GPIOE_BASE + GPIO_OSPEEDR)
#define GPIOE_PUPDR             (GPIOE_BASE + GPIO_PUPDR)
#define GPIOE_IDR               (GPIOE_BASE + GPIO_IDR)
#define GPIOE_ODR               (GPIOE_BASE + GPIO_ODR)
#define GPIOE_BSRR              (GPIOE_BASE + GPIO_BSRR)
#define GPIOE_LCKR              (GPIOE_BASE + GPIO_LCKR)
#define GPIOE_AFRL              (GPIOE_BASE + GPIO_AFRL)
#define GPIOE_AFRH              (GPIOE_BASE + GPIO_AFRH)

#else

#define GPIOE_MODER             0x58021000      /* GPIO port mode register */
#define GPIOE_OTYPER            0x58021004      /* GPIO port output type register */
#define GPIOE_OSPEEDR           0x58021008      /* GPIO port output speed register  */
#define GPIOE_PUPDR             0x5802100C      /* GPIO port pull-up/pull-down register */
#define GPIOE_IDR               0x58021010      /* GPIO port input data register */
#define GPIOE_ODR               0x58021014      /* GPIO port output data register */
#define GPIOE_BSRR              0x58021018      /* GPIO port bit set/reset register */
#define GPIOE_LCKR              0x5802101C      /* GPIO port configuration lock register */
#define GPIOE_AFRL              0x58021020      /* GPIO alternate function low register */
#define GPIOE_AFRH              0x58021024      /* GPIO alternate function high register */

#endif

/* GPIOF registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOF_BASE              0x58021400

#define GPIOF_MODER             (GPIOF_BASE + GPIO_MODER)
#define GPIOF_OTYPER            (GPIOF_BASE + GPIO_OTYPER)
#define GPIOF_OSPEEDR           (GPIOF_BASE + GPIO_OSPEEDR)
#define GPIOF_PUPDR             (GPIOF_BASE + GPIO_PUPDR)
#define GPIOF_IDR               (GPIOF_BASE + GPIO_IDR)
#define GPIOF_ODR               (GPIOF_BASE + GPIO_ODR)
#define GPIOF_BSRR              (GPIOF_BASE + GPIO_BSRR)
#define GPIOF_LCKR              (GPIOF_BASE + GPIO_LCKR)
#define GPIOF_AFRL              (GPIOF_BASE + GPIO_AFRL)
#define GPIOF_AFRH              (GPIOF_BASE + GPIO_AFRH)

#else

#define GPIOF_MODER             0x58021400      /* GPIO port mode register */
#define GPIOF_OTYPER            0x58021404      /* GPIO port output type register */
#define GPIOF_OSPEEDR           0x58021408      /* GPIO port output speed register  */
#define GPIOF_PUPDR             0x5802140C      /* GPIO port pull-up/pull-down register */
#define GPIOF_IDR               0x58021410      /* GPIO port input data register */
#define GPIOF_ODR               0x58021414      /* GPIO port output data register */
#define GPIOF_BSRR              0x58021418      /* GPIO port bit set/reset register */
#define GPIOF_LCKR              0x5802141C      /* GPIO port configuration lock register */
#define GPIOF_AFRL              0x58021420      /* GPIO alternate function low register */
#define GPIOF_AFRH              0x58021424      /* GPIO alternate function high register */

#endif

/* GPIOG registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOG_BASE              0x58021800

#define GPIOG_MODER             (GPIOG_BASE + GPIO_MODER)
#define GPIOG_OTYPER            (GPIOG_BASE + GPIO_OTYPER)
#define GPIOG_OSPEEDR           (GPIOG_BASE + GPIO_OSPEEDR)
#define GPIOG_PUPDR             (GPIOG_BASE + GPIO_PUPDR)
#define GPIOG_IDR               (GPIOG_BASE + GPIO_IDR)
#define GPIOG_ODR               (GPIOG_BASE + GPIO_ODR)
#define GPIOG_BSRR              (GPIOG_BASE + GPIO_BSRR)
#define GPIOG_LCKR              (GPIOG_BASE + GPIO_LCKR)
#define GPIOG_AFRL              (GPIOG_BASE + GPIO_AFRL)
#define GPIOG_AFRH              (GPIOG_BASE + GPIO_AFRH)

#else

#define GPIOG_MODER             0x58021800      /* GPIO port mode register */
#define GPIOG_OTYPER            0x58021804      /* GPIO port output type register */
#define GPIOG_OSPEEDR           0x58021808      /* GPIO port output speed register  */
#define GPIOG_PUPDR             0x5802180C      /* GPIO port pull-up/pull-down register */
#define GPIOG_IDR               0x58021810      /* GPIO port input data register */
#define GPIOG_ODR               0x58021814      /* GPIO port output data register */
#define GPIOG_BSRR              0x58021818      /* GPIO port bit set/reset register */
#define GPIOG_LCKR              0x5802181C      /* GPIO port configuration lock register */
#define GPIOG_AFRL              0x58021820      /* GPIO alternate function low register */
#define GPIOG_AFRH              0x58021824      /* GPIO alternate function high register */

#endif

/* GPIOH registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOH_BASE              0x58021C00

#define GPIOH_MODER             (GPIOH_BASE + GPIO_MODER)
#define GPIOH_OTYPER            (GPIOH_BASE + GPIO_OTYPER)
#define GPIOH_OSPEEDR           (GPIOH_BASE + GPIO_OSPEEDR)
#define GPIOH_PUPDR             (GPIOH_BASE + GPIO_PUPDR)
#define GPIOH_IDR               (GPIOH_BASE + GPIO_IDR)
#define GPIOH_ODR               (GPIOH_BASE + GPIO_ODR)
#define GPIOH_BSRR              (GPIOH_BASE + GPIO_BSRR)
#define GPIOH_LCKR              (GPIOH_BASE + GPIO_LCKR)
#define GPIOH_AFRL              (GPIOH_BASE + GPIO_AFRL)
#define GPIOH_AFRH              (GPIOH_BASE + GPIO_AFRH)

#else

#define GPIOH_MODER             0x58021C00      /* GPIO port mode register */
#define GPIOH_OTYPER            0x58021C04      /* GPIO port output type register */
#define GPIOH_OSPEEDR           0x58021C08      /* GPIO port output speed register  */
#define GPIOH_PUPDR             0x58021C0C      /* GPIO port pull-up/pull-down register */
#define GPIOH_IDR               0x58021C10      /* GPIO port input data register */
#define GPIOH_ODR               0x58021C14      /* GPIO port output data register */
#define GPIOH_BSRR              0x58021C18      /* GPIO port bit set/reset register */
#define GPIOH_LCKR              0x58021C1C      /* GPIO port configuration lock register */
#define GPIOH_AFRL              0x58021C20      /* GPIO alternate function low register */
#define GPIOH_AFRH              0x58021C24      /* GPIO alternate function high register */

#endif

/* GPIOI registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOI_BASE              0x58022000

#define GPIOI_MODER             (GPIOI_BASE + GPIO_MODER)
#define GPIOI_OTYPER            (GPIOI_BASE + GPIO_OTYPER)
#define GPIOI_OSPEEDR           (GPIOI_BASE + GPIO_OSPEEDR)
#define GPIOI_PUPDR             (GPIOI_BASE + GPIO_PUPDR)
#define GPIOI_IDR               (GPIOI_BASE + GPIO_IDR)
#define GPIOI_ODR               (GPIOI_BASE + GPIO_ODR)
#define GPIOI_BSRR              (GPIOI_BASE + GPIO_BSRR)
#define GPIOI_LCKR              (GPIOI_BASE + GPIO_LCKR)
#define GPIOI_AFRL              (GPIOI_BASE + GPIO_AFRL)
#define GPIOI_AFRH              (GPIOI_BASE + GPIO_AFRH)

#else

#define GPIOI_MODER             0x58022000      /* GPIO port mode register */
#define GPIOI_OTYPER            0x58022004      /* GPIO port output type register */
#define GPIOI_OSPEEDR           0x58022008      /* GPIO port output speed register  */
#define GPIOI_PUPDR             0x5802200C      /* GPIO port pull-up/pull-down register */
#define GPIOI_IDR               0x58022010      /* GPIO port input data register */
#define GPIOI_ODR               0x58022014      /* GPIO port output data register */
#define GPIOI_BSRR              0x58022018      /* GPIO port bit set/reset register */
#define GPIOI_LCKR              0x5802201C      /* GPIO port configuration lock register */
#define GPIOI_AFRL              0x58022020      /* GPIO alternate function low register */
#define GPIOI_AFRH              0x58022024      /* GPIO alternate function high register */

#endif

/* GPIOJ registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOJ_BASE              0x58022400

#define GPIOJ_MODER             (GPIOJ_BASE + GPIO_MODER)
#define GPIOJ_OTYPER            (GPIOJ_BASE + GPIO_OTYPER)
#define GPIOJ_OSPEEDR           (GPIOJ_BASE + GPIO_OSPEEDR)
#define GPIOJ_PUPDR             (GPIOJ_BASE + GPIO_PUPDR)
#define GPIOJ_IDR               (GPIOJ_BASE + GPIO_IDR)
#define GPIOJ_ODR               (GPIOJ_BASE + GPIO_ODR)
#define GPIOJ_BSRR              (GPIOJ_BASE + GPIO_BSRR)
#define GPIOJ_LCKR              (GPIOJ_BASE + GPIO_LCKR)
#define GPIOJ_AFRL              (GPIOJ_BASE + GPIO_AFRL)
#define GPIOJ_AFRH              (GPIOJ_BASE + GPIO_AFRH)

#else

#define GPIOJ_MODER             0x58022400      /* GPIO port mode register */
#define GPIOJ_OTYPER            0x58022404      /* GPIO port output type register */
#define GPIOJ_OSPEEDR           0x58022408      /* GPIO port output speed register  */
#define GPIOJ_PUPDR             0x5802240C      /* GPIO port pull-up/pull-down register */
#define GPIOJ_IDR               0x58022410      /* GPIO port input data register */
#define GPIOJ_ODR               0x58022414      /* GPIO port output data register */
#define GPIOJ_BSRR              0x58022418      /* GPIO port bit set/reset register */
#define GPIOJ_LCKR              0x5802241C      /* GPIO port configuration lock register */
#define GPIOJ_AFRL              0x58022420      /* GPIO alternate function low register */
#define GPIOJ_AFRH              0x58022424      /* GPIO alternate function high register */

#endif

/* GPIOK registers */
#ifndef _ASM_ASSEMBLY_

#define GPIOK_BASE              0x58022800

#define GPIOK_MODER             (GPIOK_BASE + GPIO_MODER)
#define GPIOK_OTYPER            (GPIOK_BASE + GPIO_OTYPER)
#define GPIOK_OSPEEDR           (GPIOK_BASE + GPIO_OSPEEDR)
#define GPIOK_PUPDR             (GPIOK_BASE + GPIO_PUPDR)
#define GPIOK_IDR               (GPIOK_BASE + GPIO_IDR)
#define GPIOK_ODR               (GPIOK_BASE + GPIO_ODR)
#define GPIOK_BSRR              (GPIOK_BASE + GPIO_BSRR)
#define GPIOK_LCKR              (GPIOK_BASE + GPIO_LCKR)
#define GPIOK_AFRL              (GPIOK_BASE + GPIO_AFRL)
#define GPIOK_AFRH              (GPIOK_BASE + GPIO_AFRH)

#else

#define GPIOK_MODER             0x58022800      /* GPIO port mode register */
#define GPIOK_OTYPER            0x58022804      /* GPIO port output type register */
#define GPIOK_OSPEEDR           0x58022808      /* GPIO port output speed register  */
#define GPIOK_PUPDR             0x5802280C      /* GPIO port pull-up/pull-down register */
#define GPIOK_IDR               0x58022810      /* GPIO port input data register */
#define GPIOK_ODR               0x58022814      /* GPIO port output data register */
#define GPIOK_BSRR              0x58022818      /* GPIO port bit set/reset register */
#define GPIOK_LCKR              0x5802281C      /* GPIO port configuration lock register */
#define GPIOK_AFRL              0x58022820      /* GPIO alternate function low register */
#define GPIOK_AFRH              0x58022824      /* GPIO alternate function high register */

#endif

/**
 * System configuration controller (SYSCFG) registers
 */

#define SYSCFG_PMCR             0x58000404      /* SYSCFG peripheral mode configuration register */
#define SYSCFG_EXTICR1          0x58000408      /* SYSCFG external interrupt configuration register 1 */
#define SYSCFG_EXTICR2          0x5800040C      /* SYSCFG external interrupt configuration register 2 */
#define SYSCFG_EXTICR3          0x58000410      /* SYSCFG external interrupt configuration register 3 */
#define SYSCFG_EXTICR4          0x58000414      /* SYSCFG external interrupt configuration register 4 */
#define SYSCFG_CFGR             0x58000418      /* SYSCFG configuration register  */
#define SYSCFG_CCSR             0x58000420      /* SYSCFG compensation cell control/status register */
#define SYSCFG_CCVR             0x58000424      /* SYSCFG compensation cell value register */
#define SYSCFG_CCCR             0x58000428      /* SYSCFG compensation cell code register */
#define SYSCFG_PWRCR            0x5800042C      /* SYSCFG power control register */
#define SYSCFG_SR0              0x58000500      /* SYSCFG system register */
#define SYSCFG_PKGR             0x58000524      /* SYSCFG package register */
#define SYSCFG_UR0              0x58000700      /* SYSCFG user register */
#define SYSCFG_UR1              0x58000704
#define SYSCFG_UR2              0x58000708
#define SYSCFG_UR3              0x5800070C
#define SYSCFG_UR4              0x58000710
#define SYSCFG_UR5              0x58000714
#define SYSCFG_UR6              0x58000718
#define SYSCFG_UR7              0x5800071C
#define SYSCFG_UR8              0x58000720
#define SYSCFG_UR9              0x58000724
#define SYSCFG_UR10             0x58000728
#define SYSCFG_UR11             0x5800072C
#define SYSCFG_UR12             0x58000730
#define SYSCFG_UR13             0x58000734
#define SYSCFG_UR14             0x58000738
#define SYSCFG_UR15             0x5800073C
#define SYSCFG_UR16             0x58000740
#define SYSCFG_UR17             0x58000744

/**
 * MDMA controller (MDMA) registers
 */

#define MDMA_GISR0              0x52000000      /* MDMA global interrupt status register */

/* Channel 0 */
#define MDMA_C0ISR              0x52000040      /* MDMA channel x interrupt status register */
#define MDMA_C0IFCR             0x52000044      /* MDMA channel x interrupt flag clear register */
#define MDMA_C0ESR              0x52000048      /* MDMA channel x error status register */
#define MDMA_C0CR               0x5200004C      /* MDMA channel x control register */
#define MDMA_C0TCR              0x52000050      /* MDMA channel x transfer configuration register */
#define MDMA_C0BNDTR            0x52000054      /* MDMA channel x block number of data register */
#define MDMA_C0SAR              0x52000058      /* MDMA channel x source address register */
#define MDMA_C0DAR              0x5200005C      /* MDMA channel x destination address register */
#define MDMA_C0BRUR             0x52000060      /* MDMA channel x block repeat address update register */
#define MDMA_C0LAR              0x52000064      /* MDMA channel x link address register */
#define MDMA_C0TBR              0x52000068      /* MDMA channel x trigger and bus selection register */
#define MDMA_C0MAR              0x52000070      /* MDMA channel x mask address register */
#define MDMA_C0MDR              0x52000074      /* MDMA channel x mask data register */

/* Channel 1 */
#define MDMA_C1ISR              0x52000080
#define MDMA_C1IFCR             0x52000084
#define MDMA_C1ESR              0x52000088
#define MDMA_C1CR               0x5200008C
#define MDMA_C1TCR              0x52000090
#define MDMA_C1BNDTR            0x52000094
#define MDMA_C1SAR              0x52000098
#define MDMA_C1DAR              0x5200009C
#define MDMA_C1BRUR             0x520000A0
#define MDMA_C1LAR              0x520000A4
#define MDMA_C1TBR              0x520000A8
#define MDMA_C1MAR              0x520000B0
#define MDMA_C1MDR              0x520000B4

/* Channel 2 */
#define MDMA_C2ISR              0x520000C0
#define MDMA_C2IFCR             0x520000C4
#define MDMA_C2ESR              0x520000C8
#define MDMA_C2CR               0x520000CC
#define MDMA_C2TCR              0x520000D0
#define MDMA_C2BNDTR            0x520000D4
#define MDMA_C2SAR              0x520000D8
#define MDMA_C2DAR              0x520000DC
#define MDMA_C2BRUR             0x520000E0
#define MDMA_C2LAR              0x520000E4
#define MDMA_C2TBR              0x520000E8
#define MDMA_C2MAR              0x520000F0
#define MDMA_C2MDR              0x520000F4

/* Channel 3 */
#define MDMA_C3ISR              0x52000100
#define MDMA_C3IFCR             0x52000104
#define MDMA_C3ESR              0x52000108
#define MDMA_C3CR               0x5200010C
#define MDMA_C3TCR              0x52000110
#define MDMA_C3BNDTR            0x52000114
#define MDMA_C3SAR              0x52000118
#define MDMA_C3DAR              0x5200011C
#define MDMA_C3BRUR             0x52000120
#define MDMA_C3LAR              0x52000124
#define MDMA_C3TBR              0x52000128
#define MDMA_C3MAR              0x52000130
#define MDMA_C3MDR              0x52000134

/* Channel 4 */
#define MDMA_C4ISR              0x52000140
#define MDMA_C4IFCR             0x52000144
#define MDMA_C4ESR              0x52000148
#define MDMA_C4CR               0x5200014C
#define MDMA_C4TCR              0x52000150
#define MDMA_C4BNDTR            0x52000154
#define MDMA_C4SAR              0x52000158
#define MDMA_C4DAR              0x5200015C
#define MDMA_C4BRUR             0x52000160
#define MDMA_C4LAR              0x52000164
#define MDMA_C4TBR              0x52000168
#define MDMA_C4MAR              0x52000170
#define MDMA_C4MDR              0x52000174

/* Channel 5 */
#define MDMA_C5ISR              0x52000180
#define MDMA_C5IFCR             0x52000184
#define MDMA_C5ESR              0x52000188
#define MDMA_C5CR               0x5200018C
#define MDMA_C5TCR              0x52000190
#define MDMA_C5BNDTR            0x52000194
#define MDMA_C5SAR              0x52000198
#define MDMA_C5DAR              0x5200019C
#define MDMA_C5BRUR             0x520001A0
#define MDMA_C5LAR              0x520001A4
#define MDMA_C5TBR              0x520001A8
#define MDMA_C5MAR              0x520001B0
#define MDMA_C5MDR              0x520001B4

/* Channel 6 */
#define MDMA_C6ISR              0x520001C0
#define MDMA_C6IFCR             0x520001C4
#define MDMA_C6ESR              0x520001C8
#define MDMA_C6CR               0x520001CC
#define MDMA_C6TCR              0x520001D0
#define MDMA_C6BNDTR            0x520001D4
#define MDMA_C6SAR              0x520001D8
#define MDMA_C6DAR              0x520001DC
#define MDMA_C6BRUR             0x520001E0
#define MDMA_C6LAR              0x520001E4
#define MDMA_C6TBR              0x520001E8
#define MDMA_C6MAR              0x520001F0
#define MDMA_C6MDR              0x520001F4

/* Channel 7 */
#define MDMA_C7ISR              0x52000200
#define MDMA_C7IFCR             0x52000204
#define MDMA_C7ESR              0x52000208
#define MDMA_C7CR               0x5200020C
#define MDMA_C7TCR              0x52000210
#define MDMA_C7BNDTR            0x52000214
#define MDMA_C7SAR              0x52000218
#define MDMA_C7DAR              0x5200021C
#define MDMA_C7BRUR             0x52000220
#define MDMA_C7LAR              0x52000224
#define MDMA_C7TBR              0x52000228
#define MDMA_C7MAR              0x52000230
#define MDMA_C7MDR              0x52000234

/* Channel 8 */
#define MDMA_C8ISR              0x52000240
#define MDMA_C8IFCR             0x52000244
#define MDMA_C8ESR              0x52000248
#define MDMA_C8CR               0x5200024C
#define MDMA_C8TCR              0x52000250
#define MDMA_C8BNDTR            0x52000254
#define MDMA_C8SAR              0x52000258
#define MDMA_C8DAR              0x5200025C
#define MDMA_C8BRUR             0x52000260
#define MDMA_C8LAR              0x52000264
#define MDMA_C8TBR              0x52000268
#define MDMA_C8MAR              0x52000270
#define MDMA_C8MDR              0x52000274

/* Channel 9 */
#define MDMA_C9ISR              0x52000280
#define MDMA_C9IFCR             0x52000284
#define MDMA_C9ESR              0x52000288
#define MDMA_C9CR               0x5200028C
#define MDMA_C9TCR              0x52000290
#define MDMA_C9BNDTR            0x52000294
#define MDMA_C9SAR              0x52000298
#define MDMA_C9DAR              0x5200029C
#define MDMA_C9BRUR             0x520002A0
#define MDMA_C9LAR              0x520002A4
#define MDMA_C9TBR              0x520002A8
#define MDMA_C9MAR              0x520002B0
#define MDMA_C9MDR              0x520002B4

/* Channel 10 */
#define MDMA_C10ISR             0x520002C0
#define MDMA_C10IFCR            0x520002C4
#define MDMA_C10ESR             0x520002C8
#define MDMA_C10CR              0x520002CC
#define MDMA_C10TCR             0x520002D0
#define MDMA_C10BNDTR           0x520002D4
#define MDMA_C10SAR             0x520002D8
#define MDMA_C10DAR             0x520002DC
#define MDMA_C10BRUR            0x520002E0
#define MDMA_C10LAR             0x520002E4
#define MDMA_C10TBR             0x520002E8
#define MDMA_C10MAR             0x520002F0
#define MDMA_C10MDR             0x520002F4

/* Channel 11 */
#define MDMA_C11ISR             0x52000300
#define MDMA_C11IFCR            0x52000304
#define MDMA_C11ESR             0x52000308
#define MDMA_C11CR              0x5200030C
#define MDMA_C11TCR             0x52000310
#define MDMA_C11BNDTR           0x52000314
#define MDMA_C11SAR             0x52000318
#define MDMA_C11DAR             0x5200031C
#define MDMA_C11BRUR            0x52000320
#define MDMA_C11LAR             0x52000324
#define MDMA_C11TBR             0x52000328
#define MDMA_C11MAR             0x52000330
#define MDMA_C11MDR             0x52000334

/* Channel 12 */
#define MDMA_C12ISR             0x52000340
#define MDMA_C12IFCR            0x52000344
#define MDMA_C12ESR             0x52000348
#define MDMA_C12CR              0x5200034C
#define MDMA_C12TCR             0x52000350
#define MDMA_C12BNDTR           0x52000354
#define MDMA_C12SAR             0x52000358
#define MDMA_C12DAR             0x5200035C
#define MDMA_C12BRUR            0x52000360
#define MDMA_C12LAR             0x52000364
#define MDMA_C12TBR             0x52000368
#define MDMA_C12MAR             0x52000370
#define MDMA_C12MDR             0x52000374

/* Channel 13 */
#define MDMA_C13ISR             0x52000380
#define MDMA_C13IFCR            0x52000384
#define MDMA_C13ESR             0x52000388
#define MDMA_C13CR              0x5200038C
#define MDMA_C13TCR             0x52000390
#define MDMA_C13BNDTR           0x52000394
#define MDMA_C13SAR             0x52000398
#define MDMA_C13DAR             0x5200039C
#define MDMA_C13BRUR            0x520003A0
#define MDMA_C13LAR             0x520003A4
#define MDMA_C13TBR             0x520003A8
#define MDMA_C13MAR             0x520003B0
#define MDMA_C13MDR             0x520003B4

/* Channel 14 */
#define MDMA_C14ISR             0x520003C0
#define MDMA_C14IFCR            0x520003C4
#define MDMA_C14ESR             0x520003C8
#define MDMA_C14CR              0x520003CC
#define MDMA_C14TCR             0x520003D0
#define MDMA_C14BNDTR           0x520003D4
#define MDMA_C14SAR             0x520003D8
#define MDMA_C14DAR             0x520003DC
#define MDMA_C14BRUR            0x520003E0
#define MDMA_C14LAR             0x520003E4
#define MDMA_C14TBR             0x520003E8
#define MDMA_C14MAR             0x520003F0
#define MDMA_C14MDR             0x520003F4

/* Channel 15 */
#define MDMA_C15ISR             0x52000400
#define MDMA_C15IFCR            0x52000404
#define MDMA_C15ESR             0x52000408
#define MDMA_C15CR              0x5200040C
#define MDMA_C15TCR             0x52000410
#define MDMA_C15BNDTR           0x52000414
#define MDMA_C15SAR             0x52000418
#define MDMA_C15DAR             0x5200041C
#define MDMA_C15BRUR            0x52000420
#define MDMA_C15LAR             0x52000424
#define MDMA_C15TBR             0x52000428
#define MDMA_C15MAR             0x52000430
#define MDMA_C15MDR             0x52000434


/**
 * Direct memory access controller (DMA) registers
 */

/* DMA1 */
#define DMA1_LISR               0x40020000      /* DMA low interrupt status register */
#define DMA1_HISR               0x40020004      /* DMA high interrupt status register */
#define DMA1_LIFCR              0x40020008      /* DMA low interrupt flag clear register */
#define DMA1_HIFCR              0x4002000C      /* DMA high interrupt flag clear register */

/* Stream 0 */
#define DMA1_S0CR               0x40020010      /* DMA stream x configuration register */
#define DMA1_S0NDTR             0x40020014      /* DMA stream x number of data register */
#define DMA1_S0PAR              0x40020018      /* DMA stream x peripheral address register */
#define DMA1_S0M0AR             0x4002001C      /* DMA stream x memory 0 address register */
#define DMA1_S0M1AR             0x40020020      /* DMA stream x memory 1 address register */
#define DMA1_S0FCR              0x40020024      /* DMA stream x FIFO control register */

/* Stream 1 */
#define DMA1_S1CR               0x40020028
#define DMA1_S1NDTR             0x4002002C
#define DMA1_S1PAR              0x40020030
#define DMA1_S1M0AR             0x40020034
#define DMA1_S1M1AR             0x40020038
#define DMA1_S1FCR              0x4002003C

/* Stream 2 */
#define DMA1_S2CR               0x40020040
#define DMA1_S2NDTR             0x40020044
#define DMA1_S2PAR              0x40020048
#define DMA1_S2M0AR             0x4002004C
#define DMA1_S2M1AR             0x40020050
#define DMA1_S2FCR              0x40020054

/* Stream 3 */
#define DMA1_S3CR               0x40020058
#define DMA1_S3NDTR             0x4002005C
#define DMA1_S3PAR              0x40020060
#define DMA1_S3M0AR             0x40020064
#define DMA1_S3M1AR             0x40020068
#define DMA1_S3FCR              0x4002006C

/* Stream 4 */
#define DMA1_S4CR               0x40020070
#define DMA1_S4NDTR             0x40020074
#define DMA1_S4PAR              0x40020078
#define DMA1_S4M0AR             0x4002007C
#define DMA1_S4M1AR             0x40020080
#define DMA1_S4FCR              0x40020084

/* Stream 5 */
#define DMA1_S5CR               0x40020088
#define DMA1_S5NDTR             0x4002008C
#define DMA1_S5PAR              0x40020090
#define DMA1_S5M0AR             0x40020094
#define DMA1_S5M1AR             0x40020098
#define DMA1_S5FCR              0x4002009C

/* Stream 6 */
#define DMA1_S6CR               0x400200A0
#define DMA1_S6NDTR             0x400200A4
#define DMA1_S6PAR              0x400200A8
#define DMA1_S6M0AR             0x400200AC
#define DMA1_S6M1AR             0x400200B0
#define DMA1_S6FCR              0x400200B4

/* Stream 7 */
#define DMA1_S7CR               0x400200B8
#define DMA1_S7NDTR             0x400200BC
#define DMA1_S7PAR              0x400200C0
#define DMA1_S7M0AR             0x400200C4
#define DMA1_S7M1AR             0x400200C8
#define DMA1_S7FCR              0x400200CC

/* DMA2 */
#define DMA2_LISR               0x40020400
#define DMA2_HISR               0x40020404
#define DMA2_LIFCR              0x40020408
#define DMA2_HIFCR              0x4002040C

/* Stream 0 */
#define DMA2_S0CR               0x40020410
#define DMA2_S0NDTR             0x40020414
#define DMA2_S0PAR              0x40020418
#define DMA2_S0M0AR             0x4002041C
#define DMA2_S0M1AR             0x40020420
#define DMA2_S0FCR              0x40020424

/* Stream 1 */
#define DMA2_S1CR               0x40020428
#define DMA2_S1NDTR             0x4002042C
#define DMA2_S1PAR              0x40020430
#define DMA2_S1M0AR             0x40020434
#define DMA2_S1M1AR             0x40020438
#define DMA2_S1FCR              0x4002043C

/* Stream 2 */
#define DMA2_S2CR               0x40020440
#define DMA2_S2NDTR             0x40020444
#define DMA2_S2PAR              0x40020448
#define DMA2_S2M0AR             0x4002044C
#define DMA2_S2M1AR             0x40020450
#define DMA2_S2FCR              0x40020454

/* Stream 3 */
#define DMA2_S3CR               0x40020458
#define DMA2_S3NDTR             0x4002045C
#define DMA2_S3PAR              0x40020460
#define DMA2_S3M0AR             0x40020464
#define DMA2_S3M1AR             0x40020468
#define DMA2_S3FCR              0x4002046C

/* Stream 4 */
#define DMA2_S4CR               0x40020470
#define DMA2_S4NDTR             0x40020474
#define DMA2_S4PAR              0x40020478
#define DMA2_S4M0AR             0x4002047C
#define DMA2_S4M1AR             0x40020480
#define DMA2_S4FCR              0x40020484

/* Stream 5 */
#define DMA2_S5CR               0x40020488
#define DMA2_S5NDTR             0x4002048C
#define DMA2_S5PAR              0x40020490
#define DMA2_S5M0AR             0x40020494
#define DMA2_S5M1AR             0x40020498
#define DMA2_S5FCR              0x4002049C

/* Stream 6 */
#define DMA2_S6CR               0x400204A0
#define DMA2_S6NDTR             0x400204A4
#define DMA2_S6PAR              0x400204A8
#define DMA2_S6M0AR             0x400204AC
#define DMA2_S6M1AR             0x400204B0
#define DMA2_S6FCR              0x400204B4

/* Stream 7 */
#define DMA2_S7CR               0x400204B8
#define DMA2_S7NDTR             0x400204BC
#define DMA2_S7PAR              0x400204C0
#define DMA2_S7M0AR             0x400204C4
#define DMA2_S7M1AR             0x400204C8
#define DMA2_S7FCR              0x400204CC

/**
 * Basic direct memory access controller (BDMA) registers
 */

#define BDMA_ISR                0x58025400      /* BDMA interrupt status register */
#define BDMA_IFCR               0x58025404      /* BDMA interrupt flag clear register */

/* Channel 0 */
#define BDMA_CCR0               0x58025408      /* BDMA channel x configuration register */
#define BDMA_CNDTR0             0x5802540C      /* BDMA channel x number of data to transfer register */
#define BDMA_CPAR0              0x58025410      /* BDMA channel x peripheral address register */
#define BDMA_CM0AR0             0x58025414      /* BDMA channel x memory 0 address register */
#define BDMA_CM1AR0             0x58025418      /* BDMA channel x memory 1 address register */

/* Channel 1 */
#define BDMA_CCR1               0x5802541C
#define BDMA_CNDTR1             0x58025420
#define BDMA_CPAR1              0x58025424
#define BDMA_CM0AR1             0x58025428
#define BDMA_CM1AR1             0x5802542C

/* Channel 2 */
#define BDMA_CCR2               0x58025430
#define BDMA_CNDTR2             0x58025434
#define BDMA_CPAR2              0x58025438
#define BDMA_CM0AR2             0x5802543C
#define BDMA_CM1AR2             0x58025440

/* Channel 3 */
#define BDMA_CCR3               0x58025444
#define BDMA_CNDTR3             0x58025448
#define BDMA_CPAR3              0x5802544C
#define BDMA_CM0AR3             0x58025450
#define BDMA_CM1AR3             0x58025454

/* Channel 4 */
#define BDMA_CCR4               0x58025458
#define BDMA_CNDTR4             0x5802545C
#define BDMA_CPAR4              0x58025460
#define BDMA_CM0AR4             0x58025464
#define BDMA_CM1AR4             0x58025468

/* Channel 5 */
#define BDMA_CCR5               0x5802546C
#define BDMA_CNDTR5             0x58025470
#define BDMA_CPAR5              0x58025474
#define BDMA_CM0AR5             0x58025478
#define BDMA_CM1AR5             0x5802547C

/* Channel 6 */
#define BDMA_CCR6               0x58025480
#define BDMA_CNDTR6             0x58025484
#define BDMA_CPAR6              0x58025488
#define BDMA_CM0AR6             0x5802548C
#define BDMA_CM1AR6             0x58025490

/* Channel 7 */
#define BDMA_CCR7               0x58025494
#define BDMA_CNDTR7             0x58025498
#define BDMA_CPAR7              0x5802549C
#define BDMA_CM0AR7             0x580254A0
#define BDMA_CM1AR7             0x580254A4

/**
 * DMA request multiplexer (DMAMUX) registers
 */

#define DMAMUX1_C0CR            0x40020800      /* DMAMUX1 request line multiplexer channel 0 configuration register */
#define DMAMUX1_C1CR            0x40020804      /* DMAMUX1 request line multiplexer channel 1 configuration register */
#define DMAMUX1_C2CR            0x40020808      /* DMAMUX1 request line multiplexer channel 2 configuration register */
#define DMAMUX1_C3CR            0x4002080C      /* DMAMUX1 request line multiplexer channel 3 configuration register */
#define DMAMUX1_C4CR            0x40020810      /* DMAMUX1 request line multiplexer channel 4 configuration register */
#define DMAMUX1_C5CR            0x40020814      /* DMAMUX1 request line multiplexer channel 5 configuration register */
#define DMAMUX1_C6CR            0x40020818      /* DMAMUX1 request line multiplexer channel 6 configuration register */
#define DMAMUX1_C7CR            0x4002081C      /* DMAMUX1 request line multiplexer channel 7 configuration register */
#define DMAMUX1_C8CR            0x40020820      /* DMAMUX1 request line multiplexer channel 8 configuration register */
#define DMAMUX1_C9CR            0x40020824      /* DMAMUX1 request line multiplexer channel 9 configuration register */
#define DMAMUX1_C10CR           0x40020828      /* DMAMUX1 request line multiplexer channel 10 configuration register */
#define DMAMUX1_C11CR           0x4002082C      /* DMAMUX1 request line multiplexer channel 11 configuration register */
#define DMAMUX1_C12CR           0x40020830      /* DMAMUX1 request line multiplexer channel 12 configuration register */
#define DMAMUX1_C13CR           0x40020834      /* DMAMUX1 request line multiplexer channel 13 configuration register */
#define DMAMUX1_C14CR           0x40020838      /* DMAMUX1 request line multiplexer channel 14 configuration register */
#define DMAMUX1_C15CR           0x4002083C      /* DMAMUX1 request line multiplexer channel 15 configuration register */
#define DMAMUX1_CSR             0x40020880      /* DMAMUX1 request line multiplexer interrupt channel status register */
#define DMAMUX1_CFR             0x40020884      /* DMAMUX1 request line multiplexer interrupt clear flag register */
#define DMAMUX1_RG0CR           0x40020900      /* DMAMUX1 request generator channel 0 configuration register */
#define DMAMUX1_RG1CR           0x40020904      /* DMAMUX1 request generator channel 1 configuration register */
#define DMAMUX1_RG2CR           0x40020908      /* DMAMUX1 request generator channel 2 configuration register */
#define DMAMUX1_RG3CR           0x4002090C      /* DMAMUX1 request generator channel 3 configuration register */
#define DMAMUX1_RG4CR           0x40020910      /* DMAMUX1 request generator channel 4 configuration register */
#define DMAMUX1_RG5CR           0x40020914      /* DMAMUX1 request generator channel 5 configuration register */
#define DMAMUX1_RG6CR           0x40020918      /* DMAMUX1 request generator channel 6 configuration register */
#define DMAMUX1_RG7CR           0x4002091C      /* DMAMUX1 request generator channel 7 configuration register */
#define DMAMUX1_RGSR            0x40020940      /* DMAMUX1 request generator interrupt status register */
#define DMAMUX1_RGCFR           0x40020944      /* DMAMUX1 request generator interrupt clear flag register */

#define DMAMUX2_C0CR            0x58025800
#define DMAMUX2_C1CR            0x58025804
#define DMAMUX2_C2CR            0x58025808
#define DMAMUX2_C3CR            0x5802580C
#define DMAMUX2_C4CR            0x58025810
#define DMAMUX2_C5CR            0x58025814
#define DMAMUX2_C6CR            0x58025818
#define DMAMUX2_C7CR            0x5802581C
#define DMAMUX2_CSR             0x58025880
#define DMAMUX2_CFR             0x58025884
#define DMAMUX2_RG0CR           0x58025900
#define DMAMUX2_RG1CR           0x58025904
#define DMAMUX2_RG2CR           0x58025908
#define DMAMUX2_RG3CR           0x5802590C
#define DMAMUX2_RG4CR           0x58025910
#define DMAMUX2_RG5CR           0x58025914
#define DMAMUX2_RG6CR           0x58025918
#define DMAMUX2_RG7CR           0x5802591C
#define DMAMUX2_RGSR            0x58025940
#define DMAMUX2_RGCFR           0x58025944

/**
 * Chrom-ART Accelerator controller (DMA2D) registers
 */

#define DMA2D_CR                0x52001000      /* DMA2D control register */
#define DMA2D_ISR               0x52001004      /* DMA2D interrupt status register */
#define DMA2D_IFCR              0x52001008      /* DMA2D interrupt flag clear register */
#define DMA2D_FGMAR             0x5200100C      /* DMA2D foreground memory address register */
#define DMA2D_FGOR              0x52001010      /* DMA2D foreground offset register */
#define DMA2D_BGMAR             0x52001014      /* DMA2D background memory address register */
#define DMA2D_BGOR              0x52001018      /* DMA2D background offset register */
#define DMA2D_FGPFCCR           0x5200101C      /* DMA2D foreground PFC control register */
#define DMA2D_FGCOLR            0x52001020      /* DMA2D foreground color register */
#define DMA2D_BGPFCCR           0x52001024      /* DMA2D background PFC control register */
#define DMA2D_BGCOLR            0x52001028      /* DMA2D background color register */
#define DMA2D_FGCMAR            0x5200102C      /* DMA2D foreground CLUT memory address register */
#define DMA2D_BGCMAR            0x52001030      /* DMA2D background CLUT memory address register */
#define DMA2D_OPFCCR            0x52001034      /* DMA2D output PFC control register */
#define DMA2D_OCOLR             0x52001038      /* DMA2D output color register */
#define DMA2D_OMAR              0x5200103C      /* DMA2D output memory address register */
#define DMA2D_OOR               0x52001040      /* DMA2D output offset register */
#define DMA2D_NLR               0x52001044      /* DMA2D number of line register */
#define DMA2D_LWR               0x52001048      /* DMA2D line watermark register */
#define DMA2D_AMTCR             0x5200104C      /* DMA2D AXI master timer configuration register */
#define DMA2D_FGCLUT0           0x52001400      /* DMA2D foreground CLUT */
#define DMA2D_BGCLUT0           0x52001800      /* DMA2D background CLUT */

/**
 * Extended interrupt and event controller (EXTI) registers
 */

#define EXTI_RTSR1              0x58000000      /* EXTI rising trigger selection register */
#define EXTI_FTSR1              0x58000004      /* EXTI falling trigger selection register */
#define EXTI_SWIER1             0x58000008      /* EXTI software interrupt event register */
#define EXTI_D3PMR1             0x5800000C      /* EXTI D3 pending mask register */
#define EXTI_D3PCR1L            0x58000010      /* EXTI D3 pending clear selection register low */
#define EXTI_D3PCR1H            0x58000014      /* EXTI D3 pending clear selection register high */
#define EXTI_RTSR2              0x58000020      /* EXTI rising trigger selection register */
#define EXTI_FTSR2              0x58000024      /* EXTI falling trigger selection register */
#define EXTI_SWIER2             0x58000028      /* EXTI software interrupt event register */
#define EXTI_D3PMR2             0x5800002C      /* EXTI D3 pending mask register */
#define EXTI_D3PCR2L            0x58000030      /* EXTI D3 pending clear selection register low */
#define EXTI_D3PCR2H            0x58000034      /* EXTI D3 pending clear selection register high */
#define EXTI_RTSR3              0x58000040      /* EXTI rising trigger selection register */
#define EXTI_FTSR3              0x58000044      /* EXTI falling trigger selection register */
#define EXTI_SWIER3             0x58000048      /* EXTI software interrupt event register */
#define EXTI_D3PMR3             0x5800004C      /* EXTI D3 pending mask register */
#define EXTI_D3PCR3L            0x58000050      /* EXTI D3 pending clear selection register low */
#define EXTI_D3PCR3H            0x58000054      /* EXTI D3 pending clear selection register high */
#define EXTI_C1IMR1             0x58000080      /* EXTI interrupt mask register */
#define EXTI_C1EMR1             0x58000084      /* EXTI event mask register */
#define EXTI_C1PR1              0x58000088      /* EXTI pending register */
#define EXTI_C1IMR2             0x58000090      /* EXTI interrupt mask register */
#define EXTI_C1EMR2             0x58000094      /* EXTI event mask register */
#define EXTI_C1PR2              0x58000098      /* EXTI pending register */
#define EXTI_C1IMR3             0x580000A0      /* EXTI interrupt mask register */
#define EXTI_C1EMR3             0x580000A4      /* EXTI event mask register  */
#define EXTI_C1PR3              0x580000A8      /* EXTI pending register */
#define EXTI_C2IMR1             0x580000C0      /* EXTI interrupt mask register */
#define EXTI_C2EMR1             0x580000C4      /* EXTI event mask register */
#define EXTI_C2PR1              0x580000C8      /* EXTI pending register */
#define EXTI_C2IMR2             0x580000D0      /* EXTI interrupt mask register */
#define EXTI_C2EMR2             0x580000D4      /* EXTI event mask register */
#define EXTI_C2PR2              0x580000D8      /* EXTI pending register */
#define EXTI_C2IMR3             0x580000E0      /* EXTI interrupt mask register */
#define EXTI_C2EMR3             0x580000E4      /* EXTI event mask register  */
#define EXTI_C2PR3              0x580000E8      /* EXTI pending register */

/**
 * Cyclic redundancy check calculation unit (CRC) registers
 */

#define CRC_DR                  0x58024C00      /* CRC data register */
#define CRC_IDR                 0x58024C04      /* CRC independent data register */
#define CRC_CR                  0x58024C08      /* CRC control register */
#define CRC_INIT                0x58024C10      /* CRC initial value */
#define CRC_POL                 0x58024C14      /* CRC polynomial */

/**
 * Flexible memory controller (FMC) registers
 */

#define FMC_BCR1                0x52004000      /* SRAM/NOR-flash chip-select control register for bank 1 */
#define FMC_BCR2                0x52004008      /* SRAM/NOR-flash chip-select control register for bank 2 */
#define FMC_BCR3                0x52004010      /* SRAM/NOR-flash chip-select control register for bank 3 */
#define FMC_BCR4                0x52004018      /* SRAM/NOR-flash chip-select control register for bank 4 */
#define FMC_BTR1                0x52004004      /* SRAM/NOR-flash chip-select timing register for bank 1 */
#define FMC_BTR2                0x5200400C      /* SRAM/NOR-flash chip-select timing register for bank 2 */
#define FMC_BTR3                0x52004014      /* SRAM/NOR-flash chip-select timing register for bank 3 */
#define FMC_BTR4                0x5200401C      /* SRAM/NOR-flash chip-select timing register for bank 4 */
#define FMC_BWTR1               0x52004104      /* SRAM/NOR-flash write timing register for bank 1 */
#define FMC_BWTR2               0x5200410C      /* SRAM/NOR-flash write timing register for bank 2 */
#define FMC_BWTR3               0x52004114      /* SRAM/NOR-flash write timing register for bank 3 */
#define FMC_BWTR4               0x5200411C      /* SRAM/NOR-flash write timing register for bank 4 */
#define FMC_PCR                 0x52004080      /* NAND flash control register */
#define FMC_SR                  0x52004084      /* FIFO status and interrupt register */
#define FMC_PMEM                0x52004088      /* Common memory space timing register */
#define FMC_PATT                0x5200408C      /* Attribute memory space timing registers */
#define FMC_ECCR                0x52004094      /* ECC result register */
#define FMC_SDCR1               0x52004140      /* SDRAM Control register for SDRAM memory bank 1 */
#define FMC_SDCR2               0x52004144      /* SDRAM Control register for SDRAM memory bank 2 */
#define FMC_SDTR1               0x52004148      /* SDRAM Timing registers for SDRAM memory bank 1 */
#define FMC_SDTR2               0x5200414C      /* SDRAM Timing registers for SDRAM memory bank 2 */
#define FMC_SDCMR               0x52004150      /* SDRAM Command mode register */
#define FMC_SDRTR               0x52004154      /* SDRAM refresh timer register */
#define FMC_SDSR                0x52004158      /* SDRAM Status register */

/**
 * Quad-SPI interface (QUADSPI) registers
 */

#define QUADSPI_CR              0x52005000      /* QUADSPI control register */
#define QUADSPI_DCR             0x52005004      /* QUADSPI device configuration register */
#define QUADSPI_SR              0x52005008      /* QUADSPI status register */
#define QUADSPI_FCR             0x5200500C      /* QUADSPI flag clear register */
#define QUADSPI_DLR             0x52005010      /* QUADSPI data length register */
#define QUADSPI_CCR             0x52005014      /* QUADSPI communication configuration register */
#define QUADSPI_AR              0x52005018      /* QUADSPI address register */
#define QUADSPI_ABR             0x5200501C      /* QUADSPI alternate-byte register */
#define QUADSPI_DR              0x52005020      /* QUADSPI data register */
#define QUADSPI_PSMKR           0x52005024      /* QUADSPI polling status mask register */
#define QUADSPI_PSMAR           0x52005028      /* QUADSPI polling status match register */
#define QUADSPI_PIR             0x5200502C      /* QUADSPI polling interval register */
#define QUADSPI_LPTR            0x52005030      /* QUADSPI low-power timeout register */

/**
 * Delay block (DLYB) registers
 */

/* Delay block Quad-SPI */
#define DLYBQUADSPI_CR          0x52006000      /* DLYB control register */
#define DLYBQUADSPI_CFGR        0x52006004      /* DLYB configuration register */

/* Delay block SDMMC1 */
#define DLYBSDMMC1_CR           0x52008000      /* DLYB control register */
#define DLYBSDMMC1_CFGR         0x52008004      /* DLYB configuration register */

/* Delay block SDMMC2 */
#define DLYBSDMMC2_CR           0x48022800      /* DLYB control register */
#define DLYBSDMMC2_CFGR         0x48022804      /* DLYB configuration register */

/**
 * Analog-to-digital converters (ADC) registers
 */

/* ADC1/ADC2 */
#define ADC1_ISR                0x40022000      /* ADC interrupt and status register */
#define ADC1_IER                0x40022004      /* ADC interrupt enable register */
#define ADC1_CR                 0x40022008      /* ADC control register */
#define ADC1_CFGR               0x4002200C      /* ADC configuration register */
#define ADC1_CFGR2              0x40022010      /* ADC configuration register 2 */
#define ADC1_SMPR1              0x40022014      /* ADC sample time register 1 */
#define ADC1_SMPR2              0x40022018      /* ADC sample time register 2 */
#define ADC1_PCSEL              0x4002201C      /* ADC channel preselection register */
#define ADC1_LTR1               0x40022020      /* ADC watchdog threshold register 1 */
#define ADC1_HTR1               0x40022024      /* ADC watchdog threshold register 1 */
#define ADC1_SQR1               0x40022030      /* ADC regular sequence register 1 */
#define ADC1_SQR2               0x40022034      /* ADC regular sequence register 2 */
#define ADC1_SQR3               0x40022038      /* ADC regular sequence register 3 */
#define ADC1_SQR4               0x4002203C      /* ADC regular sequence register 4 */
#define ADC1_DR                 0x40022040      /* ADC regular Data Register */
#define ADC1_JSQR               0x4002204C      /* ADC injected sequence register */
#define ADC1_OFR1               0x40022060      /* ADC injected channel 1 offset register */
#define ADC1_OFR2               0x40022064      /* ADC injected channel 2 offset register */
#define ADC1_OFR3               0x40022068      /* ADC injected channel 3 offset register */
#define ADC1_OFR4               0x4002206C      /* ADC injected channel 4 offset register */
#define ADC1_JDR1               0x40022080      /* ADC injected channel 1 data register */
#define ADC1_JDR2               0x40022084      /* ADC injected channel 2 data register */
#define ADC1_JDR3               0x40022088      /* ADC injected channel 3 data register */
#define ADC1_JDR4               0x4002208C      /* ADC injected channel 4 data register */
#define ADC1_AWD2CR             0x400220A0      /* ADC analog watchdog 2 configuration register */
#define ADC1_AWD3CR             0x400220A4      /* ADC analog watchdog 3 configuration register */
#define ADC1_LTR2               0x400220B0      /* ADC watchdog lower threshold register 2 */
#define ADC1_HTR2               0x400220B4      /* ADC watchdog higher threshold register 2 */
#define ADC1_LTR3               0x400220B8      /* ADC watchdog lower threshold register 3 */
#define ADC1_HTR3               0x400220BC      /* ADC watchdog higher threshold register 3 */
#define ADC1_DIFSEL             0x400220C0      /* ADC differential mode selection register */
#define ADC1_CALFACT            0x400220C4      /* ADC calibration factors register */
#define ADC1_CALFACT2           0x400220C8      /* ADC calibration factor register 2 */

#define ADC2_ISR                0x40022100
#define ADC2_IER                0x40022104
#define ADC2_CR                 0x40022108
#define ADC2_CFGR               0x4002210C
#define ADC2_CFGR2              0x40022110
#define ADC2_SMPR1              0x40022114
#define ADC2_SMPR2              0x40022118
#define ADC2_PCSEL              0x4002211C
#define ADC2_LTR1               0x40022120
#define ADC2_HTR1               0x40022124
#define ADC2_SQR1               0x40022130
#define ADC2_SQR2               0x40022134
#define ADC2_SQR3               0x40022138
#define ADC2_SQR4               0x4002213C
#define ADC2_DR                 0x40022140
#define ADC2_JSQR               0x4002214C
#define ADC2_OFR1               0x40022160
#define ADC2_OFR2               0x40022164
#define ADC2_OFR3               0x40022168
#define ADC2_OFR4               0x4002216C
#define ADC2_JDR1               0x40022180
#define ADC2_JDR2               0x40022184
#define ADC2_JDR3               0x40022188
#define ADC2_JDR4               0x4002218C
#define ADC2_AWD2CR             0x400221A0
#define ADC2_AWD3CR             0x400221A4
#define ADC2_LTR2               0x400221B0
#define ADC2_HTR2               0x400221B4
#define ADC2_LTR3               0x400221B8
#define ADC2_HTR3               0x400221BC
#define ADC2_DIFSEL             0x400221C0
#define ADC2_CALFACT            0x400221C4
#define ADC2_CALFACT2           0x400221C8

#define ADC12_CSR               0x40022300      /* ADC x common status register */
#define ADC12_CCR               0x40022308      /* ADC x common control register */
#define ADC12_CDR               0x4002230C      /* ADC x common regular data register for dual mode */
#define ADC12_CDR2              0x40022310      /* ADC x common regular data register for 32-bit dual mode */

/* ADC3 */
#define ADC3_ISR                0x58026000
#define ADC3_IER                0x58026004
#define ADC3_CR                 0x58026008
#define ADC3_CFGR               0x5802600C
#define ADC3_CFGR2              0x58026010
#define ADC3_SMPR1              0x58026014
#define ADC3_SMPR2              0x58026018
#define ADC3_PCSEL              0x5802601C
#define ADC3_LTR1               0x58026020
#define ADC3_HTR1               0x58026024
#define ADC3_SQR1               0x58026030
#define ADC3_SQR2               0x58026034
#define ADC3_SQR3               0x58026038
#define ADC3_SQR4               0x5802603C
#define ADC3_DR                 0x58026040
#define ADC3_JSQR               0x5802604C
#define ADC3_OFR1               0x58026060
#define ADC3_OFR2               0x58026064
#define ADC3_OFR3               0x58026068
#define ADC3_OFR4               0x5802606C
#define ADC3_JDR1               0x58026080
#define ADC3_JDR2               0x58026084
#define ADC3_JDR3               0x58026088
#define ADC3_JDR4               0x5802608C
#define ADC3_AWD2CR             0x580260A0
#define ADC3_AWD3CR             0x580260A4
#define ADC3_LTR2               0x580260B0
#define ADC3_HTR2               0x580260B4
#define ADC3_LTR3               0x580260B8
#define ADC3_HTR3               0x580260BC
#define ADC3_DIFSEL             0x580260C0
#define ADC3_CALFACT            0x580260C4
#define ADC3_CALFACT2           0x580260C8

#define ADC3_CSR                0x58026300
#define ADC3_CCR                0x58026308
#define ADC3_CDR                0x5802630C
#define ADC3_CDR2               0x58026310

/**
 * Digital-to-analog converter (DAC) registers
 */

#define DAC_CR                  0x40007400      /* DAC control register */
#define DAC_SWTRGR              0x40007404      /* DAC software trigger register */
#define DAC_DHR12R1             0x40007408      /* DAC channel1 12-bit right-aligned data holding register */
#define DAC_DHR12L1             0x4000740C      /* DAC channel1 12-bit left aligned data holding register */
#define DAC_DHR8R1              0x40007410      /* DAC channel1 8-bit right aligned data holding register */
#define DAC_DHR12R2             0x40007414      /* DAC channel2 12-bit right aligned data holding register */
#define DAC_DHR12L2             0x40007418      /* DAC channel2 12-bit left aligned data holding register */
#define DAC_DHR8R2              0x4000741C      /* DAC channel2 8-bit right-aligned data holding register */
#define DAC_DHR12RD             0x40007420      /* Dual DAC 12-bit right-aligned data holding register */
#define DAC_DHR12LD             0x40007424      /* Dual DAC 12-bit left aligned data holding register */
#define DAC_DHR8RD              0x40007428      /* Dual DAC 8-bit right aligned data holding register */
#define DAC_DOR1                0x4000742C      /* DAC channel1 data output register */
#define DAC_DOR2                0x40007430      /* DAC channel2 data output register */
#define DAC_SR                  0x40007434      /* DAC status register */
#define DAC_CCR                 0x40007438      /* DAC calibration control register */
#define DAC_MCR                 0x4000743C      /* DAC mode control register */
#define DAC_SHSR1               0x40007440      /* DAC channel1 sample and hold sample time register */
#define DAC_SHSR2               0x40007444      /* DAC channel2 sample and hold sample time register */
#define DAC_SHHR                0x40007448      /* DAC sample and hold time register */
#define DAC_SHRR                0x4000744C      /* DAC sample and hold refresh time register */

/**
 * Voltage reference buffer (VREFBUF) registers
 */

#define VREFBUF_CSR             0x58003C00      /* VREFBUF control and status register */
#define VREFBUF_CCR             0x58003C04      /* VREFBUF calibration control register */

/**
 * Comparator (COMP) registers
 */

#define COMP_SR                 0x58003800      /* Comparator status register */
#define COMP_ICFR               0x58003804      /* Comparator interrupt clear flag register */
#define COMP_OR                 0x58003808      /* Comparator option register */
#define COMP_CFGR1              0x5800380C      /* Comparator configuration register 1 */
#define COMP_CFGR2              0x58003810      /* Comparator configuration register 2 */

/**
 * Operational amplifiers (OPAMP) registers
 */

#define OPAMP1_CSR              0x40009000      /* OPAMP1 control/status register */
#define OPAMP1_OTR              0x40009004      /* OPAMP1 trimming register in normal mode */
#define OPAMP1_HSOTR            0x40009008      /* OPAMP1 trimming register in high-speed mode */
#define OPAMP_OR                0x4000900C      /* OPAMP option register */
#define OPAMP2_CSR              0x40009010      /* OPAMP2 control/status register */
#define OPAMP2_OTR              0x40009014      /* OPAMP2 trimming register in normal mode */
#define OPAMP2_HSOTR            0x40009018      /* OPAMP2 trimming register in high-speed mode */

/**
 * Digital filter for sigma delta modulators (DFSDM) registers
 */

#define DFSDM_CH0CFGR1          0x40017000      /* DFSDM channel configuration register */
#define DFSDM_CH0CFGR2          0x40017004      /* DFSDM channel configuration register */
#define DFSDM_CH0AWSCDR         0x40017008      /* DFSDM channel analog watchdog and short-circuit detector register */
#define DFSDM_CH0WDATR          0x4001700C      /* DFSDM channel watchdog filter data register */
#define DFSDM_CH0DATINR         0x40017010      /* DFSDM channel data input register */
#define DFSDM_CH1CFGR1          0x40017020
#define DFSDM_CH1CFGR2          0x40017024
#define DFSDM_CH1AWSCDR         0x40017028
#define DFSDM_CH1WDATR          0x4001702C
#define DFSDM_CH1DATINR         0x40017030
#define DFSDM_CH2CFGR1          0x40017040
#define DFSDM_CH2CFGR2          0x40017044
#define DFSDM_CH2AWSCDR         0x40017048
#define DFSDM_CH2WDATR          0x4001704C
#define DFSDM_CH2DATINR         0x40017050
#define DFSDM_CH3CFGR1          0x40017060
#define DFSDM_CH3CFGR2          0x40017064
#define DFSDM_CH3AWSCDR         0x40017068
#define DFSDM_CH3WDATR          0x4001706C
#define DFSDM_CH3DATINR         0x40017070
#define DFSDM_CH4CFGR1          0x40017080
#define DFSDM_CH4CFGR2          0x40017084
#define DFSDM_CH4AWSCDR         0x40017088
#define DFSDM_CH4WDATR          0x4001708C
#define DFSDM_CH4DATINR         0x40017090
#define DFSDM_CH5CFGR1          0x400170A0
#define DFSDM_CH5CFGR2          0x400170A4
#define DFSDM_CH5AWSCDR         0x400170A8
#define DFSDM_CH5WDATR          0x400170AC
#define DFSDM_CH5DATINR         0x400170B0
#define DFSDM_CH6CFGR1          0x400170C0
#define DFSDM_CH6CFGR2          0x400170C4
#define DFSDM_CH6AWSCDR         0x400170C8
#define DFSDM_CH6WDATR          0x400170CC
#define DFSDM_CH6DATINR         0x400170D0
#define DFSDM_CH7CFGR1          0x400170E0
#define DFSDM_CH7CFGR2          0x400170E4
#define DFSDM_CH7AWSCDR         0x400170E8
#define DFSDM_CH7WDATR          0x400170EC
#define DFSDM_CH7DATINR         0x400170F0
#define DFSDM_FLT0CR1           0x40017100      /* DFSDM filter control register 1 */
#define DFSDM_FLT0CR2           0x40017104      /* DFSDM filter control register 2 */
#define DFSDM_FLT0ISR           0x40017108      /* DFSDM filter interrupt and status register */
#define DFSDM_FLT0ICR           0x4001710C      /* DFSDM filter interrupt flag clear register */
#define DFSDM_FLT0JCHGR         0x40017110      /* DFSDM filter injected channel group selection register */
#define DFSDM_FLT0FCR           0x40017114      /* DFSDM filter control register */
#define DFSDM_FLT0JDATAR        0x40017118      /* DFSDM filter data register for injected group */
#define DFSDM_FLT0RDATAR        0x4001711C      /* DFSDM filter data register for the regular channel */
#define DFSDM_FLT0AWHTR         0x40017120      /* DFSDM filter analog watchdog high threshold register */
#define DFSDM_FLT0AWLTR         0x40017124      /* DFSDM filter analog watchdog low threshold register */
#define DFSDM_FLT0AWSR          0x40017128      /* DFSDM filter analog watchdog status register */
#define DFSDM_FLT0AWCFR         0x4001712C      /* DFSDM filter analog watchdog clear flag register */
#define DFSDM_FLT0EXMAX         0x40017130      /* DFSDM filter extremes detector maximum register */
#define DFSDM_FLT0EXMIN         0x40017134      /* DFSDM filter extremes detector minimum register */
#define DFSDM_FLT0CNVTIMR       0x40017138      /* DFSDM filter conversion timer register */
#define DFSDM_FLT1CR1           0x40017180
#define DFSDM_FLT1CR2           0x40017184
#define DFSDM_FLT1ISR           0x40017188
#define DFSDM_FLT1ICR           0x4001718C
#define DFSDM_FLT1JCHGR         0x40017190
#define DFSDM_FLT1FCR           0x40017194
#define DFSDM_FLT1JDATAR        0x40017198
#define DFSDM_FLT1RDATAR        0x4001719C
#define DFSDM_FLT1AWHTR         0x400171A0
#define DFSDM_FLT1AWLTR         0x400171A4
#define DFSDM_FLT1AWSR          0x400171A8
#define DFSDM_FLT1AWCFR         0x400171AC
#define DFSDM_FLT1EXMAX         0x400171B0
#define DFSDM_FLT1EXMIN         0x400171B4
#define DFSDM_FLT1CNVTIMR       0x400171B8
#define DFSDM_FLT2CR1           0x40017200
#define DFSDM_FLT2CR2           0x40017204
#define DFSDM_FLT2ISR           0x40017208
#define DFSDM_FLT2ICR           0x4001720C
#define DFSDM_FLT2JCHGR         0x40017210
#define DFSDM_FLT2FCR           0x40017214
#define DFSDM_FLT2JDATAR        0x40017218
#define DFSDM_FLT2RDATAR        0x4001721C
#define DFSDM_FLT2AWHTR         0x40017220
#define DFSDM_FLT2AWLTR         0x40017224
#define DFSDM_FLT2AWSR          0x40017228
#define DFSDM_FLT2AWCFR         0x4001722C
#define DFSDM_FLT2EXMAX         0x40017230
#define DFSDM_FLT2EXMIN         0x40017234
#define DFSDM_FLT2CNVTIMR       0x40017238
#define DFSDM_FLT3CR1           0x40017280
#define DFSDM_FLT3CR2           0x40017284
#define DFSDM_FLT3ISR           0x40017288
#define DFSDM_FLT3ICR           0x4001728C
#define DFSDM_FLT3JCHGR         0x40017290
#define DFSDM_FLT3FCR           0x40017294
#define DFSDM_FLT3JDATAR        0x40017298
#define DFSDM_FLT3RDATAR        0x4001729C
#define DFSDM_FLT3AWHTR         0x400172A0
#define DFSDM_FLT3AWLTR         0x400172A4
#define DFSDM_FLT3AWSR          0x400172A8
#define DFSDM_FLT3AWCFR         0x400172AC
#define DFSDM_FLT3EXMAX         0x400172B0
#define DFSDM_FLT3EXMIN         0x400172B4
#define DFSDM_FLT3CNVTIMR       0x400172B8


/**
 * Digital camera interface (DCMI) registers
 */

#define DCMI_CR                 0x48020000      /* DCMI control register */
#define DCMI_SR                 0x48020004      /* DCMI status register */
#define DCMI_RIS                0x48020008      /* DCMI raw interrupt status register */
#define DCMI_IER                0x4802000C      /* DCMI interrupt enable register */
#define DCMI_MIS                0x48020010      /* DCMI masked interrupt status register */
#define DCMI_ICR                0x48020014      /* DCMI interrupt clear register */
#define DCMI_ESCR               0x48020018      /* DCMI embedded synchronization code register */
#define DCMI_ESUR               0x4802001C      /* DCMI embedded synchronization unmask register */
#define DCMI_CWSTRT             0x48020020      /* DCMI crop window start */
#define DCMI_CWSIZE             0x48020024      /* DCMI crop window size */
#define DCMI_DR                 0x48020028      /* DCMI data register */

/**
 * LCD-TFT display controller (LTDC) registers
 */

#define LTDC_SSCR               0x50001008      /* LTDC synchronization size configuration register */
#define LTDC_BPCR               0x5000100C      /* LTDC back porch configuration register */
#define LTDC_AWCR               0x50001010      /* LTDC active width configuration register */
#define LTDC_TWCR               0x50001014      /* LTDC total width configuration register */
#define LTDC_GCR                0x50001018      /* LTDC global control register */
#define LTDC_SRCR               0x50001024      /* LTDC shadow reload configuration register */
#define LTDC_BCCR               0x5000102C      /* LTDC background color configuration register */
#define LTDC_IER                0x50001034      /* LTDC interrupt enable register */
#define LTDC_ISR                0x50001038      /* LTDC interrupt status register */
#define LTDC_ICR                0x5000103C      /* LTDC interrupt clear register */
#define LTDC_LIPCR              0x50001040      /* LTDC line interrupt position configuration register */
#define LTDC_CPSR               0x50001044      /* LTDC current position status register */
#define LTDC_CDSR               0x50001048      /* LTDC current display status register */
#define LTDC_L1CR               0x50001084      /* LTDC layer x control register */
#define LTDC_L1WHPCR            0x50001088      /* LTDC layer x window horizontal position configuration register */
#define LTDC_L1WVPCR            0x5000108C      /* LTDC layer x window vertical position configuration register */
#define LTDC_L1CKCR             0x50001090      /* LTDC layer x color keying configuration register */
#define LTDC_L1PFCR             0x50001094      /* LTDC layer x pixel format configuration register */
#define LTDC_L1CACR             0x50001098      /* LTDC layer x constant alpha configuration register */
#define LTDC_L1DCCR             0x5000109C      /* LTDC layer x default color configuration register */
#define LTDC_L1BFCR             0x500010A0      /* LTDC layer x blending factors configuration register */
#define LTDC_L1CFBAR            0x500010AC      /* LTDC layer x color frame buffer address register */
#define LTDC_L1CFBLR            0x500010B0      /* LTDC layer x color frame buffer length register */
#define LTDC_L1CFBLNR           0x500010B4      /* LTDC layer x color frame buffer line number register */
#define LTDC_L1CLUTWR           0x500010C4      /* LTDC layer x CLUT write register */
#define LTDC_L2CR               0x50001104      /* LTDC layer x control register */
#define LTDC_L2WHPCR            0x50001108      /* LTDC layer x window horizontal position configuration register */
#define LTDC_L2WVPCR            0x5000110C      /* LTDC layer x window vertical position configuration register */
#define LTDC_L2CKCR             0x50001110      /* LTDC layer x color keying configuration register */
#define LTDC_L2PFCR             0x50001114      /* LTDC layer x pixel format configuration register */
#define LTDC_L2CACR             0x50001118      /* LTDC layer x constant alpha configuration register */
#define LTDC_L2DCCR             0x5000111C      /* LTDC layer x default color configuration register */
#define LTDC_L2BFCR             0x50001120      /* LTDC layer x blending factors configuration register */
#define LTDC_L2CFBAR            0x5000112C      /* LTDC layer x color frame buffer address register */
#define LTDC_L2CFBLR            0x50001130      /* LTDC layer x color frame buffer length register */
#define LTDC_L2CFBLNR           0x50001134      /* LTDC layer x color frame buffer line number register */
#define LTDC_L2CLUTWR           0x50001144      /* LTDC layer x CLUT write register */

/**
 * JPEG codec (JPEG) registers
 */

#define JPEG_CONFR0             0x52003000      /* JPEG codec control register */
#define JPEG_CONFR1             0x52003004      /* JPEG codec configuration register 1 */
#define JPEG_CONFR2             0x52003008      /* JPEG codec configuration register 2 */
#define JPEG_CONFR3             0x5200300C      /* JPEG codec configuration register 3 */
#define JPEG_CONFR4             0x52003010      /* JPEG codec configuration register */
#define JPEG_CONFR5             0x52003014      /* JPEG codec configuration register */
#define JPEG_CONFR6             0x52003018      /* JPEG codec configuration register */
#define JPEG_CONFR7             0x5200301C      /* JPEG codec configuration register */
#define JPEG_CR                 0x52003030      /* JPEG control register */
#define JPEG_SR                 0x52003034      /* JPEG status register */
#define JPEG_CFR                0x52003038      /* JPEG clear flag register */
#define JPEG_DIR                0x52003040      /* JPEG data input register */
#define JPEG_DOR                0x52003044      /* JPEG data output register */
#define JPEG_QMEM0              0x52003050      /* JPEG quantization memory */
#define JPEG_QMEM1              0x52003090      /* JPEG quantization memory */
#define JPEG_QMEM2              0x520030D0      /* JPEG quantization memory */
#define JPEG_QMEM3              0x52003110      /* JPEG quantization memory */
#define JPEG_HUFFMIN            0x52003150      /* JPEG Huffman min */
#define JPEG_HUFFBASE           0x52003190      /* JPEG Huffman base */
#define JPEG_HUFFSYMB           0x52003210      /* JPEG Huffman symbol */
#define JPEG_DHTMEM             0x52003360      /* JPEG DHT memory */
#define JPEG_HUFFENC_AC0        0x52003500      /* JPEG Huffman encoder ACx */
#define JPEG_HUFFENC_AC1        0x52003660      /* JPEG Huffman encoder ACx */
#define JPEG_HUFFENC_DC0        0x520037C0      /* JPEG Huffman encoder DCx */
#define JPEG_HUFFENC_DC1        0x520037E0      /* JPEG Huffman encoder DCx */

/**
 * True random number generator (RNG) registers
 */

#define RNG_CR                  0x48021800      /* RNG control register */
#define RNG_SR                  0x48021804      /* RNG status register */
#define RNG_DR                  0x48021808      /* RNG data register */

/**
 * High-resolution timer (HRTIM) registers
 */

/* Master Timer */
#define HRTIM_MCR               0x40017400      /* HRTIM Master Timer Control Register */
#define HRTIM_MISR              0x40017404      /* HRTIM Master Timer Interrupt Status Register */
#define HRTIM_MICR              0x40017408      /* HRTIM Master Timer Interrupt Clear Register */
#define HRTIM_MDIER             0x4001740C      /* HRTIM Master Timer DMA / Interrupt Enable Register */
#define HRTIM_MCNTR             0x40017410      /* HRTIM Master Timer Counter Register */
#define HRTIM_MPER              0x40017414      /* HRTIM Master Timer Period Register */
#define HRTIM_MREP              0x40017418      /* HRTIM Master Timer Repetition Register */
#define HRTIM_MCMP1R            0x4001741C      /* HRTIM Master Timer Compare 1 Register */
#define HRTIM_MCMP2R            0x40017424      /* HRTIM Master Timer Compare 2 Register */
#define HRTIM_MCMP3R            0x40017428      /* HRTIM Master Timer Compare 3 Register */
#define HRTIM_MCMP4R            0x4001742C      /* HRTIM Master Timer Compare 4 Register */

/* Timer A */
#define HRTIM_TIMACR            0x40017480      /* HRTIM Timerx Control Register */
#define HRTIM_TIMAISR           0x40017484      /* HRTIM Timerx Interrupt Status Register */
#define HRTIM_TIMAICR           0x40017488      /* HRTIM Timerx Interrupt Clear Register */
#define HRTIM_TIMADIER          0x4001748C      /* HRTIM Timerx DMA / Interrupt Enable Register */
#define HRTIM_TIM_CNTAR         0x40017490      /* HRTIM Timerx Counter Register */
#define HRTIM_PERAR             0x40017494      /* HRTIM Timerx Period Register */
#define HRTIM_REPAR             0x40017498      /* HRTIM Timerx Repetition Register */
#define HRTIM_CMP1AR            0x4001749C      /* HRTIM Timerx Compare 1 Register */
#define HRTIM_CMP1CAR           0x400174A0      /* HRTIM Timerx Compare 1 Compound Register */
#define HRTIM_CMP2AR            0x400174A4      /* HRTIM Timerx Compare 2 Register */
#define HRTIM_CMP3AR            0x400174A8      /* HRTIM Timerx Compare 3 Register */
#define HRTIM_CMP4AR            0x400174AC      /* HRTIM Timerx Compare 4 Register */
#define HRTIM_CPT1AR            0x400174B0      /* HRTIM Timerx Capture 1 Register */
#define HRTIM_CPT2AR            0x400174B4      /* HRTIM Timerx Capture 2 Register */
#define HRTIM_DTAR              0x400174B8      /* HRTIM Timerx Deadtime Register */
#define HRTIM_SETA1R            0x400174BC      /* HRTIM Timerx Output1 Set Register */
#define HRTIM_RSTA1R            0x400174C0      /* HRTIM Timerx Output1 Reset Register */
#define HRTIM_SETA2R            0x400174C4      /* HRTIM Timerx Output2 Set Register */
#define HRTIM_RSTA2R            0x400174C8      /* HRTIM Timerx Output2 Reset Register */
#define HRTIM_EEFAR1            0x400174CC      /* HRTIM Timerx External Event Filtering Register 1 */
#define HRTIM_EEFAR2            0x400174D0      /* HRTIM Timerx External Event Filtering Register 2 */
#define HRTIM_RSTAR             0x400174D4      /* HRTIM Timerx Reset Register */
#define HRTIM_CHPAR             0x400174D8      /* HRTIM Timerx Chopper Register */
#define HRTIM_CPT1ACR           0x400174DC      /* HRTIM Timerx Capture 1 Control Register */
#define HRTIM_CPT2ACR           0x400174E0      /* HRTIM Timerx Capture 2 Control Register */
#define HRTIM_OUTAR             0x400174E4      /* HRTIM Timerx Output Register */
#define HRTIM_FLTAR             0x400174E8      /* HRTIM Timerx Fault Register */

/* Timer B */
#define HRTIM_TIMBCR            0x40017500
#define HRTIM_TIMBISR           0x40017504
#define HRTIM_TIMBICR           0x40017508
#define HRTIM_TIMBDIER          0x4001750C
#define HRTIM_TIM_CNTBR         0x40017510
#define HRTIM_PERBR             0x40017514
#define HRTIM_REPBR             0x40017518
#define HRTIM_CMP1BR            0x4001751C
#define HRTIM_CMP1CBR           0x40017520
#define HRTIM_CMP2BR            0x40017524
#define HRTIM_CMP3BR            0x40017528
#define HRTIM_CMP4BR            0x4001752C
#define HRTIM_CPT1BR            0x40017530
#define HRTIM_CPT2BR            0x40017534
#define HRTIM_DTBR              0x40017538
#define HRTIM_SETB1R            0x4001753C
#define HRTIM_RSTB1R            0x40017540
#define HRTIM_SETB2R            0x40017544
#define HRTIM_RSTB2R            0x40017548
#define HRTIM_EEFBR1            0x4001754C
#define HRTIM_EEFBR2            0x40017550
#define HRTIM_RSTBR             0x40017554
#define HRTIM_CHPBR             0x40017558
#define HRTIM_CPT1BCR           0x4001755C
#define HRTIM_CPT2BCR           0x40017560
#define HRTIM_OUTBR             0x40017564
#define HRTIM_FLTBR             0x40017568

/* Timer C */
#define HRTIM_TIMCCR            0x40017580
#define HRTIM_TIMCISR           0x40017584
#define HRTIM_TIMCICR           0x40017588
#define HRTIM_TIMCDIER          0x4001758C
#define HRTIM_TIM_CNTCR         0x40017590
#define HRTIM_PERCR             0x40017594
#define HRTIM_REPCR             0x40017598
#define HRTIM_CMP1CR            0x4001759C
#define HRTIM_CMP1CCR           0x400175A0
#define HRTIM_CMP2CR            0x400175A4
#define HRTIM_CMP3CR            0x400175A8
#define HRTIM_CMP4CR            0x400175AC
#define HRTIM_CPT1CR            0x400175B0
#define HRTIM_CPT2CR            0x400175B4
#define HRTIM_DTCR              0x400175B8
#define HRTIM_SETC1R            0x400175BC
#define HRTIM_RSTC1R            0x400175C0
#define HRTIM_SETC2R            0x400175C4
#define HRTIM_RSTC2R            0x400175C8
#define HRTIM_EEFCR1            0x400175CC
#define HRTIM_EEFCR2            0x400175D0
#define HRTIM_RSTCR             0x400175D4
#define HRTIM_CHPCR             0x400175D8
#define HRTIM_CPT1CCR           0x400175DC
#define HRTIM_CPT2CCR           0x400175E0
#define HRTIM_OUTCR             0x400175E4
#define HRTIM_FLTCR             0x400175E8

/* Timer D */
#define HRTIM_TIMDCR            0x40017600
#define HRTIM_TIMDISR           0x40017604
#define HRTIM_TIMDICR           0x40017608
#define HRTIM_TIMDDIER          0x4001760C
#define HRTIM_TIM_CNTDR         0x40017610
#define HRTIM_PERDR             0x40017614
#define HRTIM_REPDR             0x40017618
#define HRTIM_CMP1DR            0x4001761C
#define HRTIM_CMP1CDR           0x40017620
#define HRTIM_CMP2DR            0x40017624
#define HRTIM_CMP3DR            0x40017628
#define HRTIM_CMP4DR            0x4001762C
#define HRTIM_CPT1DR            0x40017630
#define HRTIM_CPT2DR            0x40017634
#define HRTIM_DTDR              0x40017638
#define HRTIM_SETD1R            0x4001763C
#define HRTIM_RSTD1R            0x40017640
#define HRTIM_SETD2R            0x40017644
#define HRTIM_RSTD2R            0x40017648
#define HRTIM_EEFDR1            0x4001764C
#define HRTIM_EEFDR2            0x40017650
#define HRTIM_RSTDR             0x40017654
#define HRTIM_CHPDR             0x40017658
#define HRTIM_CPT1DCR           0x4001765C
#define HRTIM_CPT2DCR           0x40017660
#define HRTIM_OUTDR             0x40017664
#define HRTIM_FLTDR             0x40017668

/* Timer E */
#define HRTIM_TIMECR            0x40017680
#define HRTIM_TIMEISR           0x40017684
#define HRTIM_TIMEICR           0x40017688
#define HRTIM_TIMEDIER          0x4001768C
#define HRTIM_TIM_CNTER         0x40017690
#define HRTIM_PERER             0x40017694
#define HRTIM_REPER             0x40017698
#define HRTIM_CMP1ER            0x4001769C
#define HRTIM_CMP1CER           0x400176A0
#define HRTIM_CMP2ER            0x400176A4
#define HRTIM_CMP3ER            0x400176A8
#define HRTIM_CMP4ER            0x400176AC
#define HRTIM_CPT1ER            0x400176B0
#define HRTIM_CPT2ER            0x400176B4
#define HRTIM_DTER              0x400176B8
#define HRTIM_SETE1R            0x400176BC
#define HRTIM_RSTE1R            0x400176C0
#define HRTIM_SETE2R            0x400176C4
#define HRTIM_RSTE2R            0x400176C8
#define HRTIM_EEFER1            0x400176CC
#define HRTIM_EEFER2            0x400176D0
#define HRTIM_RSTER             0x400176D4
#define HRTIM_CHPER             0x400176D8
#define HRTIM_CPT1ECR           0x400176DC
#define HRTIM_CPT2ECR           0x400176E0
#define HRTIM_OUTER             0x400176E4
#define HRTIM_FLTER             0x400176E8

/* Common */
#define HRTIM_CR1               0x40017780      /* HRTIM Control Register 1 */
#define HRTIM_CR2               0x40017784      /* HRTIM Control Register 2 */
#define HRTIM_ISR               0x40017788      /* HRTIM Interrupt Status Register */
#define HRTIM_ICR               0x4001778C      /* HRTIM Interrupt Clear Register */
#define HRTIM_IER               0x40017790      /* HRTIM Interrupt Enable Register */
#define HRTIM_OENR              0x40017794      /* HRTIM Output Enable Register */
#define HRTIM_ODISR             0x40017798      /* HRTIM Output Disable Register */
#define HRTIM_ODSR              0x4001779C      /* HRTIM Output Disable Status Register */
#define HRTIM_BMCR              0x400177A0      /* HRTIM Burst Mode Control Register */
#define HRTIM_BMTRG             0x400177A4      /* HRTIM Burst Mode Trigger Register */
#define HRTIM_BMCMPR            0x400177A8      /* HRTIM Burst Mode Compare Register */
#define HRTIM_BMPER             0x400177AC      /* HRTIM Burst Mode Period Register */
#define HRTIM_EECR1             0x400177B0      /* HRTIM Timer External Event Control Register 1 */
#define HRTIM_EECR2             0x400177B4      /* HRTIM Timer External Event Control Register 2 */
#define HRTIM_EECR3             0x400177B8      /* HRTIM Timer External Event Control Register 3 */
#define HRTIM_ADC1R             0x400177BC      /* HRTIM ADC Trigger 1 Register */
#define HRTIM_ADC2R             0x400177C0      /* HRTIM ADC Trigger 2 Register */
#define HRTIM_ADC3R             0x400177C4      /* HRTIM ADC Trigger 3 Register */
#define HRTIM_ADC4R             0x400177C8      /* HRTIM ADC Trigger 4 Register */
#define HRTIM_FLTINR1           0x400177D0      /* HRTIM Fault Input Register 1 */
#define HRTIM_FLTINR2           0x400177D4      /* HRTIM Fault Input Register 2 */
#define HRTIM_BDMUPDR           0x400177D8      /* HRTIM Burst DMA Master timer update Register */
#define HRTIM_BDTAUPR           0x400177DC      /* HRTIM Burst DMA Timer A update Register */
#define HRTIM_BDTBUPR           0x400177E0      /* HRTIM Burst DMA Timer B update Register */
#define HRTIM_BDTCUPR           0x400177E4      /* HRTIM Burst DMA Timer C update Register */
#define HRTIM_BDTDUPR           0x400177E8      /* HRTIM Burst DMA Timer D update Register */
#define HRTIM_BDTEUPR           0x400177EC      /* HRTIM Burst DMA Timer E update Register */
#define HRTIM_BDMADR            0x400177F0      /* HRTIM Burst DMA Data Register */

/**
 * Advanced-control timers (TIM1/TIM8) registers
 */

/* TIM1 */
#define TIM1_CR1                0x40010000      /* TIMx control register 1 */
#define TIM1_CR2                0x40010004      /* TIMx control register 2 */
#define TIM1_SMCR               0x40010008      /* TIMx slave mode control register */
#define TIM1_DIER               0x4001000C      /* TIMx DMA/interrupt enable register */
#define TIM1_SR                 0x40010010      /* TIMx status register */
#define TIM1_EGR                0x40010014      /* TIMx event generation register */
#define TIM1_CCMR1              0x40010018      /* TIMx capture/compare mode register 1 */
#define TIM1_CCMR2              0x4001001C      /* TIMx capture/compare mode register 2 */
#define TIM1_CCER               0x40010020      /* TIMx capture/compare enable register */
#define TIM1_CNT                0x40010024      /* TIMx counter */
#define TIM1_PSC                0x40010028      /* TIMx prescaler */
#define TIM1_ARR                0x4001002C      /* TIMx auto-reload register */
#define TIM1_RCR                0x40010030      /* TIMx repetition counter register */
#define TIM1_CCR1               0x40010034      /* TIMx capture/compare register 1 */
#define TIM1_CCR2               0x40010038      /* TIMx capture/compare register 2 */
#define TIM1_CCR3               0x4001003C      /* TIMx capture/compare register 3 */
#define TIM1_CCR4               0x40010040      /* TIMx capture/compare register 4 */
#define TIM1_BDTR               0x40010044      /* TIMx break and dead-time register */
#define TIM1_DCR                0x40010048      /* TIMx DMA control register */
#define TIM1_DMAR               0x4001004C      /* TIMx DMA address for full transfer */
#define TIM1_CCMR3              0x40010054      /* TIMx capture/compare mode register 3 */
#define TIM1_CCR5               0x40010058      /* TIMx capture/compare register 5 */
#define TIM1_CCR6               0x4001005C      /* TIMx capture/compare register 6 */
#define TIM1_AF1                0x40010060      /* TIMx alternate function option register 1 */
#define TIM1_AF2                0x40010064      /* TIMx alternate function option register 2 */
#define TIM1_TISEL              0x40010068      /* TIMx timer input selection register */

/* TIM8 */
#define TIM8_CR1                0x40010400
#define TIM8_CR2                0x40010404
#define TIM8_SMCR               0x40010408
#define TIM8_DIER               0x4001040C
#define TIM8_SR                 0x40010410
#define TIM8_EGR                0x40010414
#define TIM8_CCMR1              0x40010418
#define TIM8_CCMR2              0x4001041C
#define TIM8_CCER               0x40010420
#define TIM8_CNT                0x40010424
#define TIM8_PSC                0x40010428
#define TIM8_ARR                0x4001042C
#define TIM8_RCR                0x40010430
#define TIM8_CCR1               0x40010434
#define TIM8_CCR2               0x40010438
#define TIM8_CCR3               0x4001043C
#define TIM8_CCR4               0x40010440
#define TIM8_BDTR               0x40010444
#define TIM8_DCR                0x40010448
#define TIM8_DMAR               0x4001044C
#define TIM8_CCMR3              0x40010454
#define TIM8_CCR5               0x40010458
#define TIM8_CCR6               0x4001045C
#define TIM8_AF1                0x40010460
#define TIM8_AF2                0x40010464
#define TIM8_TISEL              0x40010468

/**
 * General-purpose timers (TIM2/TIM3/TIM4/TIM5) registers
 */

/* TIM2 */
#define TIM2_CR1                0x40000000      /* TIMx control register 1 */
#define TIM2_CR2                0x40000004      /* TIMx control register 2 */
#define TIM2_SMCR               0x40000008      /* TIMx slave mode control register */
#define TIM2_DIER               0x4000000C      /* TIMx DMA/Interrupt enable register */
#define TIM2_SR                 0x40000010      /* TIMx status register */
#define TIM2_EGR                0x40000014      /* TIMx event generation register */
#define TIM2_CCMR1              0x40000018      /* TIMx capture/compare mode register 1 */
#define TIM2_CCMR2              0x4000001C      /* TIMx capture/compare mode register 2 */
#define TIM2_CCER               0x40000020      /* TIMx capture/compare enable register */
#define TIM2_CNT                0x40000024      /* TIMx counter */
#define TIM2_PSC                0x40000028      /* TIMx prescaler */
#define TIM2_ARR                0x4000002C      /* TIMx auto-reload register */
#define TIM2_CCR1               0x40000034      /* TIMx capture/compare register 1 */
#define TIM2_CCR2               0x40000038      /* TIMx capture/compare register 2 */
#define TIM2_CCR3               0x4000003C      /* TIMx capture/compare register 3 */
#define TIM2_CCR4               0x40000040      /* TIMx capture/compare register 4 */
#define TIM2_DCR                0x40000048      /* TIMx DMA control register */
#define TIM2_DMAR               0x4000004C      /* TIMx DMA address for full transfer */
#define TIM2_AF1                0x40000060      /* TIMx alternate function option register 1 */
#define TIM2_TISEL              0x40000068      /* TIMx timer input selection register */

/* TIM3 */
#define TIM3_CR1                0x40000400
#define TIM3_CR2                0x40000404
#define TIM3_SMCR               0x40000408
#define TIM3_DIER               0x4000040C
#define TIM3_SR                 0x40000410
#define TIM3_EGR                0x40000414
#define TIM3_CCMR1              0x40000418
#define TIM3_CCMR2              0x4000041C
#define TIM3_CCER               0x40000420
#define TIM3_CNT                0x40000424
#define TIM3_PSC                0x40000428
#define TIM3_ARR                0x4000042C
#define TIM3_CCR1               0x40000434
#define TIM3_CCR2               0x40000438
#define TIM3_CCR3               0x4000043C
#define TIM3_CCR4               0x40000440
#define TIM3_DCR                0x40000448
#define TIM3_DMAR               0x4000044C
#define TIM3_AF1                0x40000460
#define TIM3_TISEL              0x40000468

/* TIM4 */
#define TIM4_CR1                0x40000800
#define TIM4_CR2                0x40000804
#define TIM4_SMCR               0x40000808
#define TIM4_DIER               0x4000080C
#define TIM4_SR                 0x40000810
#define TIM4_EGR                0x40000814
#define TIM4_CCMR1              0x40000818
#define TIM4_CCMR2              0x4000081C
#define TIM4_CCER               0x40000820
#define TIM4_CNT                0x40000824
#define TIM4_PSC                0x40000828
#define TIM4_ARR                0x4000082C
#define TIM4_CCR1               0x40000834
#define TIM4_CCR2               0x40000838
#define TIM4_CCR3               0x4000083C
#define TIM4_CCR4               0x40000840
#define TIM4_DCR                0x40000848
#define TIM4_DMAR               0x4000084C
#define TIM4_AF1                0x40000860
#define TIM4_TISEL              0x40000868

/* TIM5 */
#define TIM5_CR1                0x40000C00
#define TIM5_CR2                0x40000C04
#define TIM5_SMCR               0x40000C08
#define TIM5_DIER               0x40000C0C
#define TIM5_SR                 0x40000C10
#define TIM5_EGR                0x40000C14
#define TIM5_CCMR1              0x40000C18
#define TIM5_CCMR2              0x40000C1C
#define TIM5_CCER               0x40000C20
#define TIM5_CNT                0x40000C24
#define TIM5_PSC                0x40000C28
#define TIM5_ARR                0x40000C2C
#define TIM5_CCR1               0x40000C34
#define TIM5_CCR2               0x40000C38
#define TIM5_CCR3               0x40000C3C
#define TIM5_CCR4               0x40000C40
#define TIM5_DCR                0x40000C48
#define TIM5_DMAR               0x40000C4C
#define TIM5_AF1                0x40000C60
#define TIM5_TISEL              0x40000C68

/**
 * General-purpose timers (TIM12/TIM13/TIM14) registers
 */

/* TIM12 */
#define TIM12_CR1               0x40001800      /* TIM12 control register 1 */
#define TIM12_CR2               0x40001804      /* TIM12 control register 2 */
#define TIM12_SMCR              0x40001808      /* TIM12 slave mode control register */
#define TIM12_DIER              0x4000180C      /* TIM12 Interrupt enable register */
#define TIM12_SR                0x40001810      /* TIM12 status register */
#define TIM12_EGR               0x40001814      /* TIM12 event generation register */
#define TIM12_CCMR1             0x40001818      /* TIM12 capture/compare mode register 1 */
#define TIM12_CCER              0x40001820      /* TIM12 capture/compare enable register */
#define TIM12_CNT               0x40001824      /* TIM12 counter */
#define TIM12_PSC               0x40001828      /* TIM12 prescaler */
#define TIM12_ARR               0x4000182C      /* TIM12 auto-reload register */
#define TIM12_CCR1              0x40001834      /* TIM12 capture/compare register 1 */
#define TIM12_CCR2              0x40001838      /* TIM12 capture/compare register 2 */
#define TIM12_TISEL             0x40001868      /* TIM12 timer input selection register */

/* TIM13 */
#define TIM13_CR1               0x40001C00      /* TIMx control register 1 */
#define TIM13_DIER              0x40001C0C      /* TIMx Interrupt enable register */
#define TIM13_SR                0x40001C10      /* TIMx status register */
#define TIM13_EGR               0x40001C14      /* TIMx event generation register */
#define TIM13_CCMR1             0x40001C18      /* TIMx capture/compare mode register 1 */
#define TIM13_CCER              0x40001C20      /* TIMx capture/compare enable register */
#define TIM13_CNT               0x40001C24      /* TIMx counter */
#define TIM13_PSC               0x40001C28      /* TIMx prescaler */
#define TIM13_ARR               0x40001C2C      /* TIMx auto-reload register */
#define TIM13_CCR1              0x40001C34      /* TIMx capture/compare register 1 */
#define TIM13_TISEL             0x40001C68      /* TIMx timer input selection register */

/* TIM14 */
#define TIM14_CR1               0x40002000
#define TIM14_DIER              0x4000200C
#define TIM14_SR                0x40002010
#define TIM14_EGR               0x40002014
#define TIM14_CCMR1             0x40002018
#define TIM14_CCER              0x40002020
#define TIM14_CNT               0x40002024
#define TIM14_PSC               0x40002028
#define TIM14_ARR               0x4000202C
#define TIM14_CCR1              0x40002034
#define TIM14_TISEL             0x40002068

/**
 * General-purpose timers (TIM15/TIM16/TIM17) registers
 */

/* TIM15 */
#define TIM15_CR1               0x40014000      /* TIM15 control register 1 */
#define TIM15_CR2               0x40014004      /* TIM15 control register 2 */
#define TIM15_SMCR              0x40014008      /* TIM15 slave mode control register */
#define TIM15_DIER              0x4001400C      /* TIM15 DMA/interrupt enable register */
#define TIM15_SR                0x40014010      /* TIM15 status register */
#define TIM15_EGR               0x40014014      /* TIM15 event generation register */
#define TIM15_CCMR1             0x40014018      /* TIM15 capture/compare mode register 1 */
#define TIM15_CCER              0x40014020      /* TIM15 capture/compare enable register */
#define TIM15_CNT               0x40014024      /* TIM15 counter */
#define TIM15_PSC               0x40014028      /* TIM15 prescaler */
#define TIM15_ARR               0x4001402C      /* TIM15 auto-reload register */
#define TIM15_RCR               0x40014030      /* TIM15 repetition counter register */
#define TIM15_CCR1              0x40014034      /* TIM15 capture/compare register 1 */
#define TIM15_CCR2              0x40014038      /* TIM15 capture/compare register 2 */
#define TIM15_BDTR              0x40014044      /* TIM15 break and dead-time register */
#define TIM15_DCR               0x40014048      /* TIM15 DMA control register */
#define TIM15_DMAR              0x4001404C      /* TIM15 DMA address for full transfer */
#define TIM15_AF1               0x40014060      /* TIM15 alternate register 1 */
#define TIM15_TISEL             0x40014068      /* TIM15 input selection register */

/* TIM16 */
#define TIM16_CR1               0x40014400      /* TIMx control register 1 */
#define TIM16_CR2               0x40014404      /* TIMx control register 2 */
#define TIM16_DIER              0x4001440C      /* TIMx DMA/interrupt enable register */
#define TIM16_SR                0x40014410      /* TIMx status register */
#define TIM16_EGR               0x40014414      /* TIMx event generation register */
#define TIM16_CCMR1             0x40014418      /* TIMx capture/compare mode register 1 */
#define TIM16_CCER              0x40014420      /* TIMx capture/compare enable register */
#define TIM16_CNT               0x40014424      /* TIMx counter */
#define TIM16_PSC               0x40014428      /* TIMx prescaler */
#define TIM16_ARR               0x4001442C      /* TIMx auto-reload register */
#define TIM16_RCR               0x40014430      /* TIMx repetition counter register */
#define TIM16_CCR1              0x40014434      /* TIMx capture/compare register 1 */
#define TIM16_BDTR              0x40014444      /* TIMx break and dead-time register */
#define TIM16_DCR               0x40014448      /* TIMx DMA control register */
#define TIM16_DMAR              0x4001444C      /* TIMx DMA address for full transfer */
#define TIM16_AF1               0x40014460      /* TIMx alternate function register 1 */
#define TIM16_TISEL             0x40014468      /* TIMx input selection register */

/* TIM17 */
#define TIM17_CR1               0x40014800
#define TIM17_CR2               0x40014804
#define TIM17_DIER              0x4001480C
#define TIM17_SR                0x40014810
#define TIM17_EGR               0x40014814
#define TIM17_CCMR1             0x40014818
#define TIM17_CCER              0x40014820
#define TIM17_CNT               0x40014824
#define TIM17_PSC               0x40014828
#define TIM17_ARR               0x4001482C
#define TIM17_RCR               0x40014830
#define TIM17_CCR1              0x40014834
#define TIM17_BDTR              0x40014844
#define TIM17_DCR               0x40014848
#define TIM17_DMAR              0x4001484C
#define TIM17_AF1               0x40014860
#define TIM17_TISEL             0x40014868

/**
 * Basic timers (TIM6/TIM7) registers
 */

/* TIM6 */
#define TIM6_CR1                0x40001000      /* TIMx control register 1 */
#define TIM6_CR2                0x40001004      /* TIMx control register 2 */
#define TIM6_DIER               0x4000100C      /* TIMx DMA/Interrupt enable register */
#define TIM6_SR                 0x40001010      /* TIMx status register */
#define TIM6_EGR                0x40001014      /* TIMx event generation register */
#define TIM6_CNT                0x40001024      /* TIMx counter */
#define TIM6_PSC                0x40001028      /* TIMx prescaler */
#define TIM6_ARR                0x4000102C      /* TIMx auto-reload register */

/* TIM7 */
#define TIM7_CR1                0x40001400      /* TIMx control register 1 */
#define TIM7_CR2                0x40001404      /* TIMx control register 2 */
#define TIM7_DIER               0x4000140C      /* TIMx DMA/Interrupt enable register */
#define TIM7_SR                 0x40001410      /* TIMx status register */
#define TIM7_EGR                0x40001414      /* TIMx event generation register */
#define TIM7_CNT                0x40001424      /* TIMx counter */
#define TIM7_PSC                0x40001428      /* TIMx prescaler */
#define TIM7_ARR                0x4000142C      /* TIMx auto-reload register */

/**
 * Low-power timer (LPTIM) registers
 */

/* LPTIM1 */
#define LPTIM1_ISR              0x40002400      /* LPTIM interrupt and status register */
#define LPTIM1_ICR              0x40002404      /* LPTIM interrupt clear register */
#define LPTIM1_IER              0x40002408      /* LPTIM interrupt enable register */
#define LPTIM1_CFGR             0x4000240C      /* LPTIM configuration register */
#define LPTIM1_CR               0x40002410      /* LPTIM control register */
#define LPTIM1_CMP              0x40002414      /* LPTIM compare register */
#define LPTIM1_ARR              0x40002418      /* LPTIM autoreload register */
#define LPTIM1_CNT              0x4000241C      /* LPTIM counter register */
#define LPTIM1_CFGR2            0x40002424      /* LPTIM configuration register 2 */

/* LPTIM2 */
#define LPTIM2_ISR              0x58002400      /* LPTIM interrupt and status register */
#define LPTIM2_ICR              0x58002404      /* LPTIM interrupt clear register */
#define LPTIM2_IER              0x58002408      /* LPTIM interrupt enable register */
#define LPTIM2_CFGR             0x5800240C      /* LPTIM configuration register */
#define LPTIM2_CR               0x58002410      /* LPTIM control register */
#define LPTIM2_CMP              0x58002414      /* LPTIM compare register */
#define LPTIM2_ARR              0x58002418      /* LPTIM autoreload register */
#define LPTIM2_CNT              0x5800241C      /* LPTIM counter register */
#define LPTIM2_CFGR2            0x58002424      /* LPTIM configuration register 2 */

/* LPTIM3 */
#define LPTIM3_ISR              0x58002800      /* LPTIM interrupt and status register */
#define LPTIM3_ICR              0x58002804      /* LPTIM interrupt clear register */
#define LPTIM3_IER              0x58002808      /* LPTIM interrupt enable register */
#define LPTIM3_CFGR             0x5800280C      /* LPTIM configuration register */
#define LPTIM3_CR               0x58002810      /* LPTIM control register */
#define LPTIM3_CMP              0x58002814      /* LPTIM compare register */
#define LPTIM3_ARR              0x58002818      /* LPTIM autoreload register */
#define LPTIM3_CNT              0x5800281C      /* LPTIM counter register */
#define LPTIM3_CFGR2            0x58002824      /* LPTIM configuration register 2 */

/* LPTIM4 */
#define LPTIM4_ISR              0x58002C00      /* LPTIM interrupt and status register */
#define LPTIM4_ICR              0x58002C04      /* LPTIM interrupt clear register */
#define LPTIM4_IER              0x58002C08      /* LPTIM interrupt enable register */
#define LPTIM4_CFGR             0x58002C0C      /* LPTIM configuration register */
#define LPTIM4_CR               0x58002C10      /* LPTIM control register */
#define LPTIM4_CMP              0x58002C14      /* LPTIM compare register */
#define LPTIM4_ARR              0x58002C18      /* LPTIM autoreload register */
#define LPTIM4_CNT              0x58002C1C      /* LPTIM counter register */
#define LPTIM4_CFGR2            0x58002C24      /* LPTIM configuration register 2 */

/* LPTIM5 */
#define LPTIM5_ISR              0x58003000      /* LPTIM interrupt and status register */
#define LPTIM5_ICR              0x58003004      /* LPTIM interrupt clear register */
#define LPTIM5_IER              0x58003008      /* LPTIM interrupt enable register */
#define LPTIM5_CFGR             0x5800300C      /* LPTIM configuration register */
#define LPTIM5_CR               0x58003010      /* LPTIM control register */
#define LPTIM5_CMP              0x58003014      /* LPTIM compare register */
#define LPTIM5_ARR              0x58003018      /* LPTIM autoreload register */
#define LPTIM5_CNT              0x5800301C      /* LPTIM counter register */
#define LPTIM5_CFGR2            0x58003024      /* LPTIM configuration register 2 */

/**
 * System window watchdog (WWDG) registers
 */

/* WWDG1 */
#define WWDG1_CR                0x50003000      /* WWDG control register */
#define WWDG1_CFR               0x50003004      /* WWDG configuration register */
#define WWDG1_SR                0x50003008      /* WWDG status register */

/* WWDG2 */
#define WWDG2_CR                0x40002C00
#define WWDG2_CFR               0x40002C04
#define WWDG2_SR                0x40002C08

/**
 * Independent watchdog (IWDG) registers
 */

/* IWDG1 */
#define IWDG1_KR                0x58004800      /* IWDG key register */
#define IWDG1_PR                0x58004804      /* IWDG prescaler register */
#define IWDG1_RLR               0x58004808      /* IWDG reload register */
#define IWDG1_SR                0x5800480C      /* IWDG status register */
#define IWDG1_WINR              0x58004810      /* IWDG window register */

/* IWDG2 */
#define IWDG2_KR                0x58004C00
#define IWDG2_PR                0x58004C04
#define IWDG2_RLR               0x58004C08
#define IWDG2_SR                0x58004C0C
#define IWDG2_WINR              0x58004C10

/**
 * Real-time clock (RTC) registers
 */

#define RTC_TR                  0x58004000      /* RTC time register */
#define RTC_DR                  0x58004004      /* RTC date register */
#define RTC_CR                  0x58004008      /* RTC control register */
#define RTC_ISR                 0x5800400C      /* RTC initialization and status register */
#define RTC_PRER                0x58004010      /* RTC prescaler register */
#define RTC_WUTR                0x58004014      /* RTC wake-up timer register */
#define RTC_ALRMAR              0x5800401C      /* RTC alarm A register */
#define RTC_ALRMBR              0x58004020      /* RTC alarm B register */
#define RTC_WPR                 0x58004024      /* RTC write protection register */
#define RTC_SSR                 0x58004028      /* RTC sub second register */
#define RTC_SHIFTR              0x5800402C      /* RTC shift control register */
#define RTC_TSTR                0x58004030      /* RTC timestamp time register */
#define RTC_TSDR                0x58004034      /* RTC timestamp date register */
#define RTC_TSSSR               0x58004038      /* RTC time-stamp sub second register */
#define RTC_CALR                0x5800403C      /* RTC calibration register */
#define RTC_TAMPCR              0x58004040      /* RTC tamper configuration register */
#define RTC_ALRMASSR            0x58004044      /* RTC alarm A sub second register */
#define RTC_ALRMBSSR            0x58004048      /* RTC alarm B sub second register */
#define RTC_OR                  0x5800404C      /* RTC option register */
#define RTC_BKP0R               0x58004050      /* RTC backup registers */
#define RTC_BKP1R               0x58004054
#define RTC_BKP2R               0x58004058
#define RTC_BKP3R               0x5800405C
#define RTC_BKP4R               0x58004060
#define RTC_BKP5R               0x58004064
#define RTC_BKP6R               0x58004068
#define RTC_BKP7R               0x5800406C
#define RTC_BKP8R               0x58004070
#define RTC_BKP9R               0x58004074
#define RTC_BKP10R              0x58004078
#define RTC_BKP11R              0x5800407C
#define RTC_BKP12R              0x58004080
#define RTC_BKP13R              0x58004084
#define RTC_BKP14R              0x58004088
#define RTC_BKP15R              0x5800408C
#define RTC_BKP16R              0x58004090
#define RTC_BKP17R              0x58004094
#define RTC_BKP18R              0x58004098
#define RTC_BKP19R              0x5800409C
#define RTC_BKP20R              0x580040A0
#define RTC_BKP21R              0x580040A4
#define RTC_BKP22R              0x580040A8
#define RTC_BKP23R              0x580040AC
#define RTC_BKP24R              0x580040B0
#define RTC_BKP25R              0x580040B4
#define RTC_BKP26R              0x580040B8
#define RTC_BKP27R              0x580040BC
#define RTC_BKP28R              0x580040C0
#define RTC_BKP29R              0x580040C4
#define RTC_BKP30R              0x580040C8
#define RTC_BKP31R              0x580040CC


/**
 * Inter-integrated circuit (I2C) interface registers
 */

/* I2C1 */
#define I2C1_CR1                0x40005400      /* I2C control register 1 */
#define I2C1_CR2                0x40005404      /* I2C control register 2 */
#define I2C1_OAR1               0x40005408      /* I2C own address 1 register */
#define I2C1_OAR2               0x4000540C      /* I2C own address 2 register */
#define I2C1_TIMINGR            0x40005410      /* I2C timing register */
#define I2C1_TIMEOUTR           0x40005414      /* I2C timeout register */
#define I2C1_ISR                0x40005418      /* I2C interrupt and status register */
#define I2C1_ICR                0x4000541C      /* I2C interrupt clear register */
#define I2C1_PECR               0x40005420      /* I2C PEC register */
#define I2C1_RXDR               0x40005424      /* I2C receive data register */
#define I2C1_TXDR               0x40005428      /* I2C transmit data register */

/* I2C2 */
#define I2C2_CR1                0x40005800      /* I2C control register 1 */
#define I2C2_CR2                0x40005804      /* I2C control register 2 */
#define I2C2_OAR1               0x40005808      /* I2C own address 1 register */
#define I2C2_OAR2               0x4000580C      /* I2C own address 2 register */
#define I2C2_TIMINGR            0x40005810      /* I2C timing register */
#define I2C2_TIMEOUTR           0x40005814      /* I2C timeout register */
#define I2C2_ISR                0x40005818      /* I2C interrupt and status register */
#define I2C2_ICR                0x4000581C      /* I2C interrupt clear register */
#define I2C2_PECR               0x40005820      /* I2C PEC register */
#define I2C2_RXDR               0x40005824      /* I2C receive data register */
#define I2C2_TXDR               0x40005828      /* I2C transmit data register */

/* I2C3 */
#define I2C3_CR1                0x40005C00      /* I2C control register 1 */
#define I2C3_CR2                0x40005C04      /* I2C control register 2 */
#define I2C3_OAR1               0x40005C08      /* I2C own address 1 register */
#define I2C3_OAR2               0x40005C0C      /* I2C own address 2 register */
#define I2C3_TIMINGR            0x40005C10      /* I2C timing register */
#define I2C3_TIMEOUTR           0x40005C14      /* I2C timeout register */
#define I2C3_ISR                0x40005C18      /* I2C interrupt and status register */
#define I2C3_ICR                0x40005C1C      /* I2C interrupt clear register */
#define I2C3_PECR               0x40005C20      /* I2C PEC register */
#define I2C3_RXDR               0x40005C24      /* I2C receive data register */
#define I2C3_TXDR               0x40005C28      /* I2C transmit data register */

/* I2C4 */
#define I2C4_CR1                0x58001C00      /* I2C control register 1 */
#define I2C4_CR2                0x58001C04      /* I2C control register 2 */
#define I2C4_OAR1               0x58001C08      /* I2C own address 1 register */
#define I2C4_OAR2               0x58001C0C      /* I2C own address 2 register */
#define I2C4_TIMINGR            0x58001C10      /* I2C timing register */
#define I2C4_TIMEOUTR           0x58001C14      /* I2C timeout register */
#define I2C4_ISR                0x58001C18      /* I2C interrupt and status register */
#define I2C4_ICR                0x58001C1C      /* I2C interrupt clear register */
#define I2C4_PECR               0x58001C20      /* I2C PEC register */
#define I2C4_RXDR               0x58001C24      /* I2C receive data register */
#define I2C4_TXDR               0x58001C28      /* I2C transmit data register */

/**
 * Universal synchronous/asynchronous receiver transmitter (USART/UART) registers
 */

/* USART1 registers */
#define USART1_CR1              0x40011000      /* USART control register 1 */
#define USART1_CR2              0x40011004      /* USART control register 2 */
#define USART1_CR3              0x40011008      /* USART control register 3 */
#define USART1_BRR              0x4001100C      /* USART baud rate register */
#define USART1_GTPR             0x40011010      /* USART guard time and prescaler register */
#define USART1_RTOR             0x40011014      /* USART receiver timeout register */
#define USART1_RQR              0x40011018      /* USART request register */
#define USART1_ISR              0x4001101C      /* USART interrupt and status register */
#define USART1_ICR              0x40011020      /* USART interrupt flag clear register */
#define USART1_RDR              0x40011024      /* USART receive data register */
#define USART1_TDR              0x40011028      /* USART transmit data register */
#define USART1_PRESC            0x4001102C      /* USART prescaler register */

/* USART2 registers */
#define USART2_CR1              0x40004400      /* USART control register 1 */
#define USART2_CR2              0x40004404      /* USART control register 2 */
#define USART2_CR3              0x40004408      /* USART control register 3 */
#define USART2_BRR              0x4000440C      /* USART baud rate register */
#define USART2_GTPR             0x40004410      /* USART guard time and prescaler register */
#define USART2_RTOR             0x40004414      /* USART receiver timeout register */
#define USART2_RQR              0x40004418      /* USART request register */
#define USART2_ISR              0x4000441C      /* USART interrupt and status register */
#define USART2_ICR              0x40004420      /* USART interrupt flag clear register */
#define USART2_RDR              0x40004424      /* USART receive data register */
#define USART2_TDR              0x40004428      /* USART transmit data register */
#define USART2_PRESC            0x4000442C      /* USART prescaler register */

/* USART3 registers */
#define USART3_CR1              0x40004800      /* USART control register 1 */
#define USART3_CR2              0x40004804      /* USART control register 2 */
#define USART3_CR3              0x40004808      /* USART control register 3 */
#define USART3_BRR              0x4000480C      /* USART baud rate register */
#define USART3_GTPR             0x40004810      /* USART guard time and prescaler register */
#define USART3_RTOR             0x40004814      /* USART receiver timeout register */
#define USART3_RQR              0x40004818      /* USART request register */
#define USART3_ISR              0x4000481C      /* USART interrupt and status register */
#define USART3_ICR              0x40004820      /* USART interrupt flag clear register */
#define USART3_RDR              0x40004824      /* USART receive data register */
#define USART3_TDR              0x40004828      /* USART transmit data register */
#define USART3_PRESC            0x4000482C      /* USART prescaler register */

/* USART6 registers */
#define USART6_CR1              0x40011400      /* USART control register 1 */
#define USART6_CR2              0x40011404      /* USART control register 2 */
#define USART6_CR3              0x40011408      /* USART control register 3 */
#define USART6_BRR              0x4001140C      /* USART baud rate register */
#define USART6_GTPR             0x40011410      /* USART guard time and prescaler register */
#define USART6_RTOR             0x40011414      /* USART receiver timeout register */
#define USART6_RQR              0x40011418      /* USART request register */
#define USART6_ISR              0x4001141C      /* USART interrupt and status register */
#define USART6_ICR              0x40011420      /* USART interrupt flag clear register */
#define USART6_RDR              0x40011424      /* USART receive data register */
#define USART6_TDR              0x40011428      /* USART transmit data register */
#define USART6_PRESC            0x4001142C      /* USART prescaler register */

/* UART4 registers */
#define UART4_CR1               0x40004C00      /* UART control register 1 */
#define UART4_CR2               0x40004C04      /* UART control register 2 */
#define UART4_CR3               0x40004C08      /* UART control register 3 */
#define UART4_BRR               0x40004C0C      /* UART baud rate register */
#define UART4_GTPR              0x40004C10      /* UART guard time and prescaler register */
#define UART4_RTOR              0x40004C14      /* UART receiver timeout register */
#define UART4_RQR               0x40004C18      /* UART request register */
#define UART4_ISR               0x40004C1C      /* UART interrupt and status register */
#define UART4_ICR               0x40004C20      /* UART interrupt flag clear register */
#define UART4_RDR               0x40004C24      /* UART receive data register */
#define UART4_TDR               0x40004C28      /* UART transmit data register */
#define UART4_PRESC             0x40004C2C      /* UART prescaler register */

/* UART5 registers */
#define UART5_CR1               0x40005000      /* UART control register 1 */
#define UART5_CR2               0x40005004      /* UART control register 2 */
#define UART5_CR3               0x40005008      /* UART control register 3 */
#define UART5_BRR               0x4000500C      /* UART baud rate register */
#define UART5_GTPR              0x40005010      /* UART guard time and prescaler register */
#define UART5_RTOR              0x40005014      /* UART receiver timeout register */
#define UART5_RQR               0x40005018      /* UART request register */
#define UART5_ISR               0x4000501C      /* UART interrupt and status register */
#define UART5_ICR               0x40005020      /* UART interrupt flag clear register */
#define UART5_RDR               0x40005024      /* UART receive data register */
#define UART5_TDR               0x40005028      /* UART transmit data register */
#define UART5_PRESC             0x4000502C      /* UART prescaler register */

/* UART7 registers */
#define UART7_CR1               0x40007800      /* UART control register 1 */
#define UART7_CR2               0x40007804      /* UART control register 2 */
#define UART7_CR3               0x40007808      /* UART control register 3 */
#define UART7_BRR               0x4000780C      /* UART baud rate register */
#define UART7_GTPR              0x40007810      /* UART guard time and prescaler register */
#define UART7_RTOR              0x40007814      /* UART receiver timeout register */
#define UART7_RQR               0x40007818      /* UART request register */
#define UART7_ISR               0x4000781C      /* UART interrupt and status register */
#define UART7_ICR               0x40007820      /* UART interrupt flag clear register */
#define UART7_RDR               0x40007824      /* UART receive data register */
#define UART7_TDR               0x40007828      /* UART transmit data register */
#define UART7_PRESC             0x4000782C      /* UART prescaler register */

/* UART8 registers */
#define UART8_CR1               0x40007C00      /* UART control register 1 */
#define UART8_CR2               0x40007C04      /* UART control register 2 */
#define UART8_CR3               0x40007C08      /* UART control register 3 */
#define UART8_BRR               0x40007C0C      /* UART baud rate register */
#define UART8_GTPR              0x40007C10      /* UART guard time and prescaler register */
#define UART8_RTOR              0x40007C14      /* UART receiver timeout register */
#define UART8_RQR               0x40007C18      /* UART request register */
#define UART8_ISR               0x40007C1C      /* UART interrupt and status register */
#define UART8_ICR               0x40007C20      /* UART interrupt flag clear register */
#define UART8_RDR               0x40007C24      /* UART receive data register */
#define UART8_TDR               0x40007C28      /* UART transmit data register */
#define UART8_PRESC             0x40007C2C      /* UART prescaler register */

/**
 * Low-power universal asynchronous receiver transmitter (LPUART) registers
 */

#define LPUART_CR1              0x58000C00      /* LPUART control register 1 */
#define LPUART_CR2              0x58000C04      /* LPUART control register 2 */
#define LPUART_CR3              0x58000C08      /* LPUART control register 3 */
#define LPUART_BRR              0x58000C0C      /* LPUART baud rate register */
#define LPUART_RQR              0x58000C18      /* LPUART request register */
#define LPUART_ISR              0x58000C1C      /* LPUART interrupt and status register */
#define LPUART_ICR              0x58000C20      /* LPUART interrupt flag clear register */
#define LPUART_RDR              0x58000C24      /* LPUART receive data register */
#define LPUART_TDR              0x58000C28      /* LPUART transmit data register */
#define LPUART_PRESC            0x58000C2C      /* LPUART prescaler register */

/**
 * Serial peripheral interface (SPI) registers
 */

/* SPI1/I2S1 registers */
#define SPI2S1_CR1              0x40013000      /* SPI/I2S control register 1 */
#define SPI2S1_CR2              0x40013004      /* SPI control register 2 */
#define SPI2S1_CFG1             0x40013008      /* SPI configuration register 1 */
#define SPI2S1_CFG2             0x4001300C      /* SPI configuration register 2 */
#define SPI2S1_IER              0x40013010      /* SPI/I2S interrupt enable register */
#define SPI2S1_SR               0x40013014      /* SPI/I2S status register */
#define SPI2S1_IFCR             0x40013018      /* SPI/I2S interrupt/status flags clear register */
#define SPI2S1_TXDR             0x40013020      /* SPI/I2S transmit data register */
#define SPI2S1_RXDR             0x40013030      /* SPI/I2S receive data register */
#define SPI2S1_CRCPOLY          0x40013040      /* SPI polynomial register */
#define SPI2S1_TXCRC            0x40013044      /* SPI transmitter CRC register */
#define SPI2S1_RXCRC            0x40013048      /* SPI receiver CRC register */
#define SPI2S1_UDRDR            0x4001304C      /* SPI underrun data register */
#define SPI2S1_I2SCFGR          0x40013050      /* SPI/I2S configuration register */

/* SPI2/I2S2 registers */
#define SPI2S2_CR1              0x40003800      /* SPI/I2S control register 1 */
#define SPI2S2_CR2              0x40003804      /* SPI control register 2 */
#define SPI2S2_CFG1             0x40003808      /* SPI configuration register 1 */
#define SPI2S2_CFG2             0x4000380C      /* SPI configuration register 2 */
#define SPI2S2_IER              0x40003810      /* SPI/I2S interrupt enable register */
#define SPI2S2_SR               0x40003814      /* SPI/I2S status register */
#define SPI2S2_IFCR             0x40003818      /* SPI/I2S interrupt/status flags clear register */
#define SPI2S2_TXDR             0x40003820      /* SPI/I2S transmit data register */
#define SPI2S2_RXDR             0x40003830      /* SPI/I2S receive data register */
#define SPI2S2_CRCPOLY          0x40003840      /* SPI polynomial register */
#define SPI2S2_TXCRC            0x40003844      /* SPI transmitter CRC register */
#define SPI2S2_RXCRC            0x40003848      /* SPI receiver CRC register */
#define SPI2S2_UDRDR            0x4000384C      /* SPI underrun data register */
#define SPI2S2_I2SCFGR          0x40003850      /* SPI/I2S configuration register */

/* SPI3/I2S3 registers */
#define SPI2S3_CR1              0x40003C00      /* SPI/I2S control register 1 */
#define SPI2S3_CR2              0x40003C04      /* SPI control register 2 */
#define SPI2S3_CFG1             0x40003C08      /* SPI configuration register 1 */
#define SPI2S3_CFG2             0x40003C0C      /* SPI configuration register 2 */
#define SPI2S3_IER              0x40003C10      /* SPI/I2S interrupt enable register */
#define SPI2S3_SR               0x40003C14      /* SPI/I2S status register */
#define SPI2S3_IFCR             0x40003C18      /* SPI/I2S interrupt/status flags clear register */
#define SPI2S3_TXDR             0x40003C20      /* SPI/I2S transmit data register */
#define SPI2S3_RXDR             0x40003C30      /* SPI/I2S receive data register */
#define SPI2S3_CRCPOLY          0x40003C40      /* SPI polynomial register */
#define SPI2S3_TXCRC            0x40003C44      /* SPI transmitter CRC register */
#define SPI2S3_RXCRC            0x40003C48      /* SPI receiver CRC register */
#define SPI2S3_UDRDR            0x40003C4C      /* SPI underrun data register */
#define SPI2S3_I2SCFGR          0x40003C50      /* SPI/I2S configuration register */

/* SPI4 registers */
#define SPI4_CR1                0x40013400      /* SPI/I2S control register 1 */
#define SPI4_CR2                0x40013404      /* SPI control register 2 */
#define SPI4_CFG1               0x40013408      /* SPI configuration register 1 */
#define SPI4_CFG2               0x4001340C      /* SPI configuration register 2 */
#define SPI4_IER                0x40013410      /* SPI/I2S interrupt enable register */
#define SPI4_SR                 0x40013414      /* SPI/I2S status register */
#define SPI4_IFCR               0x40013418      /* SPI/I2S interrupt/status flags clear register */
#define SPI4_TXDR               0x40013420      /* SPI/I2S transmit data register */
#define SPI4_RXDR               0x40013430      /* SPI/I2S receive data register */
#define SPI4_CRCPOLY            0x40013440      /* SPI polynomial register */
#define SPI4_TXCRC              0x40013444      /* SPI transmitter CRC register */
#define SPI4_RXCRC              0x40013448      /* SPI receiver CRC register */
#define SPI4_UDRDR              0x4001344C      /* SPI underrun data register */
#define SPI4_I2SCFGR            0x40013450      /* SPI/I2S configuration register */

/* SPI5 registers */
#define SPI5_CR1                0x40015000      /* SPI/I2S control register 1 */
#define SPI5_CR2                0x40015004      /* SPI control register 2 */
#define SPI5_CFG1               0x40015008      /* SPI configuration register 1 */
#define SPI5_CFG2               0x4001500C      /* SPI configuration register 2 */
#define SPI5_IER                0x40015010      /* SPI/I2S interrupt enable register */
#define SPI5_SR                 0x40015014      /* SPI/I2S status register */
#define SPI5_IFCR               0x40015018      /* SPI/I2S interrupt/status flags clear register */
#define SPI5_TXDR               0x40015020      /* SPI/I2S transmit data register */
#define SPI5_RXDR               0x40015030      /* SPI/I2S receive data register */
#define SPI5_CRCPOLY            0x40015040      /* SPI polynomial register */
#define SPI5_TXCRC              0x40015044      /* SPI transmitter CRC register */
#define SPI5_RXCRC              0x40015048      /* SPI receiver CRC register */
#define SPI5_UDRDR              0x4001504C      /* SPI underrun data register */
#define SPI5_I2SCFGR            0x40015050      /* SPI/I2S configuration register */

/* SPI6 registers */
#define SPI6_CR1                0x58001400      /* SPI/I2S control register 1 */
#define SPI6_CR2                0x58001404      /* SPI control register 2 */
#define SPI6_CFG1               0x58001408      /* SPI configuration register 1 */
#define SPI6_CFG2               0x5800140C      /* SPI configuration register 2 */
#define SPI6_IER                0x58001410      /* SPI/I2S interrupt enable register */
#define SPI6_SR                 0x58001414      /* SPI/I2S status register */
#define SPI6_IFCR               0x58001418      /* SPI/I2S interrupt/status flags clear register */
#define SPI6_TXDR               0x58001420      /* SPI/I2S transmit data register */
#define SPI6_RXDR               0x58001430      /* SPI/I2S receive data register */
#define SPI6_CRCPOLY            0x58001440      /* SPI polynomial register */
#define SPI6_TXCRC              0x58001444      /* SPI transmitter CRC register */
#define SPI6_RXCRC              0x58001448      /* SPI receiver CRC register */
#define SPI6_UDRDR              0x5800144C      /* SPI underrun data register */
#define SPI6_I2SCFGR            0x58001450      /* SPI/I2S configuration register */

/**
 * Serial audio interface (SAI) registers
 */

/* SAI1 registers */
#define SAI1_GCR                0x40015800      /* SAI global configuration register */
#define SAI1_ACR1               0x40015804      /* SAI configuration register 1 */
#define SAI1_BCR1               0x40015824      /* SAI configuration register 1 */
#define SAI1_ACR2               0x40015808      /* SAI configuration register 2 */
#define SAI1_BCR2               0x40015828      /* SAI configuration register 2 */
#define SAI1_AFRCR              0x4001580C      /* SAI frame configuration register */
#define SAI1_BFRCR              0x4001582C      /* SAI frame configuration register */
#define SAI1_ASLOTR             0x40015810      /* SAI slot register */
#define SAI1_BSLOTR             0x40015830      /* SAI slot register */
#define SAI1_AIM                0x40015814      /* SAI interrupt mask register */
#define SAI1_BIM                0x40015834      /* SAI interrupt mask register */
#define SAI1_ASR                0x40015818      /* SAI status register */
#define SAI1_BSR                0x40015838      /* SAI status register */
#define SAI1_ACLRFR             0x4001581C      /* SAI clear flag register */
#define SAI1_BCLRFR             0x4001583C      /* SAI clear flag register */
#define SAI1_ADR                0x40015820      /* SAI data register */
#define SAI1_BDR                0x40015840      /* SAI data register */
#define SAI1_PDMCR              0x40015844      /* SAI PDM control register */
#define SAI1_PDMDLY             0x40015848      /* SAI PDM delay register */

/* SAI2 registers */
#define SAI2_GCR                0x40015C00      /* SAI global configuration register */
#define SAI2_ACR1               0x40015C04      /* SAI configuration register 1 */
#define SAI2_BCR1               0x40015C24      /* SAI configuration register 1 */
#define SAI2_ACR2               0x40015C08      /* SAI configuration register 2 */
#define SAI2_BCR2               0x40015C28      /* SAI configuration register 2 */
#define SAI2_AFRCR              0x40015C0C      /* SAI frame configuration register */
#define SAI2_BFRCR              0x40015C2C      /* SAI frame configuration register */
#define SAI2_ASLOTR             0x40015C10      /* SAI slot register */
#define SAI2_BSLOTR             0x40015C30      /* SAI slot register */
#define SAI2_AIM                0x40015C14      /* SAI interrupt mask register */
#define SAI2_BIM                0x40015C34      /* SAI interrupt mask register */
#define SAI2_ASR                0x40015C18      /* SAI status register */
#define SAI2_BSR                0x40015C38      /* SAI status register */
#define SAI2_ACLRFR             0x40015C1C      /* SAI clear flag register */
#define SAI2_BCLRFR             0x40015C3C      /* SAI clear flag register */
#define SAI2_ADR                0x40015C20      /* SAI data register */
#define SAI2_BDR                0x40015C40      /* SAI data register */
#define SAI2_PDMCR              0x40015C44      /* SAI PDM control register */
#define SAI2_PDMDLY             0x40015C48      /* SAI PDM delay register */

/* SAI3 registers */
#define SAI3_GCR                0x40016000      /* SAI global configuration register */
#define SAI3_ACR1               0x40016004      /* SAI configuration register 1 */
#define SAI3_BCR1               0x40016024      /* SAI configuration register 1 */
#define SAI3_ACR2               0x40016008      /* SAI configuration register 2 */
#define SAI3_BCR2               0x40016028      /* SAI configuration register 2 */
#define SAI3_AFRCR              0x4001600C      /* SAI frame configuration register */
#define SAI3_BFRCR              0x4001602C      /* SAI frame configuration register */
#define SAI3_ASLOTR             0x40016010      /* SAI slot register */
#define SAI3_BSLOTR             0x40016030      /* SAI slot register */
#define SAI3_AIM                0x40016014      /* SAI interrupt mask register */
#define SAI3_BIM                0x40016034      /* SAI interrupt mask register */
#define SAI3_ASR                0x40016018      /* SAI status register */
#define SAI3_BSR                0x40016038      /* SAI status register */
#define SAI3_ACLRFR             0x4001601C      /* SAI clear flag register */
#define SAI3_BCLRFR             0x4001603C      /* SAI clear flag register */
#define SAI3_ADR                0x40016020      /* SAI data register */
#define SAI3_BDR                0x40016040      /* SAI data register */
#define SAI3_PDMCR              0x40016044      /* SAI PDM control register */
#define SAI3_PDMDLY             0x40016048      /* SAI PDM delay register */

/* SAI4 registers */
#define SAI4_GCR                0x58005400      /* SAI global configuration register */
#define SAI4_ACR1               0x58005404      /* SAI configuration register 1 */
#define SAI4_BCR1               0x58005424      /* SAI configuration register 1 */
#define SAI4_ACR2               0x58005408      /* SAI configuration register 2 */
#define SAI4_BCR2               0x58005428      /* SAI configuration register 2 */
#define SAI4_AFRCR              0x5800540C      /* SAI frame configuration register */
#define SAI4_BFRCR              0x5800542C      /* SAI frame configuration register */
#define SAI4_ASLOTR             0x58005410      /* SAI slot register */
#define SAI4_BSLOTR             0x58005430      /* SAI slot register */
#define SAI4_AIM                0x58005414      /* SAI interrupt mask register */
#define SAI4_BIM                0x58005434      /* SAI interrupt mask register */
#define SAI4_ASR                0x58005418      /* SAI status register */
#define SAI4_BSR                0x58005438      /* SAI status register */
#define SAI4_ACLRFR             0x5800541C      /* SAI clear flag register */
#define SAI4_BCLRFR             0x5800543C      /* SAI clear flag register */
#define SAI4_ADR                0x58005420      /* SAI data register */
#define SAI4_BDR                0x58005440      /* SAI data register */
#define SAI4_PDMCR              0x58005444      /* SAI PDM control register */
#define SAI4_PDMDLY             0x58005448      /* SAI PDM delay register */

/**
 * SPDIF receiver interface (SPDIFRX) registers
 */

#define SPDIFRX_CR              0x40004000      /* SPDIFRX control register */
#define SPDIFRX_IMR             0x40004004      /* SPDIFRX interrupt mask register */
#define SPDIFRX_SR              0x40004008      /* SPDIFRX status register */
#define SPDIFRX_IFCR            0x4000400C      /* SPDIFRX interrupt flag clear register */
#define SPDIFRX_FMT0_DR         0x40004010      /* SPDIFRX data input register */
#define SPDIFRX_FMT1_DR         0x40004010      /* SPDIFRX data input register */
#define SPDIFRX_FMT2_DR         0x40004010      /* SPDIFRX data input register */
#define SPDIFRX_CSR             0x40004014      /* SPDIFRX channel status register */
#define SPDIFRX_DIR             0x40004018      /* SPDIFRX debug information register */

/**
 * Single wire protocol master interface (SWPMI) registers
 */

#define SWPMI_CR                0x40008800      /* SWPMI configuration/control register */
#define SWPMI_BRR               0x40008804      /* SWPMI Bitrate register */
#define SWPMI_ISR               0x4000880C      /* SWPMI Interrupt and Status register */
#define SWPMI_ICR               0x40008810      /* SWPMI Interrupt Flag Clear register */
#define SWPMI_IER               0x40008814      /* SWPMI Interrupt Enable register */
#define SWPMI_RFL               0x40008818      /* SWPMI Receive Frame Length register */
#define SWPMI_TDR               0x4000881C      /* SWPMI Transmit data register */
#define SWPMI_RDR               0x40008820      /* SWPMI Receive data register */
#define SWPMI_OR                0x40008824      /* SWPMI Option register */

/**
 * Management data input/output (MDIOS) registers
 */

#define MDIOS_CR                0x40009400      /* MDIOS configuration register */
#define MDIOS_WRFR              0x40009404      /* MDIOS write flag register */
#define MDIOS_CWRFR             0x40009408      /* MDIOS clear write flag register */
#define MDIOS_RDFR              0x4000940C      /* MDIOS read flag register */
#define MDIOS_CRDFR             0x40009410      /* MDIOS clear read flag register */
#define MDIOS_SR                0x40009414      /* MDIOS status register */
#define MDIOS_CLRFR             0x40009418      /* MDIOS clear flag register */
#define MDIOS_DINR0             0x40009500      /* MDIOS input data register 0 (0 to 31) */
#define MDIOS_DOUTR0            0x40009580      /* MDIOS output data register 0 (0 to 31) */

/**
 * Secure digital input/output MultiMediaCard interface (SDMMC) registers
 */

/* SDMMC1 registers */
#define SDMMC1_POWER            0x52007000      /* SDMMC power control register */
#define SDMMC1_CLKCR            0x52007004      /* SDMMC clock control register */
#define SDMMC1_ARGR             0x52007008      /* SDMMC argument register */
#define SDMMC1_CMDR             0x5200700C      /* SDMMC command register */
#define SDMMC1_RESPCMDR         0x52007010      /* SDMMC command response register */
#define SDMMC1_RESP1R           0x52007014      /* SDMMC response registers */
#define SDMMC1_RESP2R           0x52007018
#define SDMMC1_RESP3R           0x5200701C
#define SDMMC1_RESP4R           0x52007020
#define SDMMC1_DTIMER           0x52007024      /* SDMMC data timer register */
#define SDMMC1_DLENR            0x52007028      /* SDMMC data length register */
#define SDMMC1_DCTRLR           0x5200702C      /* SDMMC data control register */
#define SDMMC1_DCNTR            0x52007030      /* SDMMC data counter register */
#define SDMMC1_STAR             0x52007034      /* SDMMC status register */
#define SDMMC1_ICR              0x52007038      /* SDMMC interrupt clear register */
#define SDMMC1_MASKR            0x5200703C      /* SDMMC mask register */
#define SDMMC1_ACKTIMER         0x52007040      /* SDMMC acknowledgment timer register */
#define SDMMC1_IDMACTRLR        0x52007050      /* SDMMC DMA control register */
#define SDMMC1_IDMABSIZER       0x52007054      /* SDMMC IDMA buffer size register */
#define SDMMC1_IDMABASE0R       0x52007058      /* SDMMC IDMA buffer 0 base address register */
#define SDMMC1_IDMABASE1R       0x5200705C      /* SDMMC IDMA buffer 1 base address register */
#define SDMMC1_FIFOR0           0x52007080      /* SDMMC data FIFO registers */
#define SDMMC1_FIFOR1           0x52007084
#define SDMMC1_FIFOR2           0x52007088
#define SDMMC1_FIFOR3           0x5200708C
#define SDMMC1_FIFOR4           0x52007090
#define SDMMC1_FIFOR5           0x52007094
#define SDMMC1_FIFOR6           0x52007098
#define SDMMC1_FIFOR7           0x5200709C
#define SDMMC1_FIFOR8           0x520070A0
#define SDMMC1_FIFOR9           0x520070A4
#define SDMMC1_FIFOR10          0x520070A8
#define SDMMC1_FIFOR11          0x520070AC
#define SDMMC1_FIFOR12          0x520070B0
#define SDMMC1_FIFOR13          0x520070B4
#define SDMMC1_FIFOR14          0x520070B8
#define SDMMC1_FIFOR15          0x520070BC

/* SDMMC2 registers */
#define SDMMC2_POWER            0x48022400      /* SDMMC power control register */
#define SDMMC2_CLKCR            0x48022404      /* SDMMC clock control register */
#define SDMMC2_ARGR             0x48022408      /* SDMMC argument register */
#define SDMMC2_CMDR             0x4802240C      /* SDMMC command register */
#define SDMMC2_RESPCMDR         0x48022410      /* SDMMC command response register */
#define SDMMC2_RESP1R           0x48022414      /* SDMMC response registers */
#define SDMMC2_RESP2R           0x48022418
#define SDMMC2_RESP3R           0x4802241C
#define SDMMC2_RESP4R           0x48022420
#define SDMMC2_DTIMER           0x48022424      /* SDMMC data timer register */
#define SDMMC2_DLENR            0x48022428      /* SDMMC data length register */
#define SDMMC2_DCTRLR           0x4802242C      /* SDMMC data control register */
#define SDMMC2_DCNTR            0x48022430      /* SDMMC data counter register */
#define SDMMC2_STAR             0x48022434      /* SDMMC status register */
#define SDMMC2_ICR              0x48022438      /* SDMMC interrupt clear register */
#define SDMMC2_MASKR            0x4802243C      /* SDMMC mask register */
#define SDMMC2_ACKTIMER         0x48022440      /* SDMMC acknowledgment timer register */
#define SDMMC2_IDMACTRLR        0x48022450      /* SDMMC DMA control register */
#define SDMMC2_IDMABSIZER       0x48022454      /* SDMMC IDMA buffer size register */
#define SDMMC2_IDMABASE0R       0x48022458      /* SDMMC IDMA buffer 0 base address register */
#define SDMMC2_IDMABASE1R       0x4802245C      /* SDMMC IDMA buffer 1 base address register */
#define SDMMC2_FIFOR0           0x48022480      /* SDMMC data FIFO registers */
#define SDMMC2_FIFOR1           0x48022484
#define SDMMC2_FIFOR2           0x48022488
#define SDMMC2_FIFOR3           0x4802248C
#define SDMMC2_FIFOR4           0x48022490
#define SDMMC2_FIFOR5           0x48022494
#define SDMMC2_FIFOR6           0x48022498
#define SDMMC2_FIFOR7           0x4802249C
#define SDMMC2_FIFOR8           0x480224A0
#define SDMMC2_FIFOR9           0x480224A4
#define SDMMC2_FIFOR10          0x480224A8
#define SDMMC2_FIFOR11          0x480224AC
#define SDMMC2_FIFOR12          0x480224B0
#define SDMMC2_FIFOR13          0x480224B4
#define SDMMC2_FIFOR14          0x480224B8
#define SDMMC2_FIFOR15          0x480224BC

/**
 * Controller area network with flexible data rate (FDCAN) registers
 */

#define FDCAN1_CREL             0x4000A000
#define FDCAN1_ENDN             0x4000A004
#define FDCAN1_DBTP             0x4000A00C
#define FDCAN1_TEST             0x4000A010
#define FDCAN1_RWD              0x4000A014
#define FDCAN1_CCCR             0x4000A018
#define FDCAN1_NBTP             0x4000A01C
#define FDCAN1_TSCC             0x4000A020
#define FDCAN1_TSCV             0x4000A024
#define FDCAN1_TOCC             0x4000A028
#define FDCAN1_TOCV             0x4000A02C
#define FDCAN1_ECR              0x4000A040
#define FDCAN1_PSR              0x4000A044
#define FDCAN1_TDCR             0x4000A048
#define FDCAN1_IR               0x4000A050
#define FDCAN1_IE               0x4000A054
#define FDCAN1_ILS              0x4000A058
#define FDCAN1_ILE              0x4000A05C
#define FDCAN1_GFC              0x4000A080
#define FDCAN1_SIDFC            0x4000A084
#define FDCAN1_XIDFC            0x4000A088
#define FDCAN1_XIDAM            0x4000A090
#define FDCAN1_HPMS             0x4000A094
#define FDCAN1_NDAT1            0x4000A098
#define FDCAN1_NDAT2            0x4000A09C
#define FDCAN1_RXF0C            0x4000A0A0
#define FDCAN1_RXF0S            0x4000A0A4
#define FDCAN1_RXF0A            0x4000A0A8
#define FDCAN1_RXBC             0x4000A0AC
#define FDCAN1_RXF1C            0x4000A0B0
#define FDCAN1_RXF1S            0x4000A0B4
#define FDCAN1_RXF1A            0x4000A0B8
#define FDCAN1_RXESC            0x4000A0BC
#define FDCAN1_TXBC             0x4000A0C0
#define FDCAN1_TXFQS            0x4000A0C4
#define FDCAN1_TXESC            0x4000A0C8
#define FDCAN1_TXBRP            0x4000A0CC
#define FDCAN1_TXBAR            0x4000A0D0
#define FDCAN1_TXBCR            0x4000A0D4
#define FDCAN1_TXBTO            0x4000A0D8
#define FDCAN1_TXBCF            0x4000A0DC
#define FDCAN1_TXBTIE           0x4000A0E0
#define FDCAN1_TXBCIE           0x4000A0E4
#define FDCAN1_TXEFC            0x4000A0F0
#define FDCAN1_TXEFS            0x4000A0F4
#define FDCAN1_TXEFA            0x4000A0F8
#define FDCAN1_TTTMC            0x4000A100
#define FDCAN1_TTRMC            0x4000A104
#define FDCAN1_TTOCF            0x4000A108
#define FDCAN1_TTMLM            0x4000A10C
#define FDCAN1_TURCF            0x4000A110
#define FDCAN1_TTOCN            0x4000A114
#define FDCAN1_TTGTP            0x4000A118
#define FDCAN1_TTTMK            0x4000A11C
#define FDCAN1_TTIR             0x4000A120
#define FDCAN1_TTIE             0x4000A124
#define FDCAN1_TTIL             0x4000A128
#define FDCAN1_TTOST            0x4000A12C
#define FDCAN1_TURNA            0x4000A130
#define FDCAN1_TTLGT            0x4000A134
#define FDCAN1_TTCTC            0x4000A138
#define FDCAN1_TTCPT            0x4000A13C
#define FDCAN1_TTCSM            0x4000A140
#define FDCAN1_TTTS             0x4000A300

#define FDCAN2_CREL             0x4000A400
#define FDCAN2_ENDN             0x4000A404
#define FDCAN2_DBTP             0x4000A40C
#define FDCAN2_TEST             0x4000A410
#define FDCAN2_RWD              0x4000A414
#define FDCAN2_CCCR             0x4000A418
#define FDCAN2_NBTP             0x4000A41C
#define FDCAN2_TSCC             0x4000A420
#define FDCAN2_TSCV             0x4000A424
#define FDCAN2_TOCC             0x4000A428
#define FDCAN2_TOCV             0x4000A42C
#define FDCAN2_ECR              0x4000A440
#define FDCAN2_PSR              0x4000A444
#define FDCAN2_TDCR             0x4000A448
#define FDCAN2_IR               0x4000A450
#define FDCAN2_IE               0x4000A454
#define FDCAN2_ILS              0x4000A458
#define FDCAN2_ILE              0x4000A45C
#define FDCAN2_GFC              0x4000A480
#define FDCAN2_SIDFC            0x4000A484
#define FDCAN2_XIDFC            0x4000A488
#define FDCAN2_XIDAM            0x4000A490
#define FDCAN2_HPMS             0x4000A494
#define FDCAN2_NDAT1            0x4000A498
#define FDCAN2_NDAT2            0x4000A49C
#define FDCAN2_RXF0C            0x4000A4A0
#define FDCAN2_RXF0S            0x4000A4A4
#define FDCAN2_RXF0A            0x4000A4A8
#define FDCAN2_RXBC             0x4000A4AC
#define FDCAN2_RXF1C            0x4000A4B0
#define FDCAN2_RXF1S            0x4000A4B4
#define FDCAN2_RXF1A            0x4000A4B8
#define FDCAN2_RXESC            0x4000A4BC
#define FDCAN2_TXBC             0x4000A4C0
#define FDCAN2_TXFQS            0x4000A4C4
#define FDCAN2_TXESC            0x4000A4C8
#define FDCAN2_TXBRP            0x4000A4CC
#define FDCAN2_TXBAR            0x4000A4D0
#define FDCAN2_TXBCR            0x4000A4D4
#define FDCAN2_TXBTO            0x4000A4D8
#define FDCAN2_TXBCF            0x4000A4DC
#define FDCAN2_TXBTIE           0x4000A4E0
#define FDCAN2_TXBCIE           0x4000A4E4
#define FDCAN2_TXEFC            0x4000A4F0
#define FDCAN2_TXEFS            0x4000A4F4
#define FDCAN2_TXEFA            0x4000A4F8
#define FDCAN2_TTTMC            0x4000A500
#define FDCAN2_TTRMC            0x4000A504
#define FDCAN2_TTOCF            0x4000A508
#define FDCAN2_TTMLM            0x4000A50C
#define FDCAN2_TURCF            0x4000A510
#define FDCAN2_TTOCN            0x4000A518
#define FDCAN2_TTGTP            0x4000A518
#define FDCAN2_TTTMK            0x4000A51C
#define FDCAN2_TTIR             0x4000A520
#define FDCAN2_TTIE             0x4000A524
#define FDCAN2_TTIL             0x4000A528
#define FDCAN2_TTOST            0x4000A52C
#define FDCAN2_TURNA            0x4000A530
#define FDCAN2_TTLGT            0x4000A534
#define FDCAN2_TTCTC            0x4000A538
#define FDCAN2_TTCPT            0x4000A53C
#define FDCAN2_TTCSM            0x4000A540
#define FDCAN2_TTTS             0x4000A700

#define FDCAN_CCU_CREL          0x4000A800
#define FDCAN_CCU_CCFG          0x4000A804
#define FDCAN_CCU_CSTAT         0x4000A808
#define FDCAN_CCU_CWD           0x4000A80C
#define FDCAN_CCU_IR            0x4000A810
#define FDCAN_CCU_IE            0x4000A814

/**
 * USB on-the-go high-speed (OTG_HS) registers
 */

/* USB1 OTG_HS */
#define OTG_HS1_GOTGCTL         0x40040000
#define OTG_HS1_GOTGINT         0x40040004
#define OTG_HS1_GAHBCFG         0x40040008
#define OTG_HS1_GUSBCFG         0x4004000C
#define OTG_HS1_GRSTCTL         0x40040010
#define OTG_HS1_GINTSTS         0x40040014
#define OTG_HS1_GINTMSK         0x40040018
#define OTG_HS1_GRXSTSR         0x4004001C
#define OTG_HS1_GRXSTSP         0x40040020
#define OTG_HS1_GRXFSIZ         0x40040024
#define OTG_HS1_HNPTXFSIZ       0x40040028
#define OTG_HS1_DIEPTXF0        0x40040028
#define OTG_HS1_HNPTXSTS        0x4004002C
#define OTG_HS1_GCCFG           0x40040038
#define OTG_HS1_CID             0x4004003C
#define OTG_HS1_GLPMCFG         0x40040054
#define OTG_HS1_HPTXFSIZ        0x40040100
#define OTG_HS1_DIEPTXF1        0x40040104
#define OTG_HS1_DIEPTXF2        0x40040108
#define OTG_HS1_DIEPTXF3        0x4004010C
#define OTG_HS1_DIEPTXF4        0x40040110
#define OTG_HS1_DIEPTXF5        0x40040114
#define OTG_HS1_DIEPTXF6        0x40040118
#define OTG_HS1_DIEPTXF7        0x4004011C
#define OTG_HS1_DIEPTXF8        0x40040120
#define OTG_HS1_HCFG            0x40040400
#define OTG_HS1_HFIR            0x40040404
#define OTG_HS1_HFNUM           0x40040408
#define OTG_HS1_HPTXSTS         0x40040410
#define OTG_HS1_HAINT           0x40040414
#define OTG_HS1_HAINTMSK        0x40040418
#define OTG_HS1_HFLBADDR        0x4004041C
#define OTG_HS1_HPRT            0x40040440
#define OTG_HS1_HCCHAR0         0x40040500
#define OTG_HS1_HCSPLT0         0x40040504
#define OTG_HS1_HCINT0          0x40040508
#define OTG_HS1_HCINTMSK0       0x4004050C
#define OTG_HS1_HCTSIZ0         0x40040510
#define OTG_HS1_HCTSIZSG0       0x40040510
#define OTG_HS1_HCDMA0          0x40040514
#define OTG_HS1_HCDMASG0        0x40040514
#define OTG_HS1_HCDMAB0         0x4004051C
#define OTG_HS1_HCCHAR1         0x40040520
#define OTG_HS1_HCSPLT1         0x40040524
#define OTG_HS1_HCINT1          0x40040528
#define OTG_HS1_HCINTMSK1       0x4004052C
#define OTG_HS1_HCTSIZ1         0x40040530
#define OTG_HS1_HCTSIZSG1       0x40040530
#define OTG_HS1_HCDMA1          0x40040534
#define OTG_HS1_HCDMASG1        0x40040534
#define OTG_HS1_HCDMAB1         0x4004053C
#define OTG_HS1_HCCHAR2         0x40040540
#define OTG_HS1_HCSPLT2         0x40040544
#define OTG_HS1_HCINT2          0x40040548
#define OTG_HS1_HCINTMSK2       0x4004054C
#define OTG_HS1_HCTSIZ2         0x40040550
#define OTG_HS1_HCTSIZSG2       0x40040550
#define OTG_HS1_HCDMA2          0x40040554
#define OTG_HS1_HCDMASG2        0x40040554
#define OTG_HS1_HCDMAB2         0x4004055C
#define OTG_HS1_HCCHAR3         0x40040560
#define OTG_HS1_HCSPLT3         0x40040564
#define OTG_HS1_HCINT3          0x40040568
#define OTG_HS1_HCINTMSK3       0x4004056C
#define OTG_HS1_HCTSIZ3         0x40040570
#define OTG_HS1_HCTSIZSG3       0x40040570
#define OTG_HS1_HCDMA3          0x40040574
#define OTG_HS1_HCDMASG3        0x40040574
#define OTG_HS1_HCDMAB3         0x4004057C
#define OTG_HS1_HCCHAR4         0x40040580
#define OTG_HS1_HCSPLT4         0x40040584
#define OTG_HS1_HCINT4          0x40040588
#define OTG_HS1_HCINTMSK4       0x4004058C
#define OTG_HS1_HCTSIZ4         0x40040590
#define OTG_HS1_HCTSIZSG4       0x40040590
#define OTG_HS1_HCDMA4          0x40040594
#define OTG_HS1_HCDMASG4        0x40040594
#define OTG_HS1_HCDMAB4         0x4004059C
#define OTG_HS1_HCCHAR5         0x400405A0
#define OTG_HS1_HCSPLT5         0x400405A4
#define OTG_HS1_HCINT5          0x400405A8
#define OTG_HS1_HCINTMSK5       0x400405AC
#define OTG_HS1_HCTSIZ5         0x400405B0
#define OTG_HS1_HCTSIZSG5       0x400405B0
#define OTG_HS1_HCDMA5          0x400405B4
#define OTG_HS1_HCDMASG5        0x400405B4
#define OTG_HS1_HCDMAB5         0x400405BC
#define OTG_HS1_HCCHAR6         0x400405C0
#define OTG_HS1_HCSPLT6         0x400405C4
#define OTG_HS1_HCINT6          0x400405C8
#define OTG_HS1_HCINTMSK6       0x400405CC
#define OTG_HS1_HCTSIZ6         0x400405D0
#define OTG_HS1_HCTSIZSG6       0x400405D0
#define OTG_HS1_HCDMA6          0x400405D4
#define OTG_HS1_HCDMASG6        0x400405D4
#define OTG_HS1_HCDMAB6         0x400405DC
#define OTG_HS1_HCCHAR7         0x400405E0
#define OTG_HS1_HCSPLT7         0x400405E4
#define OTG_HS1_HCINT7          0x400405E8
#define OTG_HS1_HCINTMSK7       0x400405EC
#define OTG_HS1_HCTSIZ7         0x400405F0
#define OTG_HS1_HCTSIZSG7       0x400405F0
#define OTG_HS1_HCDMA7          0x400405F4
#define OTG_HS1_HCDMASG7        0x400405F4
#define OTG_HS1_HCDMAB7         0x400405FC
#define OTG_HS1_HCCHAR8         0x40040600
#define OTG_HS1_HCSPLT8         0x40040604
#define OTG_HS1_HCINT8          0x40040608
#define OTG_HS1_HCINTMSK8       0x4004060C
#define OTG_HS1_HCTSIZ8         0x40040610
#define OTG_HS1_HCTSIZSG8       0x40040610
#define OTG_HS1_HCDMA8          0x40040614
#define OTG_HS1_HCDMASG8        0x40040614
#define OTG_HS1_HCDMAB8         0x4004061C
#define OTG_HS1_HCCHAR9         0x40040620
#define OTG_HS1_HCSPLT9         0x40040624
#define OTG_HS1_HCINT9          0x40040628
#define OTG_HS1_HCINTMSK9       0x4004062C
#define OTG_HS1_HCTSIZ9         0x40040630
#define OTG_HS1_HCTSIZSG9       0x40040630
#define OTG_HS1_HCDMA9          0x40040634
#define OTG_HS1_HCDMASG9        0x40040634
#define OTG_HS1_HCDMAB9         0x4004063C
#define OTG_HS1_HCCHAR10        0x40040640
#define OTG_HS1_HCSPLT10        0x40040644
#define OTG_HS1_HCINT10         0x40040648
#define OTG_HS1_HCINTMSK10      0x4004064C
#define OTG_HS1_HCTSIZ10        0x40040650
#define OTG_HS1_HCTSIZSG10      0x40040650
#define OTG_HS1_HCDMA10         0x40040654
#define OTG_HS1_HCDMASG10       0x40040654
#define OTG_HS1_HCDMAB10        0x4004065C
#define OTG_HS1_HCCHAR11        0x40040660
#define OTG_HS1_HCSPLT11        0x40040664
#define OTG_HS1_HCINT11         0x40040668
#define OTG_HS1_HCINTMSK11      0x4004066C
#define OTG_HS1_HCTSIZ11        0x40040670
#define OTG_HS1_HCTSIZSG11      0x40040670
#define OTG_HS1_HCDMA11         0x40040674
#define OTG_HS1_HCDMASG11       0x40040674
#define OTG_HS1_HCDMAB11        0x4004067C
#define OTG_HS1_HCCHAR12        0x40040680
#define OTG_HS1_HCSPLT12        0x40040684
#define OTG_HS1_HCINT12         0x40040688
#define OTG_HS1_HCINTMSK12      0x4004068C
#define OTG_HS1_HCTSIZ12        0x40040690
#define OTG_HS1_HCTSIZSG12      0x40040690
#define OTG_HS1_HCDMA12         0x40040694
#define OTG_HS1_HCDMASG12       0x40040694
#define OTG_HS1_HCDMAB12        0x4004069C
#define OTG_HS1_HCCHAR13        0x400406A0
#define OTG_HS1_HCSPLT13        0x400406A4
#define OTG_HS1_HCINT13         0x400406A8
#define OTG_HS1_HCINTMSK13      0x400406AC
#define OTG_HS1_HCTSIZ13        0x400406B0
#define OTG_HS1_HCTSIZSG13      0x400406B0
#define OTG_HS1_HCDMA13         0x400406B4
#define OTG_HS1_HCDMASG13       0x400406B4
#define OTG_HS1_HCDMAB13        0x400406BC
#define OTG_HS1_HCCHAR14        0x400406C0
#define OTG_HS1_HCSPLT14        0x400406C4
#define OTG_HS1_HCINT14         0x400406C8
#define OTG_HS1_HCINTMSK14      0x400406CC
#define OTG_HS1_HCTSIZ14        0x400406D0
#define OTG_HS1_HCTSIZSG14      0x400406D0
#define OTG_HS1_HCDMA14         0x400406D4
#define OTG_HS1_HCDMASG14       0x400406D4
#define OTG_HS1_HCDMAB14        0x400406DC
#define OTG_HS1_HCCHAR15        0x400406E0
#define OTG_HS1_HCSPLT15        0x400406E4
#define OTG_HS1_HCINT15         0x400406E8
#define OTG_HS1_HCINTMSK15      0x400406EC
#define OTG_HS1_HCTSIZ15        0x400406F0
#define OTG_HS1_HCTSIZSG15      0x400406F0
#define OTG_HS1_HCDMA15         0x400406F4
#define OTG_HS1_HCDMASG15       0x400406F4
#define OTG_HS1_HCDMAB15        0x400406FC
#define OTG_HS1_DCFG            0x40040800
#define OTG_HS1_DCTL            0x40040804
#define OTG_HS1_DSTS            0x40040808
#define OTG_HS1_DIEPMSK         0x40040810
#define OTG_HS1_DOEPMSK         0x40040814
#define OTG_HS1_DAINT           0x40040818
#define OTG_HS1_DAINTMSK        0x4004081C
#define OTG_HS1_DVBUSDIS        0x40040828
#define OTG_HS1_USPULSE         0x4004082C
#define OTG_HS1_DTHRCTL         0x40040830
#define OTG_HS1_DIEPEMPMSK      0x40040834
#define OTG_HS1_DEACHINT        0x40040838
#define OTG_HS1_DEACHINTMSK     0x4004083C
#define OTG_HS1_HS_DIEPEACHMSK1 0x40040844
#define OTG_HS1_HS_DOEPEACHMSK1 0x40040884
#define OTG_HS1_DIEPCTL0        0x40040900
#define OTG_HS1_DIEPINT0        0x40040908
#define OTG_HS1_DIEPTSIZ0       0x40040910
#define OTG_HS1_DIEPDMA         0x40040914
#define OTG_HS1_DTXFSTS0        0x40040918
#define OTG_HS1_DIEPCTL1        0x40040920
#define OTG_HS1_DIEPINT1        0x40040928
#define OTG_HS1_DIEPTSIZ1       0x40040930
#define OTG_HS1_DTXFSTS1        0x40040938
#define OTG_HS1_DIEPCTL2        0x40040940
#define OTG_HS1_DIEPINT2        0x40040948
#define OTG_HS1_DIEPTSIZ2       0x40040950
#define OTG_HS1_DTXFSTS2        0x40040958
#define OTG_HS1_DIEPCTL3        0x40040960
#define OTG_HS1_DIEPINT3        0x40040968
#define OTG_HS1_DIEPTSIZ3       0x40040970
#define OTG_HS1_DTXFSTS3        0x40040978
#define OTG_HS1_DIEPCTL4        0x40040980
#define OTG_HS1_DIEPINT4        0x40040988
#define OTG_HS1_DIEPTSIZ4       0x40040990
#define OTG_HS1_DTXFSTS4        0x40040998
#define OTG_HS1_DIEPCTL5        0x400409A0
#define OTG_HS1_DIEPINT5        0x400409A8
#define OTG_HS1_DIEPTSIZ5       0x400409B0
#define OTG_HS1_DTXFSTS5        0x400409B8
#define OTG_HS1_DIEPCTL6        0x400409C0
#define OTG_HS1_DIEPINT6        0x400409C8
#define OTG_HS1_DIEPTSIZ6       0x400409D0
#define OTG_HS1_DTXFSTS6        0x400409D8
#define OTG_HS1_DIEPCTL7        0x400409E0
#define OTG_HS1_DIEPINT7        0x400409E8
#define OTG_HS1_DIEPTSIZ7       0x400409F0
#define OTG_HS1_DTXFSTS7        0x400409F8
#define OTG_HS1_DOEPCTL0        0x40040B00
#define OTG_HS1_DOEPINT0        0x40040B08
#define OTG_HS1_DOEPTSIZ0       0x40040B10
#define OTG_HS1_DOEPDMA0        0x40040B14
#define OTG_HS1_DOEPCTL1        0x40040B20
#define OTG_HS1_DOEPINT1        0x40040B28
#define OTG_HS1_DOEPTSIZ1       0x40040B30
#define OTG_HS1_DOEPDMA1        0x40040B34
#define OTG_HS1_DOEPCTL2        0x40040B40
#define OTG_HS1_DOEPINT2        0x40040B48
#define OTG_HS1_DOEPTSIZ2       0x40040B50
#define OTG_HS1_DOEPDMA2        0x40040B54
#define OTG_HS1_DOEPCTL3        0x40040B60
#define OTG_HS1_DOEPINT3        0x40040B68
#define OTG_HS1_DOEPTSIZ3       0x40040B70
#define OTG_HS1_DOEPDMA3        0x40040B74
#define OTG_HS1_DOEPCTL4        0x40040B80
#define OTG_HS1_DOEPINT4        0x40040B88
#define OTG_HS1_DOEPTSIZ4       0x40040B90
#define OTG_HS1_DOEPDMA4        0x40040B94
#define OTG_HS1_DOEPCTL5        0x40040BA0
#define OTG_HS1_DOEPINT5        0x40040BA8
#define OTG_HS1_DOEPTSIZ5       0x40040BB0
#define OTG_HS1_DOEPDMA5        0x40040BB4
#define OTG_HS1_DOEPCTL6        0x40040BC0
#define OTG_HS1_DOEPINT6        0x40040BC8
#define OTG_HS1_DOEPTSIZ6       0x40040BD0
#define OTG_HS1_DOEPDMA6        0x40040BD4
#define OTG_HS1_DOEPCTL7        0x40040BE0
#define OTG_HS1_DOEPINT7        0x40040BE8
#define OTG_HS1_DOEPTSIZ7       0x40040BF0
#define OTG_HS1_DOEPDMA7        0x40040BF4
#define OTG_HS1_DOEPCTL8        0x40040C00
#define OTG_HS1_DOEPINT8        0x40040C08
#define OTG_HS1_DOEPTSIZ8       0x40040C10
#define OTG_HS1_DOEPDMA8        0x40040C14
#define OTG_HS1_PCGCCTL         0x40040E00

/* USB2 OTG_FS */
#define OTG_HS2_GOTGCTL         0x40080000
#define OTG_HS2_GOTGINT         0x40080004
#define OTG_HS2_GAHBCFG         0x40080008
#define OTG_HS2_GUSBCFG         0x4008000C
#define OTG_HS2_GRSTCTL         0x40080010
#define OTG_HS2_GINTSTS         0x40080014
#define OTG_HS2_GINTMSK         0x40080018
#define OTG_HS2_GRXSTSR         0x4008001C
#define OTG_HS2_GRXSTSP         0x40080020
#define OTG_HS2_GRXFSIZ         0x40080024
#define OTG_HS2_HNPTXFSIZ       0x40080028
#define OTG_HS2_DIEPTXF0        0x40080028
#define OTG_HS2_HNPTXSTS        0x4008002C
#define OTG_HS2_GCCFG           0x40080038
#define OTG_HS2_CID             0x4008003C
#define OTG_HS2_GLPMCFG         0x40080054
#define OTG_HS2_HPTXFSIZ        0x40080100
#define OTG_HS2_DIEPTXF1        0x40080104
#define OTG_HS2_DIEPTXF2        0x40080108
#define OTG_HS2_DIEPTXF3        0x4008010C
#define OTG_HS2_DIEPTXF4        0x40080110
#define OTG_HS2_DIEPTXF5        0x40080114
#define OTG_HS2_DIEPTXF6        0x40080118
#define OTG_HS2_DIEPTXF7        0x4008011C
#define OTG_HS2_DIEPTXF8        0x40080120
#define OTG_HS2_HCFG            0x40080400
#define OTG_HS2_HFIR            0x40080404
#define OTG_HS2_HFNUM           0x40080408
#define OTG_HS2_HPTXSTS         0x40080410
#define OTG_HS2_HAINT           0x40080414
#define OTG_HS2_HAINTMSK        0x40080418
#define OTG_HS2_HFLBADDR        0x4008041C
#define OTG_HS2_HPRT            0x40080440
#define OTG_HS2_HCCHAR0         0x40080500
#define OTG_HS2_HCSPLT0         0x40080504
#define OTG_HS2_HCINT0          0x40080508
#define OTG_HS2_HCINTMSK0       0x4008050C
#define OTG_HS2_HCTSIZ0         0x40080510
#define OTG_HS2_HCTSIZSG0       0x40080510
#define OTG_HS2_HCDMA0          0x40080514
#define OTG_HS2_HCDMASG0        0x40080514
#define OTG_HS2_HCDMAB0         0x4008051C
#define OTG_HS2_HCCHAR1         0x40080520
#define OTG_HS2_HCSPLT1         0x40080524
#define OTG_HS2_HCINT1          0x40080528
#define OTG_HS2_HCINTMSK1       0x4008052C
#define OTG_HS2_HCTSIZ1         0x40080530
#define OTG_HS2_HCTSIZSG1       0x40080530
#define OTG_HS2_HCDMA1          0x40080534
#define OTG_HS2_HCDMASG1        0x40080534
#define OTG_HS2_HCDMAB1         0x4008053C
#define OTG_HS2_HCCHAR2         0x40080540
#define OTG_HS2_HCSPLT2         0x40080544
#define OTG_HS2_HCINT2          0x40080548
#define OTG_HS2_HCINTMSK2       0x4008054C
#define OTG_HS2_HCTSIZ2         0x40080550
#define OTG_HS2_HCTSIZSG2       0x40080550
#define OTG_HS2_HCDMA2          0x40080554
#define OTG_HS2_HCDMASG2        0x40080554
#define OTG_HS2_HCDMAB2         0x4008055C
#define OTG_HS2_HCCHAR3         0x40080560
#define OTG_HS2_HCSPLT3         0x40080564
#define OTG_HS2_HCINT3          0x40080568
#define OTG_HS2_HCINTMSK3       0x4008056C
#define OTG_HS2_HCTSIZ3         0x40080570
#define OTG_HS2_HCTSIZSG3       0x40080570
#define OTG_HS2_HCDMA3          0x40080574
#define OTG_HS2_HCDMASG3        0x40080574
#define OTG_HS2_HCDMAB3         0x4008057C
#define OTG_HS2_HCCHAR4         0x40080580
#define OTG_HS2_HCSPLT4         0x40080584
#define OTG_HS2_HCINT4          0x40080588
#define OTG_HS2_HCINTMSK4       0x4008058C
#define OTG_HS2_HCTSIZ4         0x40080590
#define OTG_HS2_HCTSIZSG4       0x40080590
#define OTG_HS2_HCDMA4          0x40080594
#define OTG_HS2_HCDMASG4        0x40080594
#define OTG_HS2_HCDMAB4         0x4008059C
#define OTG_HS2_HCCHAR5         0x400805A0
#define OTG_HS2_HCSPLT5         0x400805A4
#define OTG_HS2_HCINT5          0x400805A8
#define OTG_HS2_HCINTMSK5       0x400805AC
#define OTG_HS2_HCTSIZ5         0x400805B0
#define OTG_HS2_HCTSIZSG5       0x400805B0
#define OTG_HS2_HCDMA5          0x400805B4
#define OTG_HS2_HCDMASG5        0x400805B4
#define OTG_HS2_HCDMAB5         0x400805BC
#define OTG_HS2_HCCHAR6         0x400805C0
#define OTG_HS2_HCSPLT6         0x400805C4
#define OTG_HS2_HCINT6          0x400805C8
#define OTG_HS2_HCINTMSK6       0x400805CC
#define OTG_HS2_HCTSIZ6         0x400805D0
#define OTG_HS2_HCTSIZSG6       0x400805D0
#define OTG_HS2_HCDMA6          0x400805D4
#define OTG_HS2_HCDMASG6        0x400805D4
#define OTG_HS2_HCDMAB6         0x400805DC
#define OTG_HS2_HCCHAR7         0x400805E0
#define OTG_HS2_HCSPLT7         0x400805E4
#define OTG_HS2_HCINT7          0x400805E8
#define OTG_HS2_HCINTMSK7       0x400805EC
#define OTG_HS2_HCTSIZ7         0x400805F0
#define OTG_HS2_HCTSIZSG7       0x400805F0
#define OTG_HS2_HCDMA7          0x400805F4
#define OTG_HS2_HCDMASG7        0x400805F4
#define OTG_HS2_HCDMAB7         0x400805FC
#define OTG_HS2_HCCHAR8         0x40080600
#define OTG_HS2_HCSPLT8         0x40080604
#define OTG_HS2_HCINT8          0x40080608
#define OTG_HS2_HCINTMSK8       0x4008060C
#define OTG_HS2_HCTSIZ8         0x40080610
#define OTG_HS2_HCTSIZSG8       0x40080610
#define OTG_HS2_HCDMA8          0x40080614
#define OTG_HS2_HCDMASG8        0x40080614
#define OTG_HS2_HCDMAB8         0x4008061C
#define OTG_HS2_HCCHAR9         0x40080620
#define OTG_HS2_HCSPLT9         0x40080624
#define OTG_HS2_HCINT9          0x40080628
#define OTG_HS2_HCINTMSK9       0x4008062C
#define OTG_HS2_HCTSIZ9         0x40080630
#define OTG_HS2_HCTSIZSG9       0x40080630
#define OTG_HS2_HCDMA9          0x40080634
#define OTG_HS2_HCDMASG9        0x40080634
#define OTG_HS2_HCDMAB9         0x4008063C
#define OTG_HS2_HCCHAR10        0x40080640
#define OTG_HS2_HCSPLT10        0x40080644
#define OTG_HS2_HCINT10         0x40080648
#define OTG_HS2_HCINTMSK10      0x4008064C
#define OTG_HS2_HCTSIZ10        0x40080650
#define OTG_HS2_HCTSIZSG10      0x40080650
#define OTG_HS2_HCDMA10         0x40080654
#define OTG_HS2_HCDMASG10       0x40080654
#define OTG_HS2_HCDMAB10        0x4008065C
#define OTG_HS2_HCCHAR11        0x40080660
#define OTG_HS2_HCSPLT11        0x40080664
#define OTG_HS2_HCINT11         0x40080668
#define OTG_HS2_HCINTMSK11      0x4008066C
#define OTG_HS2_HCTSIZ11        0x40080670
#define OTG_HS2_HCTSIZSG11      0x40080670
#define OTG_HS2_HCDMA11         0x40080674
#define OTG_HS2_HCDMASG11       0x40080674
#define OTG_HS2_HCDMAB11        0x4008067C
#define OTG_HS2_HCCHAR12        0x40080680
#define OTG_HS2_HCSPLT12        0x40080684
#define OTG_HS2_HCINT12         0x40080688
#define OTG_HS2_HCINTMSK12      0x4008068C
#define OTG_HS2_HCTSIZ12        0x40080690
#define OTG_HS2_HCTSIZSG12      0x40080690
#define OTG_HS2_HCDMA12         0x40080694
#define OTG_HS2_HCDMASG12       0x40080694
#define OTG_HS2_HCDMAB12        0x4008069C
#define OTG_HS2_HCCHAR13        0x400806A0
#define OTG_HS2_HCSPLT13        0x400806A4
#define OTG_HS2_HCINT13         0x400806A8
#define OTG_HS2_HCINTMSK13      0x400806AC
#define OTG_HS2_HCTSIZ13        0x400806B0
#define OTG_HS2_HCTSIZSG13      0x400806B0
#define OTG_HS2_HCDMA13         0x400806B4
#define OTG_HS2_HCDMASG13       0x400806B4
#define OTG_HS2_HCDMAB13        0x400806BC
#define OTG_HS2_HCCHAR14        0x400806C0
#define OTG_HS2_HCSPLT14        0x400806C4
#define OTG_HS2_HCINT14         0x400806C8
#define OTG_HS2_HCINTMSK14      0x400806CC
#define OTG_HS2_HCTSIZ14        0x400806D0
#define OTG_HS2_HCTSIZSG14      0x400806D0
#define OTG_HS2_HCDMA14         0x400806D4
#define OTG_HS2_HCDMASG14       0x400806D4
#define OTG_HS2_HCDMAB14        0x400806DC
#define OTG_HS2_HCCHAR15        0x400806E0
#define OTG_HS2_HCSPLT15        0x400806E4
#define OTG_HS2_HCINT15         0x400806E8
#define OTG_HS2_HCINTMSK15      0x400806EC
#define OTG_HS2_HCTSIZ15        0x400806F0
#define OTG_HS2_HCTSIZSG15      0x400806F0
#define OTG_HS2_HCDMA15         0x400806F4
#define OTG_HS2_HCDMASG15       0x400806F4
#define OTG_HS2_HCDMAB15        0x400806FC
#define OTG_HS2_DCFG            0x40080800
#define OTG_HS2_DCTL            0x40080804
#define OTG_HS2_DSTS            0x40080808
#define OTG_HS2_DIEPMSK         0x40080810
#define OTG_HS2_DOEPMSK         0x40080814
#define OTG_HS2_DAINT           0x40080818
#define OTG_HS2_DAINTMSK        0x4008081C
#define OTG_HS2_DVBUSDIS        0x40080828
#define OTG_HS2_USPULSE         0x4008082C
#define OTG_HS2_DTHRCTL         0x40080830
#define OTG_HS2_DIEPEMPMSK      0x40080834
#define OTG_HS2_DEACHINT        0x40080838
#define OTG_HS2_DEACHINTMSK     0x4008083C
#define OTG_HS2_HS_DIEPEACHMSK1 0x40080844
#define OTG_HS2_HS_DOEPEACHMSK1 0x40080884
#define OTG_HS2_DIEPCTL0        0x40080900
#define OTG_HS2_DIEPINT0        0x40080908
#define OTG_HS2_DIEPTSIZ0       0x40080910
#define OTG_HS2_DIEPDMA         0x40080914
#define OTG_HS2_DTXFSTS0        0x40080918
#define OTG_HS2_DIEPCTL1        0x40080920
#define OTG_HS2_DIEPINT1        0x40080928
#define OTG_HS2_DIEPTSIZ1       0x40080930
#define OTG_HS2_DTXFSTS1        0x40080938
#define OTG_HS2_DIEPCTL2        0x40080940
#define OTG_HS2_DIEPINT2        0x40080948
#define OTG_HS2_DIEPTSIZ2       0x40080950
#define OTG_HS2_DTXFSTS2        0x40080958
#define OTG_HS2_DIEPCTL3        0x40080960
#define OTG_HS2_DIEPINT3        0x40080968
#define OTG_HS2_DIEPTSIZ3       0x40080970
#define OTG_HS2_DTXFSTS3        0x40080978
#define OTG_HS2_DIEPCTL4        0x40080980
#define OTG_HS2_DIEPINT4        0x40080988
#define OTG_HS2_DIEPTSIZ4       0x40080990
#define OTG_HS2_DTXFSTS4        0x40080998
#define OTG_HS2_DIEPCTL5        0x400809A0
#define OTG_HS2_DIEPINT5        0x400809A8
#define OTG_HS2_DIEPTSIZ5       0x400809B0
#define OTG_HS2_DTXFSTS5        0x400809B8
#define OTG_HS2_DIEPCTL6        0x400809C0
#define OTG_HS2_DIEPINT6        0x400809C8
#define OTG_HS2_DIEPTSIZ6       0x400809D0
#define OTG_HS2_DTXFSTS6        0x400809D8
#define OTG_HS2_DIEPCTL7        0x400809E0
#define OTG_HS2_DIEPINT7        0x400809E8
#define OTG_HS2_DIEPTSIZ7       0x400809F0
#define OTG_HS2_DTXFSTS7        0x400809F8
#define OTG_HS2_DOEPCTL0        0x40080B00
#define OTG_HS2_DOEPINT0        0x40080B08
#define OTG_HS2_DOEPTSIZ0       0x40080B10
#define OTG_HS2_DOEPDMA0        0x40080B14
#define OTG_HS2_DOEPCTL1        0x40080B20
#define OTG_HS2_DOEPINT1        0x40080B28
#define OTG_HS2_DOEPTSIZ1       0x40080B30
#define OTG_HS2_DOEPDMA1        0x40080B34
#define OTG_HS2_DOEPCTL2        0x40080B40
#define OTG_HS2_DOEPINT2        0x40080B48
#define OTG_HS2_DOEPTSIZ2       0x40080B50
#define OTG_HS2_DOEPDMA2        0x40080B54
#define OTG_HS2_DOEPCTL3        0x40080B60
#define OTG_HS2_DOEPINT3        0x40080B68
#define OTG_HS2_DOEPTSIZ3       0x40080B70
#define OTG_HS2_DOEPDMA3        0x40080B74
#define OTG_HS2_DOEPCTL4        0x40080B80
#define OTG_HS2_DOEPINT4        0x40080B88
#define OTG_HS2_DOEPTSIZ4       0x40080B90
#define OTG_HS2_DOEPDMA4        0x40080B94
#define OTG_HS2_DOEPCTL5        0x40080BA0
#define OTG_HS2_DOEPINT5        0x40080BA8
#define OTG_HS2_DOEPTSIZ5       0x40080BB0
#define OTG_HS2_DOEPDMA5        0x40080BB4
#define OTG_HS2_DOEPCTL6        0x40080BC0
#define OTG_HS2_DOEPINT6        0x40080BC8
#define OTG_HS2_DOEPTSIZ6       0x40080BD0
#define OTG_HS2_DOEPDMA6        0x40080BD4
#define OTG_HS2_DOEPCTL7        0x40080BE0
#define OTG_HS2_DOEPINT7        0x40080BE8
#define OTG_HS2_DOEPTSIZ7       0x40080BF0
#define OTG_HS2_DOEPDMA7        0x40080BF4
#define OTG_HS2_DOEPCTL8        0x40080C00
#define OTG_HS2_DOEPINT8        0x40080C08
#define OTG_HS2_DOEPTSIZ8       0x40080C10
#define OTG_HS2_DOEPDMA8        0x40080C14
#define OTG_HS2_PCGCCTL         0x40080E00

/**
 * Ethernet (ETH): media access control (MAC) with DMA controller registers
 */

/* Ethernet MAC and MMC registers */
#define ETH_MACCR               0x40028000
#define ETH_MACECR              0x40028004
#define ETH_MACPFR              0x40028008
#define ETH_MACWTR              0x4002800C
#define ETH_MACHT0R             0x40028010
#define ETH_MACHT1R             0x40028014
#define ETH_MACVTR              0x40028050
#define ETH_MACVHTR             0x40028058
#define ETH_MACVIR              0x40028060
#define ETH_MACIVIR             0x40028064
#define ETH_MACQTXFCR           0x40028070
#define ETH_MACRXFCR            0x40028090
#define ETH_MACISR              0x400280B0
#define ETH_MACIER              0x400280B4
#define ETH_MACRXTXSR           0x400280B8
#define ETH_MACPCSR             0x400280C0
#define ETH_MACRWKPFR           0x400280C4
#define ETH_MACLCSR             0x400280D0
#define ETH_MACLTCR             0x400280D4
#define ETH_MACLETR             0x400280D8
#define ETH_MAC1USTCR           0x400280DC
#define ETH_MACVR               0x40028110
#define ETH_MACDR               0x40028114
#define ETH_MACHWF0R            0x4002811C
#define ETH_MACHWF1R            0x40028120
#define ETH_MACHWF2R            0x40028124
#define ETH_MACHWF3R            0x40028128
#define ETH_MACMDIOAR           0x40028200
#define ETH_MACMDIODR           0x40028204
#define ETH_MACARPAR            0x40028210
#define ETH_MACCSRSWCR          0x40028230
#define ETH_MACA0HR             0x40028300
#define ETH_MACA0LR             0x40028304
#define ETH_MACA1HR             0x40028308
#define ETH_MACA1LR             0x4002830C
#define ETH_MACA2HR             0x40028310
#define ETH_MACA2LR             0x40028314
#define ETH_MACA3HR             0x40028318
#define ETH_MACA3LR             0x4002831C
#define ETH_MMCCTL              0x40028700
#define ETH_MMCRXINT            0x40028704
#define ETH_MMCTXINT            0x40028708
#define ETH_MMCRXINTM           0x4002870C
#define ETH_MMCTXINTM           0x40028710
#define ETH_TXSCGP              0x4002874C
#define ETH_TXMCGP              0x40028750
#define ETH_TXPCNTG             0x40028768
#define ETH_RXCRCEP             0x40028794
#define ETH_RXAEP               0x40028798
#define ETH_RXUPG               0x400287C4
#define ETH_TXLPIUC             0x400287EC
#define ETH_TXLPITC             0x400287F0
#define ETH_RXLPIUC             0x400287F4
#define ETH_RXLPITC             0x400287F8
#define ETH_MACL3L4C0R          0x40028900
#define ETH_MACL4A0R            0x40028904
#define ETH_MACL3A00R           0x40028910
#define ETH_MACL3A10R           0x40028914
#define ETH_MACL3A20R           0x40028918
#define ETH_MACL3A30R           0x4002891C
#define ETH_MACL3L4C1R          0x40028930
#define ETH_MACL4A1R            0x40028934
#define ETH_MACL3A01R           0x40028940
#define ETH_MACL3A11R           0x40028944
#define ETH_MACL3A21R           0x40028948
#define ETH_MACL3A31R           0x4002894C
#define ETH_MACTSCR             0x40028B00
#define ETH_MACSSIR             0x40028B04
#define ETH_MACSTSR             0x40028B08
#define ETH_MACSTNR             0x40028B0C
#define ETH_MACSTSUR            0x40028B10
#define ETH_MACSTNUR            0x40028B14
#define ETH_MACTSAR             0x40028B18
#define ETH_MACTSSR             0x40028B20
#define ETH_MACTXTSSNR          0x40028B30
#define ETH_MACTXTSSSR          0x40028B34
#define ETH_MACACR              0x40028B40
#define ETH_MACATSNR            0x40028B48
#define ETH_MACATSSR            0x40028B4C
#define ETH_MACTSIACR           0x40028B50
#define ETH_MACTSEACR           0x40028B54
#define ETH_MACTSICNR           0x40028B58
#define ETH_MACTSECNR           0x40028B5C
#define ETH_MACPPSCR            0x40028B70
#define ETH_MACPPSTTSR          0x40028B80
#define ETH_MACPPSTTNR          0x40028B84
#define ETH_MACPPSIR            0x40028B88
#define ETH_MACPPSWR            0x40028B8C
#define ETH_MACPOCR             0x40028BC0
#define ETH_MACSPI0R            0x40028BC4
#define ETH_MACSPI1R            0x40028BC8
#define ETH_MACSPI2R            0x40028BCC
#define ETH_MACLMIR             0x40028BD0

/* Ethernet MTL registers */
#define ETH_MTLOMR              0x40028C00
#define ETH_MTLISR              0x40028C20
#define ETH_MTLTXQOMR           0x40028D00
#define ETH_MTLTXQUR            0x40028D04
#define ETH_MTLTXQDR            0x40028D08
#define ETH_MTLQICSR            0x40028D2C
#define ETH_MTLRXQOMR           0x40028D30
#define ETH_MTLRXQMPOCR         0x40028D34
#define ETH_MTLRXQDR            0x40028D38

/* Ethernet DMA common registers */
#define ETH_DMAMR               0x40029000
#define ETH_DMASBMR             0x40029004
#define ETH_DMAISR              0x40029008
#define ETH_DMADSR              0x4002900C

/* Ethernet DMA channel registers */
#define ETH_DMACCR              0x40029100
#define ETH_DMACTXCR            0x40029104
#define ETH_DMACRXCR            0x40029108
#define ETH_DMACTXDLAR          0x40029114
#define ETH_DMACRXDLAR          0x4002911C
#define ETH_DMACTXDTPR          0x40029120
#define ETH_DMACRXDTPR          0x40029128
#define ETH_DMACTXRLR           0x4002912C
#define ETH_DMACRXRLR           0x40029130
#define ETH_DMACIER             0x40029134
#define ETH_DMACRXIWTR          0x40029138
#define ETH_DMACCATXDR          0x40029144
#define ETH_DMACCARXDR          0x4002914C
#define ETH_DMACCATXBR          0x40029154
#define ETH_DMACCARXBR          0x4002915C
#define ETH_DMACSR              0x40029160
#define ETH_DMACMFCR            0x4002916C

/**
 * HDMI-CEC controller (CEC) registers
 */

#define CEC_CR                  0x40006C00      /* CEC control register */
#define CEC_CFGR                0x40006C04      /* CEC configuration register */
#define CEC_TXDR                0x40006C08      /* CEC Tx data register */
#define CEC_RXDR                0x40006C0C      /* CEC Rx data register */
#define CEC_ISR                 0x40006C10      /* CEC interrupt and status register */
#define CEC_IER                 0x40006C14      /* CEC interrupt enable register */

#endif

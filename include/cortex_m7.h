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
 * Cortex-M7 registers
 */

#ifndef _CORTEX_M7_H
#define _CORTEX_M7_H

/* System control registers */
#define ACTLR               0xE000E008      /* Auxiliary Control Register */
#define SYST_CSR            0xE000E010      /* SysTick Control and Status Register */
#define SYST_RVR            0xE000E014      /* SysTick Reload Value Register */
#define SYST_CVR            0xE000E018      /* SysTick Current Value Register */
#define SYST_CALIB          0xE000E01C      /* SysTick Calibration Value Register */
#define CPUID               0xE000ED00      /* CPUID Base Register */
#define ICSR                0xE000ED04      /* Interrupt Control and State Register */
#define VTOR                0xE000ED08      /* Vector Table Offset Register */
#define AIRCR               0xE000ED0C      /* Application Interrupt and Reset Control Register */
#define SCR                 0xE000ED10      /* System Control Register */
#define CCR                 0xE000ED14      /* Configuration and Control Register */
#define SHPR1               0xE000ED18      /* System Handler Priority Register 1 */
#define SHPR2               0xE000ED1C      /* System Handler Priority Register 2 */
#define SHPR3               0xE000ED20      /* System Handler Priority Register 3 */
#define SHCSR               0xE000ED24      /* System Handler Control and State Register */
#define CFSR                0xE000ED28      /* Configurable Fault Status Registers */
#define HFSR                0xE000ED2C      /* HardFault Status Register */
#define DFSR                0xE000ED30      /* Debug Fault Status Register */
#define MMFAR               0xE000ED34      /* MemManage Fault Address Register */
#define BFAR                0xE000ED38      /* BusFault Address Register */
#define ID_PFR0             0xE000ED40      /* Processor Feature Register 0 */
#define ID_PFR1             0xE000ED44      /* Processor Feature Register 1 */
#define ID_DFR0             0xE000ED48      /* Debug Feature Register 0 */
#define ID_AFR0             0xE000ED4C      /* Auxiliary Feature Register 0 */
#define ID_MMFR0            0xE000ED50      /* Memory Model Feature Register 0 */
#define ID_MMFR1            0xE000ED54      /* Memory Model Feature Register 1 */
#define ID_MMFR2            0xE000ED58      /* Memory Model Feature Register 2 */
#define ID_MMFR3            0xE000ED5C      /* Memory Model Feature Register 3 */
#define ID_ISAR0            0xE000ED60      /* Instruction Set Attributes Register 0 */
#define ID_ISAR1            0xE000ED64      /* Instruction Set Attributes Register 1 */
#define ID_ISAR2            0xE000ED68      /* Instruction Set Attributes Register 2 */
#define ID_ISAR3            0xE000ED6C      /* Instruction Set Attributes Register 3 */
#define ID_ISAR4            0xE000ED70      /* Instruction Set Attributes Register 4 */
#define CLIDR               0xE000ED78      /* Cache Level ID Register */
#define CTR                 0xE000ED7C      /* Cache Type Register */
#define CCSIDR              0xE000ED80      /* Cache Size ID Register */
#define CSSELR              0xE000ED84      /* Cache Size Selection Register */
#define CPACR               0xE000ED88      /* Coprocessor Access Control Register */
#define STIR                0xE000EF00      /* Software Triggered Interrupt Register */
#define ICIALLU             0xE000EF50      /* Instruction cache invalidate all to Point of Unification (PoU) */
#define ICIMVAU             0xE000EF58      /* Instruction cache invalidate by address to PoU */
#define DCIMVAC             0xE000EF5C      /* Data cache invalidate by address to Point of Coherency (PoC) */
#define DCISW               0xE000EF60      /* Data cache invalidate by set/way */
#define DCCMVAU             0xE000EF64      /* Data cache by address to PoU */
#define DCCMVAC             0xE000EF68      /* Data cache clean by address to PoC */
#define DCCSW               0xE000EF6C      /* Data cache clean by set/way */
#define DCCIMVAC            0xE000EF70      /* Data cache clean and invalidate by address to PoC */
#define DCCISW              0xE000EF74      /* Data cache clean and invalidate by set/way */
#define CM7_ITCMCR          0xE000EF90      /* Instruction Tightly-Coupled Memory Control Register */
#define CM7_DTCMCR          0xE000EF94      /* Data Tightly-Coupled Memory Control Register */
#define CM7_AHBPCR          0xE000EF98      /* AHBP Control Register */
#define CM7_CACR            0xE000EF9C      /* L1 Cache Control Register */
#define CM7_AHBSCR          0xE000EFA0      /* AHB Slave Control Register */
#define CM7_ABFSR           0xE000EFA8      /* Auxiliary Bus Fault Status Register */
#define IEBR0               0xE000EFB0      /* Instruction Error bank Register 0 */
#define IEBR1               0xE000EFB4      /* Instruction Error bank Register 1 */
#define DEBR0               0xE000EFB8      /* Data Error bank Register 0 */
#define DEBR1               0xE000EFBC      /* Data Error bank Register 1 */
#define PID4                0xE000EFD0      /* Peripheral ID register 4 */
#define PID5                0xE000EFD4      /* Peripheral ID register 5 */
#define PID6                0xE000EFD8      /* Peripheral ID register 6 */
#define PID7                0xE000EFDC      /* Peripheral ID register 7 */
#define PID0                0xE000EFE0      /* Peripheral ID register 0 */
#define PID1                0xE000EFE4      /* Peripheral ID register 1 */
#define PID2                0xE000EFE8      /* Peripheral ID register 2 */
#define PID3                0xE000EFEC      /* Peripheral ID register 3 */
#define CID0                0xE000EFF0      /* Component ID register 0 */
#define CID1                0xE000EFF4      /* Component ID register 1 */
#define CID2                0xE000EFF8      /* Component ID register 2 */
#define CID3                0xE000EFFC      /* Component ID register 3 */

/* MPU registers */
#define MPU_TYPE            0xE000ED90      /* MPU Type Register */
#define MPU_CTRL            0xE000ED94      /* MPU Control Register */
#define MPU_RNR             0xE000ED98      /* MPU Region Number Register */
#define MPU_RBAR            0xE000ED9C      /* MPU Region Base Address Register */
#define MPU_RASR            0xE000EDA0      /* MPU Region Attribute and Size Register */
#define MPU_RBAR_A1         0xE000EDA4      /* MPU alias registers */
#define MPU_RASR_A1         0xE000EDA8
#define MPU_RBAR_A2         0xE000EDAC
#define MPU_RASR_A2         0xE000EDB0
#define MPU_RBAR_A3         0xE000EDB4
#define MPU_RASR_A3         0xE000EDB8

/* Nested vectored interrupt controller (NVIC) registers */
#define ICTR                0xE000E004      /* Interrupt Controller Type Register */
#define NVIC_ISER0          0xE000E100      /* Interrupt Set-Enable Registers */
#define NVIC_ISER1          0xE000E104
#define NVIC_ISER2          0xE000E108
#define NVIC_ISER3          0xE000E10C
#define NVIC_ISER4          0xE000E110
#define NVIC_ISER5          0xE000E114
#define NVIC_ISER6          0xE000E118
#define NVIC_ISER7          0xE000E11C
#define NVIC_ICER0          0xE000E180      /* Interrupt Clear-Enable Registers */
#define NVIC_ICER1          0xE000E184
#define NVIC_ICER2          0xE000E188
#define NVIC_ICER3          0xE000E18C
#define NVIC_ICER4          0xE000E190
#define NVIC_ICER5          0xE000E194
#define NVIC_ICER6          0xE000E198
#define NVIC_ICER7          0xE000E19C
#define NVIC_ISPR0          0xE000E200      /* Interrupt Set-Pending Registers */
#define NVIC_ISPR1          0xE000E204
#define NVIC_ISPR2          0xE000E208
#define NVIC_ISPR3          0xE000E20C
#define NVIC_ISPR4          0xE000E210
#define NVIC_ISPR5          0xE000E214
#define NVIC_ISPR6          0xE000E218
#define NVIC_ISPR7          0xE000E21C
#define NVIC_ICPR0          0xE000E280      /* Interrupt Clear-Pending Registers */
#define NVIC_ICPR1          0xE000E284
#define NVIC_ICPR2          0xE000E288
#define NVIC_ICPR3          0xE000E28C
#define NVIC_ICPR4          0xE000E290
#define NVIC_ICPR5          0xE000E294
#define NVIC_ICPR6          0xE000E298
#define NVIC_ICPR7          0xE000E29C
#define NVIC_IABR0          0xE000E300      /* Interrupt Active Bit Register */
#define NVIC_IABR1          0xE000E304
#define NVIC_IABR2          0xE000E308
#define NVIC_IABR3          0xE000E30C
#define NVIC_IABR4          0xE000E310
#define NVIC_IABR5          0xE000E314
#define NVIC_IABR6          0xE000E318
#define NVIC_IABR7          0xE000E31C
#define NVIC_IPR0           0xE000E400      /* Interrupt Priority Register */
#define NVIC_IPR1           0xE000E404
#define NVIC_IPR2           0xE000E408
#define NVIC_IPR3           0xE000E40C
#define NVIC_IPR4           0xE000E410
#define NVIC_IPR5           0xE000E414
#define NVIC_IPR6           0xE000E418
#define NVIC_IPR7           0xE000E41C
#define NVIC_IPR8           0xE000E420
#define NVIC_IPR9           0xE000E424
#define NVIC_IPR10          0xE000E428
#define NVIC_IPR11          0xE000E42C
#define NVIC_IPR12          0xE000E430
#define NVIC_IPR13          0xE000E434
#define NVIC_IPR14          0xE000E438
#define NVIC_IPR15          0xE000E43C
#define NVIC_IPR16          0xE000E440
#define NVIC_IPR17          0xE000E444
#define NVIC_IPR18          0xE000E448
#define NVIC_IPR19          0xE000E44C
#define NVIC_IPR20          0xE000E450
#define NVIC_IPR21          0xE000E454
#define NVIC_IPR22          0xE000E458
#define NVIC_IPR23          0xE000E45C
#define NVIC_IPR24          0xE000E460
#define NVIC_IPR25          0xE000E464
#define NVIC_IPR26          0xE000E468
#define NVIC_IPR27          0xE000E46C
#define NVIC_IPR28          0xE000E470
#define NVIC_IPR29          0xE000E474
#define NVIC_IPR30          0xE000E478
#define NVIC_IPR31          0xE000E47C
#define NVIC_IPR32          0xE000E480
#define NVIC_IPR33          0xE000E484
#define NVIC_IPR34          0xE000E488
#define NVIC_IPR35          0xE000E48C
#define NVIC_IPR36          0xE000E490
#define NVIC_IPR37          0xE000E494
#define NVIC_IPR38          0xE000E498
#define NVIC_IPR39          0xE000E49C
#define NVIC_IPR40          0xE000E4A0
#define NVIC_IPR41          0xE000E4A4
#define NVIC_IPR42          0xE000E4A8
#define NVIC_IPR43          0xE000E4AC
#define NVIC_IPR44          0xE000E4B0
#define NVIC_IPR45          0xE000E4B4
#define NVIC_IPR46          0xE000E4B8
#define NVIC_IPR47          0xE000E4BC
#define NVIC_IPR48          0xE000E4C0
#define NVIC_IPR49          0xE000E4C4
#define NVIC_IPR50          0xE000E4C8
#define NVIC_IPR51          0xE000E4CC
#define NVIC_IPR52          0xE000E4D0
#define NVIC_IPR53          0xE000E4D4
#define NVIC_IPR54          0xE000E4D8
#define NVIC_IPR55          0xE000E4DC
#define NVIC_IPR56          0xE000E4E0
#define NVIC_IPR57          0xE000E4E4
#define NVIC_IPR58          0xE000E4E8
#define NVIC_IPR59          0xE000E4EC

/* FPU registers */
#define FPCCR               0xE000EF34      /* Context Control Register */
#define FPCAR               0xE000EF38      /* Context Address Register */
#define FPDSCR              0xE000EF3C      /* Default Status Control Register */
#define MVFR0               0xE000EF40      /* Media and VFP Feature Register 0 */
#define MVFR1               0xE000EF44      /* Media and VFP Feature Register 1 */
#define MVFR2               0xE000EF48      /* Media and VFP Feature Register 2 */

#endif

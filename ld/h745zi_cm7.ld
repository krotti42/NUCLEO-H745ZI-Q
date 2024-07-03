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

OUTPUT_FORMAT(elf32-littlearm)

ENTRY(_start)

MEMORY {
    SDRAM_FMC   (rw) : ORIGIN = 0xC0000000, LENGTH = 64M
    SRAM_BACKUP (rw) : ORIGIN = 0x38800000, LENGTH = 4K
    SRAM4       (rw) : ORIGIN = 0x38000000, LENGTH = 64K
    SRAM3       (rw) : ORIGIN = 0x30040000, LENGTH = 32K
    SRAM2       (rw) : ORIGIN = 0x30020000 , LENGTH = 128K
    SRAM1       (rw) : ORIGIN = 0x30000000, LENGTH = 128K
    SRAM_AXI    (rwx) : ORIGIN = 0x24000000, LENGTH = 512K
    RAM_DTCM    (rwx) : ORIGIN = 0x20000000, LENGTH = 128K
    SYSTEM      (rwx) : ORIGIN = 0x1FF00000, LENGTH = 128K
    SRAM3_ALIAS (rwx) : ORIGIN = 0x10040000, LENGTH = 32K
    SRAM2_ALIAS (rwx) : ORIGIN = 0x10020000, LENGTH = 128K
    SRAM1_ALIAS (rwx) : ORIGIN = 0x10000000 , LENGTH = 128K
    FLASH2      (rx) : ORIGIN = 0x08100000, LENGTH = 1M
    FLASH1      (rx) : ORIGIN = 0x08000000, LENGTH = 1M
    RAM_ITCM    (rwx) : ORIGIN = 0x00000000, LENGTH = 64K
}

STACK_SIZE = 4K;

SECTIONS {
    .text : {
        _text_s = .;
        KEEP(*(.isr_vector))
        *(.text)
        *(.text*)
        _text_e = .;
    } > FLASH1
    
    .rodata : {
        . = ALIGN(2);
        _rodata_s_load = LOADADDR(.rodata);
        _rodata_s = .;
        *(.rodata)
        *(.rodata*)
        _rodata_e = .;
        . = ALIGN(2);
    } > SRAM_AXI AT > FLASH1
    
    .data :  {
        . = ALIGN(2);
        _data_s_load = LOADADDR(.data);
        _data_s = .;
        *(.data)
        *(.data*)
        _data_e = .;
        . = ALIGN(2);
    } > SRAM_AXI AT > FLASH1
    
    .bss (NOLOAD):  {
        . = ALIGN(2);
        _bss_s = .;
        *(.bss)
        *(.bss*)
        *(COMMON)
        _bss_e = .;
    } > SRAM_AXI
    
    HEAP_SIZE = (ORIGIN(SRAM_AXI) + LENGTH(SRAM_AXI)) - _heap_s - STACK_SIZE;
        
    .heap (NOLOAD): {
        . = ALIGN(2);
        _heap_s = .;
        . = . + HEAP_SIZE;
        _heap_e = .;
    } > SRAM_AXI
    
    .stack (NOLOAD): {
        . = ALIGN(2);
        _stack_s = .;
        . = . + STACK_SIZE;
        _stack_e = .;
    } > SRAM_AXI
    
    /DISCARD/ : {
        *(.note)
        *(.note.*)
    }
}

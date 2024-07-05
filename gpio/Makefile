#
# STMicoelectronics NUCLEO-H745I-Q bare-metal examples (GPIO)
#
# Makefile
# 

# Cross compile
ifeq ($(CROSS_COMPILE),)
CROSS_COMPILE		= arm-none-eabi-
endif

# Target Output
TARGET_CM7		= out_cm7.elf

# Architecture type
TARGET_ARCH		= armv7e-m+nofp

# MCU type
TARGET_CM7_MCU		= cortex-m7

# Generic shell commands
RM			= rm -rf
CP			= cp -Rf

# Toolchain
CC			= $(CROSS_COMPILE)gcc
LD			= $(CROSS_COMPILE)gcc
OBJCOPY			= $(CROSS_COMPILE)objcopy

# Generic assembler flags
ASFLAGS			+= -Wa,-march=$(TARGET_ARCH)

ASFLAGS_TARGET_CM7	= $(ASFLAGS)
ASFLAGS_TARGET_CM7	+= -Wa,-mcpu=$(TARGET_CM7_MCU)

# Generic C compiler flags
CCFLAGS			+= -Wall
CCFLAGS			+= -Wextra
CCFLAGS			+= -ffunction-sections
CCFLAGS			+= -fdata-sections
CCFLAGS			+= -nostdlib
CCFLAGS			+= -nostartfiles
CCFLAGS			+= -nodefaultlibs
CCFLAGS			+= -ffreestanding
CCFLAGS			+= -march=$(TARGET_ARCH)
CCFLAGS			+= -mthumb
CCFLAGS			+= -O2
CCFLAGS			+= -I ../include
CCFLAGS			+= -I ./include
CCFLAGS			+= -T ../ld/h745zi_cm7.ld

CCFLAGS_TARGET_CM7	= $(CCFLAGS)
CCFLAGS_TARGET_CM7	+= -mcpu=$(TARGET_CM7_MCU)

# Generic GNU ld flags
LDFLAGS			+= -Wl,--gc-sections
LDFLAGS			+= -Wl,-n
LDFLAGS			+= -Wl,--build-id=none
LDFLAGS			+= -Wl,-nostdlib

LDFLAGS_TARGET_CM7	= $(CCFLAGS)
LDFLAGS_TARGET_CM7	+= $(LDFLAGS)
LDFLAGS_TARGET_CM7	+= -Wl,-Map=$(TARGET_CM7).map

include ./asm/files.mk
include ./files.mk

AOBJ_TARGET_CM7		+= $(ASRC_TARGET_CM7:.S=.o)
COBJ_TARGET_CM7		+= $(CSRC_TARGET_CM7:.c=.o)

all: target_cm7

# Link object files
target_cm7: $(AOBJ_TARGET_CM7) $(COBJ_TARGET_CM7)
	@echo "   [LD] $(TARGET_CM7)"
	@$(LD) -o $(TARGET_CM7) $(LDFLAGS_TARGET_CM7) $(AOBJ_TARGET_CM7) $(COBJ_TARGET_CM7)

# Compile assembly sources
$(AOBJ_TARGET_CM7): %.o: %.S
	@echo "   [AS] $@"
	@$(CC) -c $(CCFLAGS_TARGET_CM7) $(ASFLAGS_TARGET_CM7) -o $@ $<

# Compile C sources
$(COBJ_TARGET_CM7): %.o: %.c
	@echo "   [CC] $@"
	@$(CC) -c $(CCFLAGS_TARGET_CM7) -o $@ $<

.PHONY: clean
clean:
	@echo "[CLEAN]"
	@$(RM) $(AOBJ_TARGET_CM7)
	@$(RM) $(COBJ_TARGET_CM7)
	@$(RM) $(TARGET_CM7)
	@$(RM) $(TARGET_CM7).map

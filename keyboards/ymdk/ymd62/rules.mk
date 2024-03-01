# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Already in info.json
# CONSOLE_ENABLE = yes

# Wildcard to allow APM32 MCU
#DFU_SUFFIX_ARGS = -p FFFF -v FFFF

# Configure for 128K flash
MCU_LDSCRIPT = STM32F103xB

# Wildcard to allow APM32 MCU
#DFU_SUFFIX_ARGS = -p FFFF -v FFFF

# Already in info.json
# WAIT_FOR_USB = yes
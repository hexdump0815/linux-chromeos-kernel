bootblock-$(CONFIG_MICROCODE_UPDATE_PRE_RAM) += microcode_asm.S
romstage-$(CONFIG_MICROCODE_UPDATE_PRE_RAM) += microcode_asm.S

ramstage-$(CONFIG_SUPPORT_CPU_UCODE_IN_CBFS) += microcode.c
romstage-$(CONFIG_SUPPORT_CPU_UCODE_IN_CBFS) += microcode.c
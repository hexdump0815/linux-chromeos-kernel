romstage-y += variants/$(VARIANT_DIR)/gpio.c

ramstage-y += variants/$(VARIANT_DIR)/hda_verb.c
ramstage-$(CONFIG_MAINBOARD_USE_LIBGFXINIT) += gma-mainboard.ads

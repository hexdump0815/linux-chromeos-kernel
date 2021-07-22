/*
 * This file is part of the coreboot project.
 *
 * Copyright 2019 Google LLC
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 */

#include <baseboard/gpio.h>
#include <baseboard/variants.h>
#include <boardid.h>
#include <gpio.h>
#include <soc/gpio.h>

enum {
	SKU_1_2A2C = 1,
	SKU_9_HDMI = 9,
	SKU_17_LTE = 17,
};

static const struct pad_config default_override_table[] = {
	PAD_NC(GPIO_104, UP_20K),

	/* EN_PP3300_TOUCHSCREEN */
	PAD_CFG_GPO_IOSSTATE_IOSTERM(GPIO_146, 0, DEEP, NONE, Tx0RxDCRx0,
				     DISPUPD),

	PAD_NC(GPIO_213, DN_20K),
};

static const struct pad_config hdmi_override_table[] = {
	PAD_NC(GPIO_104, UP_20K),

	/* HV_DDI1_DDC_SDA */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_126, NONE, DEEP, NF1, HIZCRx1,
				    DISPUPD),
	/* HV_DDI1_DDC_SCL */
	PAD_CFG_NF_IOSSTATE_IOSTERM(GPIO_127, NONE, DEEP, NF1, HIZCRx1,
				    DISPUPD),

	/* EN_PP3300_TOUCHSCREEN */
	PAD_CFG_GPO_IOSSTATE_IOSTERM(GPIO_146, 0, DEEP, NONE, Tx0RxDCRx0,
				     DISPUPD),

	PAD_NC(GPIO_213, DN_20K),
};

const struct pad_config *variant_override_gpio_table(size_t *num)
{
	uint32_t sku_id;
	sku_id = get_board_sku();

	switch (sku_id) {
	case SKU_9_HDMI:
		*num = ARRAY_SIZE(hdmi_override_table);
		return hdmi_override_table;
	default:
		*num = ARRAY_SIZE(default_override_table);
		return default_override_table;
	}
}
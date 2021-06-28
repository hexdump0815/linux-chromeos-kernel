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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <boardid.h>
#include <ec/google/chromeec/ec.h>
#include <drivers/intel/gma/opregion.h>
#include <baseboard/variants.h>

enum {
	SKU_1_2A2C = 1,
	SKU_9_HDMI = 9,
	SKU_17_LTE = 17,
};

const char *mainboard_vbt_filename(void)
{
	uint32_t sku_id;

	sku_id = get_board_sku();

	switch (sku_id) {
	case SKU_9_HDMI:
		return "vbt_garg_hdmi.bin";
	default:
		return "vbt.bin";
	}
}

/*
 * This file is part of the coreboot project.
 *
 * Copyright 2017-present Facebook, Inc.
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
#include <types.h>
#include <device/i2c.h>

#ifndef __SOC_CAVIUM_CN81XX_INCLUDE_SOC_TWSI_H
#define __SOC_CAVIUM_CN81XX_INCLUDE_SOC_TWSI_H

int twsi_init(unsigned int bus, enum i2c_speed hz);

#endif

/*
 * Copyright (c) 2017 Rockchip Electronics Co., Ltd
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __CONFIGS_PX5_EVB_H
#define __CONFIGS_PX5_EVB_H
#include <configs/rk3368_common.h>

/*#define CONFIG_CONSOLE_SCROLL_LINES	10
 #define CONFIG_SYS_MMC_ENV_DEV 0 */

#define CONFIG_USB_OHCI_NEW
#define CONFIG_SYS_USB_OHCI_MAX_ROOT_PORTS	1

#define CONFIG_SYS_MMC_ENV_DEV		0
#define CONFIG_ENV_OVERWRITE
#endif

// Copyright 2022 ilukinov (@ilukinov)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define I2C1_SCL_PIN        B9
#define I2C1_SDA_PIN        B8
#define I2C1_CLOCK_SPEED  400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

#define CIRQUE_PINNACLE_ADDR 0x2A
#define POINTING_DEVICE_ROTATION_270
#define POINTING_DEVICE_TASK_THROTTLE_MS 1  // when I removed this, cirque stopped working

/**
 *****************************************************
 @brief test_backlight, backlight tests
 @file test_backlight.c
 @author Alexander Borg
 @version 1.0
 @date 28-November-2019
 @brief Source code for for backlight tests
 *****************************************************
 */

#include "../Inc/test_backlight.h"

/**
@brief test_backlight_set_color, tests the backlight_set_color function
@param void, no parameters
@return void, no return value
 */
void test_backlight_set_color() {
	backlight_set_color("White");
	HAL_Delay(1000);
	backlight_set_color("Green");
	HAL_Delay(1000);
	backlight_set_color("Red");
	HAL_Delay(1000);
}

/*
@brief test_backlight_set_brightness, tests the backlight_set_brightness function
@param void, no parameters
@return void, no return value
 */
void test_backlight_set_brightness(void) {
		backlight_set_brightness();
}

RGB_MATRIX_EFFECT(backlight_only)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool backlight_only(effect_params_t* params) {
	RGB_MATRIX_USE_LIMITS(led_min, led_max);

	// TODO: implement turning on backlight only, others off

	return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS

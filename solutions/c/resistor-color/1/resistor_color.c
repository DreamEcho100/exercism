#include "resistor_color.h"

const resistor_band_t color_codes[] = {BLACK, BROWN, RED,    ORANGE, YELLOW,
                                       GREEN, BLUE,  VIOLET, GREY,   WHITE};

resistor_band_t color_code(resistor_band_t code) { return code; }

const resistor_band_t *colors() { return color_codes; }
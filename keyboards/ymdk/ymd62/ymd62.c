
#include "quantum.h"

// TODO: port backlights to info.json

#if 0
// #ifdef RGB_MATRIX_ENABLE

#    define XX NO_LED
led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13},
        {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27},
        {28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, XX, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, XX, 53},
        {54, 55, 56, XX, XX, XX, 57, XX, XX, 58, 59, 60, XX, 61},

    },
    {
        // LED Index to Physical Position
                                                                                                                                                    // First 4 for encoder.
        {1, 1},   {14, 1},   {28, 1},   {44, 1},   {58, 1},   {75, 1},  {89, 1},   {103, 1},   {117, 1},  {129, 1},   {147, 1},   {167, 1},   {183, 1},   {200, 1},  // row0
        {3, 16},  {16, 16},  {33, 16},  {47, 16},  {60, 16},  {77, 16}, {91, 16},  {106, 16},  {120, 16}, {131, 16},  {149, 16},  {169, 16},  {185, 16},  {205, 26},    // row1
        {5, 32},  {20, 32},  {35, 32},  {49, 32},  {62, 32},  {79, 32}, {93, 32},  {108, 32},  {122, 32}, {133, 32},  {151, 32},  {171, 32},  {199, 32},              // row2
        {8, 49},  {23, 49},  {38, 49},  {51, 49},  {64, 49},  {81, 49}, {95, 49},  {110, 49},  {124, 49}, {135, 49},  {153, 49},  {189, 49},  {212, 49},            // row3
        {2, 63},  {15, 63},  {33, 63},  {92, 63},  {149, 63}, {170, 63},{188, 63}, {200, 63},                                                                                                // row5
        {60, 5},  {90, 5},   {120, 5},  {150, 5},  {180, 5},  {210, 5}, {210, 60}, {180, 60},{150, 60},{120, 60}, {90, 60},{60, 60},
     },

    {

        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,           //
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,              //
        4, 4, 4, 1, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,

}};

#endif

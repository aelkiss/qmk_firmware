#pragma once

#include "quantum.h"

#define LAYOUT( \
    K05, K15, K25, K35, \
    K04, K14, K24, K34, \
    K03, K13, K23, K33, \
    K02, K12, K22, K32, \
    K01, K11, K21, K31, \
    K00, K10, K20, K30  \
    ) \
    { \
        { K05, K04, K03, K02, K01, K00 }, \
        { K15, K14, K13, K12, K11, K10 }, \
        { K25, K24, K23, K22, K21, K20 }, \
        { K35, K34, K33, K32, K31, K30 }  \
    }

#define LAYOUT_numpad LAYOUT

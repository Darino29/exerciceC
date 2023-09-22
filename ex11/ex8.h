#ifndef BIT_MACROS_H
#define BIT_MACROS_H

#include <stdint.h>

#define BIT_IS_SET(reg, bit) ((reg & (1 << bit)) != 0)
#endif
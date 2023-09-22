#ifndef BIT_MACROS_H
#define BIT_MACROS_H

#include <stdint.h>


// Macro pour attendre jusqu'à ce qu'un bit soit allumé
#define LOOP_UNTIL_BIT_IS_SET(reg, bit) \
    do { while (BIT_IS_SET(reg, bit)); } while(0)


#endif
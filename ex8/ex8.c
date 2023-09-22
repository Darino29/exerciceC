#include <stdint.h>
#include "ex8.h"

// Définition de la fonction bit_is_set
uint8_t bit_is_set(uint8_t reg, uint8_t bit) {
    return (reg & (1 << bit)) != 0;
}
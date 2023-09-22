#include <stdint.h>
#include "ex9.h"

// Définition de la fonction loop_until_bit_is_set
uint8_t loop_until_bit_is_set(uint8_t reg, uint8_t bit) {
    while ((reg & (1 << bit)) != 0) {
    }
    return reg;
}
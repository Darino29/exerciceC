#include <stdio.h>
#include <stdint.h>
#include "bit_macros.h"

int main() {
    uint8_t registre = 0b01001011;
    uint8_t bit_a_attendre = 2;

    if (BIT_IS_SET(registre, bit_a_attendre)) {
        printf("Le bit à la position %d est allumé.\n", bit_a_attendre);
    } else {
        printf("Le bit à la position %d est éteint.\n", bit_a_attendre);
    }

    LOOP_UNTIL_BIT_IS_SET(registre, bit_a_attendre);
    printf("Le bit à la position %d est maintenant allumé.\n", bit_a_attendre);

    LOOP_UNTIL_BIT_IS_CLEAR(registre, bit_a_attendre);
    printf("Le bit à la position %d est maintenant éteint.\n", bit_a_attendre);

    return 0;
}
#include <stdio.h>
#include <stdint.h>
#include "ex9.h"

int main() {
    uint8_t registre = 0b01001011;
    uint8_t bit_a_attendre = 2;

    printf("En attente que le bit %d soit allumé...\n", bit_a_attendre);

    registre = loop_until_bit_is_set(registre, bit_a_attendre);

    printf("Le bit est maintenant allumé. Nouvelle valeur du registre : %d\n", registre);

    return 0;
}
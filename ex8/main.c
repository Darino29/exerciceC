#include <stdio.h>
#include <stdint.h>
#include "ex8.h"

int main() {
    uint8_t registre = 0b01001011;

    if (bit_is_set(registre, 1)) {
        printf("Le bit est allumé.\n");
    } else {
        printf("Le bit n'est pas allumé.\n");
    }

    return 0;
}

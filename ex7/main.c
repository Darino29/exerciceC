#include <stdio.h>
#include "ex7.h"

int main() {
    // Appelle la fonction count_me plusieurs fois
    for (int i = 0; i < 5; i++) {
        int count = count_me();
        printf("La fonction count_me a est appele %d fois.\n", count);
    }

    return 0;
}

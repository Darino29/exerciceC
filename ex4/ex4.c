#include "ex4.h"

int count_char_in_str(const char target, const char *str) {
    int count = 0;

    // Parcourir la chaîne de caractères
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    return count;
}
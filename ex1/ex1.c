#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ex1.h"

char* fuzbiz(int n) {
    char* result = (char*)malloc(8); // Alloue de l'espace pour le résultat

    if (n % 7 == 0 && n % 11 == 0) {
        strcpy(result, "fuzbiz");
    } else if (n % 7 == 0) {
        strcpy(result, "fuz");
    } else if (n % 11 == 0) {
        strcpy(result, "biz");
    } else {
        strcpy(result, "Aucun");
    }

    return result;
}
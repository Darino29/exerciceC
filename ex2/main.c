#include <stdio.h>
#include "ex2.h"

int main() {
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    all_evens_to(nombre);

    return 0;
}
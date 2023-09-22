#include <stdio.h>
#include "ex3.h"

int main() {
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    int resultat = is_prime(nombre);

    if (resultat == 0) {
        printf("%d est premier.\n", nombre);
    } else {
        printf("%d n'est pas premier. Le plus petit diviseur est %d.\n", nombre, resultat);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

int main() {
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    char* resultat = fuzbiz(nombre);

    printf("%s\n", resultat);

    // N'oubliez pas de libérer la mémoire allouée pour le résultat
    free(resultat);

    return 0;
}
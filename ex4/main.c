#include <stdio.h>
#include <string.h>
#include "ex4.h"

int main() {
    char phrase[100]; // Déclarer un tableau pour stocker la phrase
    char caractere;

    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = '\0'; // Supprimer le caractère de nouvelle ligne

    printf("Entrez le caractere a rechercher : ");
    scanf(" %c", &caractere); // L'espace avant %c permet d'ignorer les espaces blancs, s'il y en a

    int occurences = count_char_in_str(caractere, phrase);

    printf("Le caractere '%c' apparaît %d fois dans la phrase.\n", caractere, occurences);

    return 0;
}

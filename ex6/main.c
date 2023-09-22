#include <stdio.h>
#include <string.h> 
#include "ex6.h"

int main() {
    // Création d'une personne et initialisation de ses champs
    t_person personne1;
    strcpy(personne1.name, "John Doe");
    personne1.age = 30;

    // Appel de la fonction pour afficher les champs de la personne
    print_person(personne1);

    return 0;
}
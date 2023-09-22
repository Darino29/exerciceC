#include <stdio.h>
#include "ex6.h"

// Définition de la fonction pour afficher les champs d'une personne
void print_person(t_person person) {
    printf("Nom : %s\n", person.name);
    printf("Age : %d\n", person.age);
}
#include "ex7.h"

// Déclaration et initialisation de la variable statique
static int count = 0;

// Définition de la fonction count_me
int count_me() {
    // Incrémente le compteur à chaque appel
    count++;
    return count;
}
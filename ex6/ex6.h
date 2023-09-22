#ifndef PERSON_H
#define PERSON_H

// Définition de la structure s_person
struct s_person {
    char name[50];
    int age;
};

// Définition d'un typedef t_person pour simplifier l'utilisation de la structure
typedef struct s_person t_person;

// Déclaration de la fonction pour afficher les champs d'une personne
void print_person(t_person person);

#endif
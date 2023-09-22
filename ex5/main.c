#include <stdio.h>
#include "ex5.h"

int main() {
    int height, width;

    printf("Entrez la hauteur du rectangle : ");
    scanf("%d", &height);

    printf("Entrez la largeur du rectangle : ");
    scanf("%d", &width);
    char border = '@';
    char corner = '+';
    char inside = '*';

    draw_rectangle(height, width, border, corner, inside);

    return 0;
}

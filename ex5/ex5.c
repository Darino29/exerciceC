#include <stdio.h>
#include "ex5.h"

void draw_rectangle(int height, int width, char border, char corner, char inside) {
    if (height <= 0 || width <= 0) {
        printf("Les dimensions du rectangle doivent être positives.\n");
        return;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                // Bordures du rectangle
                printf("%c", border);
            } else {
                // Intérieur du rectangle
                printf("%c", inside);
            }
        }
        printf("\n");
    }
}
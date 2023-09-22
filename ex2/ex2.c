#include <stdio.h>

void all_evens_to(int n) {
    if (n < 0) {
        printf("Le nombre doit être positif ou nul.\n");
        return;
    }

    for (int i = 0; i <= n; i += 2) {
        printf("%d\n", i);
    }
}

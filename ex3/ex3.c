#include "ex3.h"
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;  // Les nombres négatifs, 0 et 1 ne sont pas premiers
    }

    if (n == 2) {
        return 0;  // 2 est un nombre premier
    }

    if (n % 2 == 0) {
        return 2;  // Les nombres pairs autres que 2 ne sont pas premiers, le plus petit diviseur est 2
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return i;  // n est divisible par i, donc i est le plus petit diviseur non trivial de n
        }
    }

    return 0;  // Si aucun diviseur n'a été trouvé, n est premier
}

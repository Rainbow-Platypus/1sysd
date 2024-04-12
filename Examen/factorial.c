#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(int argc, char *argv[]) {
    int i;
    if (argc > 1) {
        for (i = 1; i < argc; i++) {
            if (atoi(argv[i]) < 0) {
                printf("Erreur : le nombre doit être positif\n");
                return 1;
            }
            printf("%d! = %d\n", atoi(argv[i]), factorial(atoi(argv[i])));
        }
    } else {
        printf("vous devez entrer un chiffre\n");
    }
    return 0;
}

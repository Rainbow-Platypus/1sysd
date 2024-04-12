#include <stdio.h>
#include <stdlib.h>

#define MAX_FACTORIAL 12

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
            int num = atoi(argv[i]);
            if (num < 0) {
                printf("Erreur : le nombre doit être positif\n");
                return 1;
            }
            if (num > MAX_FACTORIAL) {
                printf("Erreur : le nombre est trop grand\n");
                return 1;
            }
            printf("%d! = %d\n", num, factorial(num));
        }
    } else {
        printf("vous devez entrer un chiffre\n");
    }
    return 0;
}

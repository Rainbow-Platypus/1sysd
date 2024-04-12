#include <stdio.h>
#include <stdlib.h>

void display_histogram(int tab[], int size) {
    int i, max = 0;
    for (i = 0; i < size; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    for (i = max; i > 0; i--) {
        printf("%*s", i, "");
        for (int j = 0; j < size; j++) {
            if (tab[j] >= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int values[] = { 4, 9, 8, 2, 0, 1, 10, 5, 8 };

    display_histogram(values, 9);

    exit(EXIT_SUCCESS);
}

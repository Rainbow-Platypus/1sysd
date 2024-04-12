#include <stdio.h>
#include <math.h>

const float pi = 3.14159;

double P(double r) {
    return 2 * pi * r;
}

double S(double r) {
    return pi * pow(r, 2);
}

int main() {
    double r;
    printf("Entrez le rayon: ");
    scanf("%lf", &r);
    
    if (r < 0) {
        printf("Erreur: le rayon ne peut pas être négatif.\n");
        return 1; // retourne une erreur
    }

    printf("Périmètre : %.2f\n", P(r));
    printf("Aire: %.2f\n", S(r));
    return 0;
}

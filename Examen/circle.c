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
    printf("Enter the radius: ");
    scanf("%lf", &r);
    printf("Perimettre : %.2f\n", 2 * pi * r);
    printf("Aire: %.2f\n", pi * r * r);
    return 0;
}

#include <stdio.h>

int main() {

    double A;
    scanf("%lf", &A);
    double B;
    scanf("%lf", &B);
    double C;
    scanf("%lf", &C);
    double MEDIA;

    MEDIA = (A * 2 + B * 3 + C * 5)/10;

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
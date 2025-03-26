#include <stdio.h>

int main() {
    double area;
    double n; 
    double raio;
    scanf("%lf", &raio);

    n = 3.14159;    
    area = n*(pow(raio, 2));

    printf("A=%.4lf\n", area);
}
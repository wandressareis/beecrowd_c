#include <stdio.h>

int main() {
    int numero_funcionario;
    scanf("%d", &numero_funcionario);
    int horas_trabalhadas;
    scanf("%d", &horas_trabalhadas);
    double valor_hora;
    scanf("%lf", &valor_hora);
    double salario;

    salario = horas_trabalhadas * valor_hora;

    printf("NUMBER = %d\n", numero_funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
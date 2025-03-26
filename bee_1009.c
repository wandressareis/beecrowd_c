#include <stdio.h>


int main() {
    char nome_vendedor[120];
    scanf("%s", nome_vendedor);
    double salario_fixo;
    scanf("%lf", &salario_fixo);
    double total_vendas;
    scanf("%lf", &total_vendas);
    double salario_final;

    salario_final = salario_fixo + 15*(total_vendas/100);

    printf("TOTAL = R$ %.2lf\n", salario_final);

    return 0;
}
#include <stdio.h>

int main()
{
    int minimo;
    int bruto;
    int quant;

    printf("Digite o valor do Salario minimo!\n");
    scanf("%d", &minimo);

    printf("Digite o valor do salario bruto!\n");
    scanf("%d" , &bruto);

    quant = bruto / minimo;
    printf("A pessoa ganha %d salario minimos", quant);

    return 0;
}

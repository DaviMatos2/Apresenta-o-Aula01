#include <stdio.h>

int main()
{
    int a;
    int b;
    int div;
    int resto;

    printf("Digite um numero!\n");
    scanf("%d", &a);

    printf("Digite um segundo numero!");
    scanf("%d", &b);

    div = a / b;
    resto = a & b;

    printf("Divisão = %d , Resto = %d", div, resto);

    return 0;
}

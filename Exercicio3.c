#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    int media;
    int soma;

    printf("Me diga a 1º nota!");
    scanf("%d", &n1);
    printf("Me diga a 2º nota!");
    scanf("%d", &n2);
    printf("Me diga a 3º nota!");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;
    media = soma / 3;

    printf("A media foi de: %d\n", media);

    return 0;
}

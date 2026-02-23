#include <stdio.h>

int main()
{
    int horario;
    int minutos;

    printf("Me diga o horario?");
    scanf("%d", &horario);

    minutos = horario * 60;
    
    printf("O quantidade de minutos que sem passaram foi:\n%d", minutos);

    return 0;
}



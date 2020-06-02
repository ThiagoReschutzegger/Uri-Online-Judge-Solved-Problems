#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Criando variável para distância e tempo*/
    int d,t;
    /* Lendo a distância em quilômetros */
    scanf("%d",&d);
    /* Já que o carro anda 2 km por minuto... */
    t=d*2;
    printf("%d minutos\n",t);
    return 0;
}

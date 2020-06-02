#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    double sf,tv,t;
    scanf("%s",&n);
    scanf("%lf",&sf);
    scanf("%lf",&tv);
    t=sf+(tv*15)/100;
    printf("TOTAL = R$ %.2lf\n",t);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    double ret,cir,trap,tri,quad;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    ret=a*b;
    cir=(3.14159)*pow(c,2);
    trap=((a+b)*c)/2;
    quad=pow(b,2);
    tri=(a*c)/2;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",trap);
    printf("QUADRADO: %.3lf\n",quad);
    printf("RETANGULO: %.3lf\n",ret);

return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km;
    float l;
    double t;
    scanf("%d",&km);
    scanf("%f",&l);
    t=km/l;
    printf("%.3lf km/l\n",t);
    return 0;
}

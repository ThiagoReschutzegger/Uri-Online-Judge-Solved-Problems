#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km,t;
    double l,d;
    scanf("%d%d",&t,&km);
    d=km*t;
    l=d/12;
    printf("%.3lf\n",l);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    double a,pi;
    pi=3.14159;
    scanf("%d",&r);
    a=(4/3.0)*pi*pow(r,3);
    printf("VOLUME = %.3f\n",a);
    return 0;
}

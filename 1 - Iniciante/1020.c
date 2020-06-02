#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,m,d,r1,r2;
    scanf("%d",&r1);
    a=r1/365;
    m=r1%365/30;
    d=r1-((a*365)+(m*30));
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}

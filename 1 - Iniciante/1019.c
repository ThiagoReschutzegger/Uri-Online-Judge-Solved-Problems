#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,s,h,r1,r2,r3;
    scanf("%d",&r1);
    h=r1/3600;
    m=r1%3600/60;
    s=r1%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}

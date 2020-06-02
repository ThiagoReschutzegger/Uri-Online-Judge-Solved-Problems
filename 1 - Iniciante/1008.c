#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,hr;
    float v,s;
    scanf("%d",&n);
    scanf("%d",&hr);
    scanf("%f",&v);
    s=hr*v;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2f\n",s);
    return 0;
}

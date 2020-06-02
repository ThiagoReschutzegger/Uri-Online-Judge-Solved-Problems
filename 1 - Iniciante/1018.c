#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1;
    int rs1,rs2,rs3,rs4,rs5,rs6,rs7;
    scanf("%d",&m1);
    rs1=m1/100;
    rs2=(m1%100)/50;
    rs3=(m1%50)/20;
    rs4=(m1%50%20)/10;
    rs5=(m1%50%20%10)/5;
    rs6=(m1%50%20%10%5)/2;
    rs7=(m1%50%20%10%5%2)/1;
    printf("%d\n",m1);
    printf("%d nota(s) de R$ 100,00\n", rs1);
    printf("%d nota(s) de R$ 50,00\n", rs2);
    printf("%d nota(s) de R$ 20,00\n", rs3);
    printf("%d nota(s) de R$ 10,00\n", rs4);
    printf("%d nota(s) de R$ 5,00\n", rs5);
    printf("%d nota(s) de R$ 2,00\n", rs6);
    printf("%d nota(s) de R$ 1,00\n", rs7);
    return 0;
}

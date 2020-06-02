#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        m=a;}
    if(b>a && b>c){
        m=b;}
    if(c>a && c>b){
        m=c;}

    printf("%d eh o maior\n",m);
    return 0;
}

#include <stdio.h>
int main()
{
    int  a,b,c;
    printf("Entre Number A:");
    scanf("%d",&a);
    printf("Entre Number B:");
    scanf("%d",&b);
    printf("Entre Number C:");
    scanf("%d",&c);
    int somme=a+b+c;
    double moyenne=somme/3.0;
    printf("Somme est:%d\n",somme);
    printf("Moyennr est:%lf",moyenne);
    return 0;
}
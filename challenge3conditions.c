#include <stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Entree numero 1:");
    scanf("%d",&num1);
    printf("Entree numero 2:");
    scanf("%d",&num2);
    if(num1==num2)
    {
        sum=num1*3;
        printf("Somme est %d\n",sum);
    }
    else
    {
        sum=num1+num2;
        printf("Somme est %d",sum);
    }
}
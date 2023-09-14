#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,delta;
    float x1,x2;
    printf("Entre a:");
    scanf("%d",&a);
    printf("Entre b:");
    scanf("%d",&b);
    printf("Entre c:");
    scanf("%d",&c);
    delta=pow(b,2)-4*a*c;
    if(delta<0)
    {
        printf("delta n'a pas de solution");
    }
    else if (delta == 0)
    {
        x1=(-b)/(2*a);
        printf("delta a une solution:%f",x1);
    }
    else
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("delta a une solution:%f\n",x1);
        printf("delta a une solution:%f",x2);
    }
}
#include <stdio.h>
int main()
{
    int num,i=2,cal=0;
    printf("Entre a number:");
    scanf("%d",&num);
    for (i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
        cal=0;
        break;
        }
        else cal=1;
    }
    if (cal==1) printf("Le numero est un numero premier");
    else printf("Le numero est un numero non premier"); 
}
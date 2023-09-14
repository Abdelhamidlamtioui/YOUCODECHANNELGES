#include <stdio.h> 
int main()
{
    int num ;
    printf("Entre number:");
    scanf("%d",&num);
    if (num==0)
    {
        printf("le nomber est zero");
    }
    else if (num<0)
    {
        printf("le nomber est negative");
    }
    else
    {
        printf("le nomber est positive");
    }
}
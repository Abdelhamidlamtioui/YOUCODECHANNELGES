#include <stdio.h>
int main()
{
    int num;
    printf("Entree un nomber:");
    scanf("%d",&num);
    if ((num%2)==0)
    {
        printf("Nomber est pair");
    }
    else
        printf("Nomber est impair");
}
#include <stdio.h>
int main()
{
    int C,F;
    printf("Entre temperature en Fahrenheit:");
    scanf("%d",&F);
    C = (F-32)/1.8;
    printf("Temperature en Celsius: %d",C);
    return 0;
}
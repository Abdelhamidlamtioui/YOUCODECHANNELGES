#include <stdio.h>
int main()
{
    int num=230;
    char hundred,tens,single;
    hundred=234/100;
    tens=(num-(hundred*100))/10;
    single=(num-(hundred*100))%10;
    printf("%c%c%c",single,tens,hundred);
    return 0;
}
#include <stdio.h>
int main()
{
    int num=230;
    int hundred,tens,single;
    hundred=234/100;
    tens=(num-(hundred*100))/10;
    single=(num-(hundred*100))%10;
    printf("%d%d%d",single,tens,hundred);
    return 0;
}
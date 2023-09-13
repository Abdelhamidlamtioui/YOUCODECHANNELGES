#include <stdio.h>
int main()
{
    int num=234,hundred,tens,single,reverse;
    hundred=234/100;
    tens=(num-(hundred*100))/10;
    single=(num-(hundred*100))%10;
    printf("%d%d%d",single,tens,hundred);
    return 0;
}
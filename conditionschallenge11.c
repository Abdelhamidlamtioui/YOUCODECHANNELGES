#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int day;
  srand(time(NULL));
  day =(rand()%7)+1;

  switch (day)
  {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesdqy");
    break;
  case 3:
    printf("Wensday");
    break;
  case 4:
    printf("Thusday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  }
  return 0;
}
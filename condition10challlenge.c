#include <stdio.h>
int main()
{
  int day,year;
  int month ;
  printf("Entre date:");
  scanf("%d/%d/%d",&day,&month,&year);
  printf("Todays date is %d / %d / %d \n",day,month,year);
  switch (month)
  {
  case 1:
    printf("Todays date is %d-January-%d",day,year);
    break;
  case 2:
    printf("Todays date is %d-February-%d",day,year);
    break;
  case 3:
    printf("Todays date is %d-March-%d",day,year);
    break;
  case 4:
    printf("Todays date is %d-April-%d",day,year);
    break;
  case 5:
    printf("Todays date is %d-May-%d",day,year);
    break;
  case 6:
    printf("Todays date is %d-June-%d",day,year);
    break;
  case 7:
    printf("Todays date is %d-July-%d",day,year);
    break;
  case 8:
    printf("Todays date is %d-August-%d",day,year);
    break;
  case 9:
    printf("Todays date is %d-September-%d",day,year);
    break;
  case 10:
    printf("Todays date is %d-October-%d",day,year);
    break;
  case 11:
    printf("Todays date is %d-November-%d",day,year);
    break;
  case 12:
    printf("Todays date is %d-December-%d",day,year);
    break;
  default:
    break;
  }
}
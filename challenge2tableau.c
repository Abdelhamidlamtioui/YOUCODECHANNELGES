#include <stdio.h>
int main()
{
  int i=0,j=0;
  int num[10];
  int min,max;
  while (i<10)
  {
    printf("Entre number:");
    scanf("%d",&num[i]);
    i++;
  }
  min=num[0];
  max=num[0];
  while (j<10)
  {
    if (num[j]>max)
    {
      max=num[j];
    }
    if (num[j]<min)
    {
      min=num[j];
    }
    j++;
  }
  printf("Minimum num is %d\n",min);
  printf("Maximum num is %d\n",max);
  return 0;
}
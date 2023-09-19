#include <stdio.h>
int main()
{
  int i=0,temp=0,j=0,k=0;
  int num [10];
  while (i<10)
  {
    printf("Entre number:");
    scanf("%d",&num[i]);
    i++;
  }
  while (j<10)
  {
    k=j+1;
    while (k<10)
    {
      if (num[j]<num[k])
      {
        temp=num[j];
        num[j]=num[k];
        num[k]=temp;
      }
      k++;
    }
    j++;
  }
  int m=0;
    while (m<10)
  {
    printf("number: %d\n",num[m]);
    m++;
  }
  
}
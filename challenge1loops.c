#include <stdio.h>
 int main()
 {
  int num,i=0;
  printf("Entree un nomber:");
  scanf("%d",&num);
  while (i<=10)
  {
    printf("%d * %d = %d\n",num,i,num*i);
    i++;
  }
  
   return 0;
 }
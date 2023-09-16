#include <stdio.h>
int main()
{
  char letter;
  printf("Entre letter:");
  scanf("%c",&letter);
  if (letter>='a' && letter<='z')
  {
    printf("C'est un letter menuscule");
  }
  else if (letter>='A' && letter<='Z')
  {
    printf("C'est un letter majuscule");
  }
  else
    printf("Cela n'est pas un lettre");
  return 0;
}
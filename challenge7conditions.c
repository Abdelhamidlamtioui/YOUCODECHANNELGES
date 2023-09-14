#include <stdio.h>
int main()
{
    char lettre;
    printf("Entree letter:");
    scanf(" %c",&lettre);
    if (lettre<='A'&& lettre>='Z')
    {
        printf("le character est majuscule");
    }
    else
        printf("le character est miniscule");
        return 0;
}
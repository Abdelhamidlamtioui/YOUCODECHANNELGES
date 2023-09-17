#include <stdio.h>
int main()
{
    int ligne,space,i,j,num_Of_Etoille,k;
    printf("Entre number of line:");
    scanf("%d",&ligne);
    num_Of_Etoille=1;
    space=ligne-1;
    for (i = 0; i < ligne; i++)
    {
        space=space-1;
        for (j = 0; j <= space; j++)
        {
            printf(" ");
        }
        for (k = 0;k< num_Of_Etoille;k++)
        {
            printf(".");
        }
        num_Of_Etoille=num_Of_Etoille+2;
        printf("\n");
    }
    return 0;
}
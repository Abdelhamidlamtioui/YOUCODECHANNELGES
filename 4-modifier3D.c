#include <stdio.h>
#include <string.h>

int main() 
{
    int i, j, l,modifier,fait=1;
    char check[100];
    char array[5][5][20] = {
        {"id", "title", "description", "deadline", "status"},
        {"1", "Project1", "details", "2023", "done"},
        {"2", "Project2", "whhw", "2023", "started"},
        {"3", "Project3", "dhdh", "2023", "in process"},
        {"4", "Project4", "gdgd", "2023", "in process"}
    };

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%s\t", array[i][j]);
        }
        printf("\n");
    }
    printf("Choisi le un numero que tu veus changer\n1-Description.\n2-Status\n3-Deadline\nEntre le numero ici:");
    scanf("%d",&modifier);
    printf("entre le Description que vous voulez changer:");
    scanf("%s",&check);
    if(modifier==1)
    {
        modifier=2;
        for(l=1;l<5;l++)
        {
            if(strcmp(check,array[l][modifier])==0)
            {
                printf("Entre que vous voulez modifier:");
                scanf("%s",&array[l][modifier]);
                fait=1;
                break;
            }
            else fait=0;
        }
    }
    if(fait)
    {
        printf("Le description est modifier\n");
    }
    else printf("Le description n'pas modifier\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%s\t", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
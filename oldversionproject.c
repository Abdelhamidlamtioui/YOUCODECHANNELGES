#include <stdio.h>
#include <string.h>
int main()
{
    int m;
    int i=0,j=0,k=0,cal;
    char search[50];
    char userinfo [100] [100] ;
    char check;
    char deleteinfo;
    do{
    printf("===================================================");
    printf("\n        Menu d\'application \n");
    printf("===================================================");
    printf("     [1] afficher les donnees\n     [2] ajouter une donnee\n     [3] rechercher sur une donnee\n     [4] supprimer une donnee\n     [5] supprimer les donnees repetes\n     [6] genere le wordlist\n     [7] genere le wordlist dans un fichier .txt  // Un bonus\n     [8] afficher les donnees de type entier // Un bonus");
    printf(" Tapez votre choix [1-6] :");
    scanf("%d",&m);
    switch (m)
    {
    case 1:
        j=0;
        while(j<i)
        {
            printf("Les donnee sont :%s\n",userinfo[j]);
            j++;
        }
        break;
    case 2:
            printf("entre a INFO:");
            scanf("%s",&userinfo[i]);
            i++;
        break;
    case 3:
            printf("entre word you searching");
            scanf("%s",&search);
            cal=strlen(search);
            k=0;
            while (k<i)
            {
                if (strncmp(search,userinfo[k],cal)==0)
                {
                    printf("Words are :%s\n",userinfo[k]);
                }
                
                k++;
            }
        break;
    case 4:
            printf("Whats the word you want to delete:");
            scanf("%s",&deleteinfo);
            k=0;
            while (k<i)
            {
                if (strcmp(deleteinfo,userinfo[k])==0)
                {
                    strcpy(userinfo[k], userinfo[k + 1]);
                    printf("Word you delete is:%s\n",userinfo[k]);
                }
                
                k++;
            }
        break;
    case 5:
        
        break;
    case 6:
        
        break;
    default:
        break;
    }
    }while (1);
    return 0;
}

#include <stdio.h>
#include <string.h>

typedef struct{
  int id ;
  char title [100];
  char description [100];
  char status[100];
  int deadline[100];
} toDOList;
toDOList tab[100];
int id_G=0;
int numOfTask,countAdd,countAddElement=0,StatusAdd;
int choisie,showListchoice,modidyId,modidyChoisie;
  

void addinfo();
void showinfo();
void modifyinfo();
void deleteinfo();
void searchinfo();
int main()
{

  while(1)
  {
    printf("Choisie de list suivant:\n");
    printf("1- Ajouter une nouvelle tâche.\n");
    printf("2- Ajouter plusieurs nouvelles tâches.\n");
    printf("3- Afficher la liste de toutes les tâches\n");
    printf("4- Modifier une tâche\n");
    printf("5- Supprimer une tâche par identifiant\n");
    printf("6- Rechercher les Tâches\n");
    printf("7- Statistiques\n");
    printf("0- Quitter\n");
    scanf("%d", &choisie);
    switch(choisie)
    {
      case 1:
        id_G++;
            tab[countAddElement].id = id_G;
            printf("Enter the title: ");
            scanf("%s", tab[countAddElement].title);
            printf("Enter the description: ");
            scanf("%s", tab[countAddElement].description);
            printf("Enter un choix pour status:\n1-A realiser\n2-En cours de realisation\n3-Finalisee: ");
            scanf("%d", &StatusAdd);

            if (StatusAdd == 1) {
                strcpy(tab[countAddElement].status, "A realiser");
            } else if (StatusAdd == 2) {
                 strcpy(tab[countAddElement].status, "En cours de realisation");
            } else if (StatusAdd == 3) {
                strcpy(tab[countAddElement].status, "Finalisee");
            } else {
                printf("Entrez un nouveau nombre valide.\n");
                    }
            countAddElement++;
        break;
      case 2:
        printf("Entre le nombre de tâches que vous voulez ajouter: ");
                scanf("%d", &numOfTask);

          for (countAdd = 0; countAdd < numOfTask; countAdd++) {
            id_G++;
            tab[countAddElement].id = id_G;
            printf("Enter the title: ");
            scanf("%s", tab[countAddElement].title);
            printf("Enter the description: ");
            scanf("%s", tab[countAddElement].description);
            printf("Enter un choix pour status:\n1-A realiser\n2-En cours de realisation\n3-Finalisee: ");
            scanf("%d", &StatusAdd);

            if (StatusAdd == 1) {
                strcpy(tab[countAddElement].status, "A realiser");
            } else if (StatusAdd == 2) {
                 strcpy(tab[countAddElement].status, "En cours de realisation");
            } else if (StatusAdd == 3) {
                strcpy(tab[countAddElement].status, "Finalisee");
            } else {
                printf("Entrez un nouveau nombre valide.\n");
                    }
                countAddElement++;
          }
        break;
      case 3:
        printf("Choisie de ce list que vous voulez:\n1-Trier les tâches par ordre alphabétique\n2-Trier les tâches par deadline.\n3-Afficher les tâches dont le deadline est dans 3 jours ou moins.");
        scanf("%d",showListchoice);
        if(showListchoice==1)
        {
            
        }
        else if(showListchoice==2)
        {
            
        }
        else if(showListchoice==3)
        {
            
        }
        else printf("this number is not on the list");
        break;
      case 4:
        printf("entre le id de tach:");
        scanf("%d",&modidyId);
        printf("Choisie de ce list que vous voulez:\n1-Modifier la description d'une tâche\n2-Modifier le statut d’une tâche.\n3-Modifier le deadline d’une tâche.");
        scanf("%d",&modidyChoisie);
        
        break;
      case 5:
        
        break;
      case 6:
        break;
      case 7:
        break;
      case 0:
        return 0;
        break;
      }
    }
    return 0;
}
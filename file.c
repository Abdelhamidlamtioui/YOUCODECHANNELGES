#include <stdio.h>
#include <string.h>

typedef struct{
  int id;
  char title [100];
  char description [100];
  char deadline[100];
  char status[100];
  char remaningDays[100];
  int daysCalculation;
} toDOList;
toDOList tab[100];

int id_G,tempSortAlphabetNum,day,month,year,tempDaysCalculation,tempSortBydeadline,modidyListCount;
char tempSortAlphabet[100],newDescription[100],searchTitle[100];
int numOfTask,countAdd,countAddElement=0,StatusAdd;
int idCount,choisie,showListchoice,modidyId,modidyChoisie,showListCount,showListCount1,deleteId,countDelete,countDelete1,searchID,countSearch,searchListChoice;
  

void addinfo();
void showinfo();
void modifyinfo();
void deleteinfo();
void searchinfo();
int main()
{
  tab[0].id=0;
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
            tab[countAddElement].id=id_G;
            printf("Your id is:%d\n",tab[countAddElement].id);
            printf("Enter the title: ");
            scanf(" %[^\n]", tab[countAddElement].title);
            printf("Enter the description: ");
            scanf(" %[^\n]", tab[countAddElement].description);
            printf("Enter un choix pour status:\n1-A realiser\n2-En cours de realisation\n3-Finalisee: ");
            scanf(" %d", &StatusAdd);
            if (StatusAdd == 1) {
                strcpy(tab[countAddElement].status, "A realiser");
            } else if (StatusAdd == 2) {
                strcpy(tab[countAddElement].status, "En cours de realisation");
            } else if (StatusAdd == 3) {
                strcpy(tab[countAddElement].status, "Finalisee");
            } else {
                printf("Entrez un nouveau nombre valide.\n");
                    }
            while (1)
            {
              printf("Entre le jour de deadline:");
              scanf("%d",&day);
              if ( day<1 && day>31)
              {
                printf("Le jour invalide entre un jour de 1 au 31.");
              }
              else break;
            }
            while (1)
            {
              printf("Entre le mois de deadline:");
              scanf("%d",&month);
              if ( month<1 && month>12)
              {
                printf("Le mois invalide entre un mois de 1 au 12.");
              }
              else break;
            
            }
            while (1)
            {
            printf("Entre le annee de deadline:");
            scanf("%d",&year);
            if ( year<1999 && year>2051)
              {
                printf("Le annnee invalide entre un annee de 2000 au 2050.");
              }
              else break;
            
            }

            tempDaysCalculation=(year*360)+(month*30)+day;
            tab[countAddElement].daysCalculation=tempDaysCalculation;
            sprintf(tab[countAddElement].remaningDays,"%d day",tempDaysCalculation);
            sprintf(tab[countAddElement].deadline,"%d/%d/%d",day,month,year);
            countAddElement++;
        break;
      case 2:
        printf("Entre le nombre de tâches que vous voulez ajouter: ");
                scanf("%d", &numOfTask);
          for (countAdd = 0; countAdd < numOfTask; countAdd++) {
            id_G++;
            tab[countAddElement].id=id_G;
            //sprintf(tab[countAddElement].id,"%d",id_G);
            printf("Your id is:%d\n",tab[countAddElement].id);
            printf("Enter the title: ");
            scanf(" %[^\n]", tab[countAddElement].title);
            printf("Enter the description: ");
            scanf(" %[^\n]", tab[countAddElement].description);
            printf("Enter un choix pour status:\n1-A realiser\n2-En cours de realisation\n3-Finalisee: ");
            scanf( " %d", &StatusAdd);
            if (StatusAdd == 1) {
                strcpy(tab[countAddElement].status, "A realiser");
            } else if (StatusAdd == 2) {
                strcpy(tab[countAddElement].status, "En cours de realisation");
            } else if (StatusAdd == 3) {
                strcpy(tab[countAddElement].status, "Finalisee");
            } else {
                printf("Entrez un nouveau nombre valide.\n");
                    }
            while (1)
            {
              printf("Entre le jour de deadline:");
              scanf("%d",&day);
              if ( day>0 && day<31)
              {
                break;
              }
              else printf("Le jour invalide entre un jour de 1 au 31.");
            }
            while (1)
            {
              printf("Entre le mois de deadline:");
              scanf("%d",&month);
              if ( month>0 && month<13)
              {
                break;
              }
              else printf("Le mois invalide entre un mois de 1 au 12.");
            }
            while (1)
            {
            printf("Entre le annee de deadline:");
            scanf("%d",&year);
            if ( year>1999 && year<2051)
              {
                break;
              }
              else printf("Le annnee invalide entre un annee de 2000 au 2050.");
            }
            tempDaysCalculation=(year*360)+(month*30)+day;
            tab[countAddElement].daysCalculation=tempDaysCalculation;
            sprintf(tab[countAddElement].remaningDays,"%d day",tempDaysCalculation);
            sprintf(tab[countAddElement].deadline,"%d/%d/%d",day,month,year);
            countAddElement++;
          }
        break;
      case 3:
        printf("Choisie de ce list que vous voulez:\n1-Trier les tâches par ordre alphabétique\n2-Trier les tâches par deadline.\n3-Afficher les tâches dont le deadline est dans 3 jours ou moins.");
        scanf("%d",&showListchoice);
        if(showListchoice==1)
        {
          //this code will capitlise first letter
          for (showListCount=0;showListCount<countAddElement;showListCount++)
          {
            if (tab[showListCount].title[0] != '\0') 
            {
              if (tab[showListCount].title[0] >= 'a' && tab[showListCount].title[0] <= 'z') 
                {
                  tab[showListCount].title[0] = tab[showListCount].title[0] - 'a' + 'A';
                }
            }
          }
          //sort by 
          for (showListCount = 0; showListCount < countAddElement; showListCount++)
          {
            for (showListCount1=showListCount+1;showListCount1<countAddElement;showListCount1++)
            {
              if(strcmp(tab[showListCount].title,tab[showListCount1].title)<1)
              {
                //swap id
                tempSortAlphabetNum=tab[showListCount].id;
                tab[showListCount].id=tab[showListCount1].id;
                tab[showListCount1].id=tempSortAlphabetNum;
                //swap title
                strcpy(tempSortAlphabet,tab[showListCount].title);
                strcpy(tab[showListCount].title,tab[showListCount1].title);
                strcpy(tab[showListCount1].title,tempSortAlphabet);
                //swap description
                strcpy(tempSortAlphabet,tab[showListCount].description);
                strcpy(tab[showListCount].description,tab[showListCount1].description);
                strcpy(tab[showListCount1].description,tempSortAlphabet);
                //swap status
                strcpy(tempSortAlphabet,tab[showListCount].status);
                strcpy(tab[showListCount].status,tab[showListCount1].status);
                strcpy(tab[showListCount1].status,tempSortAlphabet);
                //swap deadline
                strcpy(tempSortAlphabet,tab[showListCount].deadline);
                strcpy(tab[showListCount].deadline,tab[showListCount1].deadline);
                strcpy(tab[showListCount1].deadline,tempSortAlphabet);
                //swap daysCalculation
                tempSortAlphabetNum=tab[showListCount].daysCalculation;
                tab[showListCount].daysCalculation=tab[showListCount1].daysCalculation;
                tab[showListCount1].daysCalculation=tempSortAlphabetNum;
                //swap remaningDays
                strcpy(tempSortAlphabet,tab[showListCount].remaningDays);
                strcpy(tab[showListCount].remaningDays,tab[showListCount1].remaningDays);
                strcpy(tab[showListCount1].remaningDays,tempSortAlphabet);
              }
            }
          }
        }
        else if(showListchoice==2)
        {
          printf("\n%d %d %d\n",tab[0].daysCalculation,tab[1].daysCalculation,tab[1].daysCalculation);
          for (showListCount = 0; showListCount < countAddElement; showListCount++)
          {
            for (showListCount1=showListCount+1;showListCount1<countAddElement;showListCount1++)
            {
              if (tab[showListCount].daysCalculation<tab[showListCount1].daysCalculation)
              {
                //swap id
                tempSortAlphabetNum=tab[showListCount].id;
                tab[showListCount].id=tab[showListCount1].id;
                tab[showListCount1].id=tempSortAlphabetNum;
                //swap title
                strcpy(tempSortAlphabet,tab[showListCount].title);
                strcpy(tab[showListCount].title,tab[showListCount1].title);
                strcpy(tab[showListCount1].title,tempSortAlphabet);
                //swap description
                strcpy(tempSortAlphabet,tab[showListCount].description);
                strcpy(tab[showListCount].description,tab[showListCount1].description);
                strcpy(tab[showListCount1].description,tempSortAlphabet);
                //swap status
                strcpy(tempSortAlphabet,tab[showListCount].status);
                strcpy(tab[showListCount].status,tab[showListCount1].status);
                strcpy(tab[showListCount1].status,tempSortAlphabet);
                //swap deadline
                strcpy(tempSortAlphabet,tab[showListCount].deadline);
                strcpy(tab[showListCount].deadline,tab[showListCount1].deadline);
                strcpy(tab[showListCount1].deadline,tempSortAlphabet);
                //swap daysCalculation              
                tempSortAlphabetNum=tab[showListCount].daysCalculation;
                tab[showListCount].daysCalculation=tab[showListCount1].daysCalculation;
                tab[showListCount1].daysCalculation=tempSortAlphabetNum;
                //swap remaningDays
                strcpy(tempSortAlphabet,tab[showListCount].remaningDays);
                strcpy(tab[showListCount].remaningDays,tab[showListCount1].remaningDays);
                strcpy(tab[showListCount1].remaningDays,tempSortAlphabet);
              }
            }
          }
        }
        else if(showListchoice==3)
        {
            
        }
        else printf("this number is not on the list");
        for ( showListCount= 0; showListCount < countAddElement; showListCount++)
        {
          printf("Id est:%d\n",tab[showListCount].id);
          printf("Le titre de tache est %s\n",tab[showListCount].title);
          printf("Le description de tache est %s\n",tab[showListCount].description);
          printf("Le deadline de tache est %s\n",tab[showListCount].deadline);
          printf("Le titre de tache est %s\n",tab[showListCount].status);
        }
        break;
      case 4:
        printf("entre le id de tach:");
        scanf("%d",&modidyId);
        printf("\n1-Modifier la description de une tâche\n2-Modifier le statut de une tâche.\n3-Modifier le deadline de une tâche.\nChoisie de ce list que vous voulez:");
        scanf("%d",&modidyChoisie);
        if(modidyChoisie==1)
        {
          printf("Entre la nouvelle description:");
          scanf("%s",&newDescription);
          for (modidyListCount=0;modidyListCount<countAddElement;modidyListCount++)
          {
            if (modidyId==tab[modidyListCount].id)
            {
              strcpy(tab[modidyListCount].description,newDescription);
            }
          }
        }
        else if(modidyChoisie==2)
        {
          for (modidyListCount=0;modidyListCount<countAddElement;modidyListCount++)
          {
            if (modidyId==tab[modidyListCount].id)
            {
              printf("Entre la nouveau status:");
              printf("Enter un choix pour status:\n1-A realiser\n2-En cours de realisation\n3-Finalisee: ");
              scanf(" %d", &StatusAdd);
              if (StatusAdd == 1) {
                  strcpy(tab[modidyListCount].status, "A realiser");
              } else if (StatusAdd == 2) {
                  strcpy(tab[modidyListCount].status, "En cours de realisation");
              } else if (StatusAdd == 3) {
                  strcpy(tab[modidyListCount].status, "Finalisee");
              } else {
                  printf("Entrez un nouveau nombre valide.\n");
              }
            }
          }
        }
        else if(modidyChoisie==3)
        {
          for (modidyListCount=0;modidyListCount<countAddElement;modidyListCount++)
          {
            if (modidyId==tab[modidyListCount].id)
            {
                while (1)
                {
                  printf("Entre le jour de deadline:");
                  scanf("%d",&day);
                  if ( day>0 && day<31)
                  {
                    break;
                  }
                  else printf("Le jour invalide entre un jour de 1 au 31.");
                }
                while (1)
                {
                  printf("Entre le mois de deadline:");
                  scanf("%d",&month);
                  if ( month>0 && month<13)
                  {
                    break;
                  }
                  else printf("Le mois invalide entre un mois de 1 au 12.");
                }
                while (1)
                {
                  printf("Entre le annee de deadline:");
                  scanf("%d",&year);
                  if ( year>1999 && year<2051)
                    {
                      break;
                    }
                  else printf("Le annnee invalide entre un annee de 2000 au 2050.");
                }
                sprintf(tab[modidyListCount].deadline,"%d/%d/%d",day,month,year);
            }
          }
        }
        else printf("this number is not on the list");
        break;
      case 5:
        printf("entre le id de tach:");
        scanf("%d",&deleteId);
        for (countDelete = 0; countDelete < countAddElement; countDelete++)
        {
          if (tab[countDelete].id==deleteId)
          {
            for ( countDelete1= countDelete; countDelete1 < countAddElement; countDelete1++)
            {
              tab[countDelete1]=tab[countDelete1+1];
            }
            countAddElement--;
          }
        }
        break;
      case 6:
      printf("Choisie de ce list que vous voulez:\n1-Rechercher une tâche par son Identifiant.\n2-Rechercher une tâche par son Titre.");
      scanf("%d",searchListChoice);
      if (searchListChoice==1)
      {
        printf("Entre le id de tach:");
        scanf("%d",&searchID);
        for ( countSearch=0 ; countSearch < countAddElement; countSearch++)
        {
          if (tab[countSearch].id==searchID)
          {
            printf("Id est:%d\n",tab[countSearch].id);
            printf("Le titre de tache est %s\n",tab[countSearch].title);
            printf("Le description de tache est %s\n",tab[countSearch].description);
            printf("Le deadline de tache est %s\n",tab[countSearch].deadline);
            printf("Le titre de tache est %s\n",tab[countSearch].status);
          }
        }
      }
      if (searchListChoice==2)
      {
        printf("Entre le titre de tach:");
        scanf("%d",&searchTitle);
        for ( countSearch=0 ; countSearch < countAddElement; countSearch++)
        {
          if (strcmp(tab[countSearch].title,searchTitle)==0)
          {
            printf("Id est:%d\n",tab[countSearch].id);
            printf("Le titre de tache est %s\n",tab[countSearch].title);
            printf("Le description de tache est %s\n",tab[countSearch].description);
            printf("Le deadline de tache est %s\n",tab[countSearch].deadline);
            printf("Le titre de tache est %s\n",tab[countSearch].status);
          }
        }
      }
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
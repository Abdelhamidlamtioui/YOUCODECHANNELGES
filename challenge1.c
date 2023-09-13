#include <stdio.h>
int main () {
    int age;
    char nom[20],prenom[20],sexe[20],numero[20];
    printf("Entree votre nom:");
    scanf("%s",&nom);
    printf("Entree votre prenom:");
    scanf("%s",&prenom);
    printf("Entree votre age:");
    scanf("%d",&age);
    printf("Entree votre sexe:");
    scanf("%s",&sexe);
    printf("Entree votre numero:");
    scanf("%s",&numero);
    printf("Le Nom:%s \n Le prenom:%s \n L'age:%d \n Le sexe:%s \n Numero:%s",nom,prenom,age,sexe,numero);
    return 0;
};


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"headre.h"


// Definition des variables globales
Avion a[maxAvion];
int nbrAvion = 0; 

/*________________________Fonction Menu______________________________*/
void afficheMenu(){
int choix;
    do {
printf("\n**        Menu       **\n");
printf ("1.Ajouter un avion\n");
printf ("2.Modifier un avion\n");
printf ("3.Supprimer un avion\n");
printf ("4.Afficher la liste des avions\n");
printf ("5.Rechercher un avion\n");
printf ("0. Quitter le programme\n");

printf("____________________________\n");
printf("\n");

printf("Veuillez saisir votre choix :\n");
scanf("%d",&choix);
switch (choix){
    case 1 :printf ("\n__________Ajouter un avion_________\n");
            FonctionAjoute(a);
            break ;
    case 2 :printf ("\n__________Modifier un avion_________\n");
            FonctionModifier(a);
            break ;
    case 3 :printf ("\nSupprimer un avion\n");
            FonctionSuprime(a);
            break ;
    case 4 :printf ("\n_________Afficher la liste des avions________\n");
            FonctionAfficher(a);
            break ;
    case 5 :printf ("\n___________Rechercher un avion________________\n");
            FonctionRecherche(a);
            break ;
    case 0: printf("\nAU REVOIR!!!");
            break;
    default : printf ("\nchoix n'existe pas\n");
            break ;
} 
}while(choix!=0);
printf("\n");
printf("_________________________________________________________\n");
}


/*__________________Fonction d'initialisation______________________*/
void FonctionInitial(){

    a[0].Id = 1;
    strcpy(a[0].T_model, "Boeing 737");
    a[0].capacite = 90;
    strcpy(a[0].Status, "Disponible");
    strcpy(a[0].dateEntree, "01/01/2020");

    a[1].Id = 2;
    strcpy(a[1].T_model, "Airbus A320");
    a[1].capacite = 100;
    strcpy(a[1].Status, "En maintenance");
    strcpy(a[1].dateEntree, "15/03/2021");

    nbrAvion = 2;

    printf("Fonction initialiser ____\n");
}

/*________________fonction ajouter _________________________________*/
void FonctionAjoute(Avion a[]){
    if (nbrAvion>=maxAvion){
        printf("Stochk est plein !!!!!! ");
        return ;
    }

    char T_model[30], Status[30], dateEntree[30];
    int capacite;


    a[nbrAvion].Id=nbrAvion+1;
printf("les information d'Avion d'Id %d :\n",a[nbrAvion].Id);
    printf("Modele d'Avion :");
    scanf(" %[^\n]",T_model);
    printf("Capacite d'Avion :");
    scanf(" %d", &capacite);
    printf("Statu d'Avion :");
    scanf(" %[^\n]",Status);
    printf("Date d'entree d'Avion :");
    scanf(" %[^\n]",dateEntree);

    strcpy(a[nbrAvion].T_model,T_model);
    a[nbrAvion].capacite=capacite;
    strcpy(a[nbrAvion].Status,Status);
    strcpy(a[nbrAvion].dateEntree,dateEntree);

    printf("\nL'Avion Ajoutee Avec Succes \n");
    printf("____________________________________________\n");
    nbrAvion++;
}

/*______________Fonction Afficher_________________*/
void FonctionAfficher(Avion a[]){
    if (nbrAvion==0){
        printf("__Aucun Avion existe__ \n");
        return;
    }
for (int i=0;i<nbrAvion;i++){
    printf("l'Id d'avion :%d\n",a[i].Id);
    printf("Modele d'Avion :%s\n",a[i].T_model);
    printf("Capacite d'Avion :%d\n",a[i].capacite);
    printf("Statu d'Avion : %s\n",a[i].Status);
    printf("Date d'entrer d'Avion :%s\n",a[i].dateEntree);
    printf("____________________________________________________\n");
}
}

/*___________Fonction Modifier____________________ */
void FonctionModifier(Avion a[]){
int Idsaisie;
int choix;
int trouve=0;
char T_model[30], Status[30], dateEntree[30];
    int capacite,Id;

    if (nbrAvion==0){
        printf("Aucun Avion existe \n");
        return ;
    }
printf("Veuillez saisir l'Id d'Avion qui tu veut Modifier:");
scanf("%d",&Idsaisie);
for (int i=0;i<nbrAvion;i++) {
    if (a[i].Id==Idsaisie){
printf("Choisir ce que tu veut modifier :\n");
printf ("1.model\n");
printf ("2.capacite\n");
printf ("3.Statue\n");
printf("Anser votre choix :");
scanf("%d",&choix);
switch (choix){
    case 1:printf("Nouvelle modele est:");
            scanf(" %[^\n]",T_model);
            strcpy(a[i].T_model,T_model);
            break;
    case 2:printf("Nouvelle capacite est:");
            scanf("%d",&capacite);
            a[i].capacite=capacite;
            break;
    case 3:printf("Nouvelle Statue est:");
            scanf(" %[^\n]",Status);
            strcpy(a[i].Status,Status);
            break;
    default :printf("\nChoix invalide\n");
            break;
}
printf("___La modification fait Avec succes___\n");
trouve=1;
break;
printf("\n");
}
}
if (!trouve){
    printf("Aucun Avion axiste avec Id %d \n",Idsaisie);
}
}

/*____________________Fonction de Recherche  ______________________*/
void FonctionRecherche(Avion a[]){
int trouve=0;
int Idsearch;
    if (nbrAvion==0){
        printf("Aucun Avion existe\n");
        return ;
    }
printf("Veuillez saisir l'Id d'avion qui tu veux :");
scanf("%d",&Idsearch);
for (int i=0;i<nbrAvion;i++){
    if (a[i].Id==Idsearch){
        printf("Id d'Avion : %d\n",a[i].Id);
        printf("Modele :%s\n",a[i].T_model);
        printf("capacite : %d\n",a[i].capacite);
        printf("Status : %s\n",a[i].Status);
        printf("date d'entrer :%s\n ",a[i].dateEntree);
    }
}
printf("Search Done!!!!!");
printf("\n");
}

/*________________Fonction Suprimer __________________________*/
void FonctionSuprime(Avion a[]){
int IdSuprime;
int trouve=0;
    if (nbrAvion==0){
        printf("Aucun Avion existe !!!!");
        return;
    }
printf("Veuillez saisir Id d'avion qui tu veux suprimer :");
scanf ("%d",&IdSuprime);
for (int i=0;i<nbrAvion;i++){
    if(a[i].Id==IdSuprime){
        trouve =1;
        for (int j=i;j<nbrAvion-1;j++){
            a[j]=a[j+1];
        }
        nbrAvion--;
        printf("Avion avec Id %d suprimee avec succes.\n",IdSuprime);
        break;
    }
}
if (!trouve){
    printf("Aucun avion trouver avec Id %d .\n",IdSuprime);
}
printf("\n");
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"header.h"



/*__________________________________Fonction d'initalisation______________________________*/

void InitialiserAvions() {

    Id[0] = 1;
    strcpy(T_model[0], "Boeing 737");
    capacite[0] = 180;
    strcpy(Status[0], "Disponible");
    strcpy(dateEntree[0], "01/01/2020");


    Id[1] = 2;
    strcpy(T_model[1], "Airbus A320");
    capacite[1] = 160;
    strcpy(Status[1], "En maintenance");
    strcpy(dateEntree[1], "15/03/2021");
}




/*________________________________________________________Fonctions d'affichage de menu______________________________________________________*/
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
            FunctionAjout();
            break ;
    case 2 :printf ("\n__________Modifier un avion_________\n");
            FunctionModifier();
            break ;
    case 3 :printf ("\nSupprimer un avion\n");
            FonctionSupprime();
            break ;
    case 4 :printf ("\n_________Afficher la liste des avions________\n");
            Afficher();
            break ;
    case 5 :printf ("\n___________Rechercher un avion________________\n");
            FonctionSearch();
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

/*________________________________________________Fonction d'ajoute _______________________________________________________________*/
void FunctionAjout (){
    if (nbrAvion>=100){
    printf("Stock est plein\n");
    return ;
    }
/*Id Automatiaue*/
Id[nbrAvion]=nbrAvion+1;

    printf ("Modele d'avion :\n");
    scanf(" %[^\n]",T_model[nbrAvion]);

    printf ("Capacite d'avion :\n");
    scanf("%d",&capacite[nbrAvion]);

    // printf ("Statu d'avion (1.Disponible__'2.En maintenance___3.En vol):\n");
    // scanf(" %[^\n]",Status[nbrAvion]);
    menuStatut(nbrAvion);
    
    printf ("Date d'Entrer d'avion (jour/mois/année):\n");
    scanf(" %[^\n]s",dateEntree[nbrAvion]);

    printf ("Id d'avion :%d \n",Id[nbrAvion]);
    printf("\n");
    
printf ("L'avion Ajouter avec Succes\n");
printf("___________________________________________________________________\n");
nbrAvion++;

}

/*________________________Fonction Modification_______________________________________________*/
void FunctionModifier(){
int IdSaisie;
int choice;
int trouv =0;

if (nbrAvion==0){
    printf("Aucun avion n'existe .\n");
    return;
}
    printf("Veuillez saisir Id d'Avion :\n");   /*model capacite statu*/
    scanf("%d",&IdSaisie);
for (int i=0;i<nbrAvion;i++){
if (Id[i]==IdSaisie){
printf("Choisir ce que tu veut modifier :\n");
printf ("1.model\n");
printf ("2.capacite\n");
printf ("3.Statue\n");
printf ("Veuillez saisir votre choice :\n");
scanf("%d",&choice);
switch(choice){
    case 1 : printf("Nouvelle modele est :");
            scanf(" %[^\n]",T_model[i]);
            break ;
    case 2 : printf("Nouvelle capacite est :");
            scanf("%d",&capacite[i]);
            break ;
// case 3 : printf("Nouvelle statu  (1.Disponible__'2.En maintenance___3.En vol) est :");
//         scanf(" %[^\n]",Status[i]);
    case 3:  //idSaisie -1 hit tableuq d'id kybda bi 0 mchi  1d
            menuStatut(IdSaisie - 1);
            break;
    default : printf("\nchoix invalid___ \n");
            break ;
        }
printf("\n_______Modification fait avec succes");
trouv=1;
break;
printf("\n");
}
if (!trouv){
    printf("Aucun avion existe avec l'Id %d ",IdSaisie);
}
printf("______________________________________________________________\n");
}
}





/*________________________Fonction affichage ____________________*/
void Afficher(){
    if (nbrAvion==0){
        printf("Aucun avion existe :\n");
        return ;
    }
for (int i=0;i<nbrAvion;i++){
    printf("____avion %d ____\n",Id[i]);
    printf("Modele : %s\n",T_model[i]);
    printf("capacite : %.2d\n",capacite[i]);
    printf("Statu :%s\n",Status[i]);
    printf("Date d'entrer : %s\n",dateEntree[i]);
    printf("Id d'Avion :%d\n",Id[i]); 
}
printf("___________________________________________________________________\n");
}




/*_______________________Fonction pour cherche une avion _____________*/
void FonctionSearch(){
    int IdSearch;
    int i;
    int trouve=0;
    if (nbrAvion==0){
        printf("Aucun vion existe .\n");
        return;
    }
    printf("Veuillez saisir Id 'avion que tu veux:");
    scanf("%d",&IdSearch);
    for (i=0;i<nbrAvion;i++){
        if (Id[i]==IdSearch){
    printf("\n____avion %d ____\n",Id[i]);
    printf("\nModele : %s\n",T_model[i]);
    printf("\ncapacite : %.2d\n",capacite[i]);
    printf("\nStatu :%s\n",Status[i]);
    printf("\nDate d'entrer : %s\n",dateEntree[i]);
    printf("/n");
    trouve=1;
    break ;
        }
    }
if (!trouve){
    printf("Aucun avion trouve avec l'Id %d \n ",IdSearch);
}

printf("\n");
printf("_____________________________________________________________\n");
}


/*___________________Supprime avion_______________________________________*/
void FonctionSupprime(){
int IdSuprime;
int trouve=0;

    if(nbrAvion==0){
        printf("n'existe aucun Avion a supprimer ");
        return ;
    }

    printf("Veuillez saisir l'Id de l'Avion qui tu veut Suprimer: ");
    scanf("%d",&IdSuprime);

    for (int i = 0; i < nbrAvion; i++){
        if (Id[i] == IdSuprime){
            trouve = 1;
            for (int j = i; j < nbrAvion - 1; j++){
                Id[j] = Id[j+1];
                strcpy(T_model[j], T_model[j+1]);
                capacite[j] = capacite[j+1];
                strcpy(Status[j], Status[j+1]);
                strcpy(dateEntree[j], dateEntree[j+1]);
            }
            nbrAvion--; 
            printf("Avion avec Id %d supprime avec succes.\n", IdSuprime);
            break;
        }
    }

    if (!trouve){
        printf("Aucun avion trouve avec l'Id %d.\n", IdSuprime);
    }

    printf("\n");
}

/* _______________________menu statut d'avion_______________________________________________*/ 

void menuStatut(int id){
    int choix;
    char tmp[30];
    do{
        printf("\n*Statut*\n");
        printf("1. Disponible\n");
        printf("2. En Maintenance\n");
        printf("3. En Vol\n");       
        printf("0. Retourner au menue principal\n");
        printf("Entrer votre choix: ");
        scanf("%d", &choix);
        strcat(tmp, Status[id]);
        switch (choix)
        {
            case 1: 
                    strcpy(Status[id], "Disponible");
                break;
            case 2: strcpy(Status[id], "En Maintenance");
                break;
            case 3: strcpy(Status[id], "En Vol");
                break;
            case 0: break;
            default: printf("\nstaut indisponible");
            break;
        }
    }while(choix!=0);
}



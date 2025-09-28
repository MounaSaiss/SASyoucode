#include<stdio.h>
#include<stdlib.h>
#ifndef FUCTIONS_H
#define FUCTIONS_H
#define maxAvion 100 


typedef struct {
    int Id;
    char T_model[30];
    int capacite;
    char Status[30];
    char dateEntree[30];
}Avion;

// déclaration globale
extern Avion a[maxAvion];
extern int nbrAvion;



void FonctionAjoute(Avion a[]);
void FonctionInitial();
void FonctionAfficher(Avion a[]);
void FonctionModifier(Avion a[]);
void FonctionRecherche(Avion a[]);
void FonctionSuprime(Avion a[]);
void afficheMenu();



#endif 
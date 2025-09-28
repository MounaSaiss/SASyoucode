#include<stdio.h>
#include<stdlib.h>
#ifndef FUCTIONS_H
#define FUCTIONS_H
#define maxAvion 100 

int Id[maxAvion];
char T_model[maxAvion][30];
int capacite[maxAvion];
char Status[maxAvion][20];
char dateEntree[maxAvion][30];
int nbrAvion =2;


void afficheMenu ();
void FunctionAjout();
void FunctionModifier();
void Afficher();
void FonctionSearch();
void FonctionSupprime();
void menuStatut(int id);


#endif 
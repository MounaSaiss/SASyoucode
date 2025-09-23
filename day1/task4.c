#include<stdio.h>
int main (){
float  M;
float Ta,totale;
printf("Veuillez saisie un montant en dollars :");
scanf("%f",&M);
Ta=M*0.05;
totale=Ta+M;
printf ("Montant Avec taxe ajoute est : %f",totale);
    return 0;
}
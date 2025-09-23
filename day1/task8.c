#include<stdio.h>
int main (){
float montant,Taux_interet,Paiment_mensuel;
float taux_mensuel ,somme_pret_taux;
float SR1,SR2,SR3;
printf("Veuillez saisir le montant du pret :");
scanf("%f",&montant);
printf("Veuillez saisir le taux d'interet :");
scanf("%f",&Taux_interet);
printf("Veuillez saisir le paiement mensuel :");
scanf("%f",&Paiment_mensuel);

taux_mensuel=(Taux_interet/100)/12;
somme_pret_taux=montant*taux_mensuel;

SR1=montant+somme_pret_taux-386.66;
SR2=SR1+somme_pret_taux-386.66;
SR3=SR2+somme_pret_taux-386.66;

printf ("Solde restant après le premier paiement : %f\n",SR1);
printf ("Solde restant après le premier paiement : %f\n",SR2);
printf ("Solde restant après le premier paiement : %f",SR3);
    return 0;
}
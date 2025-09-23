#include<stdio.h>
int main (){
float montant,Taux_interet,Paiment_mensuel;
float taux_mensuel ,somme_pret_taux;
float SR;
int i;
printf("Veuillez saisir le montant du pret :");
scanf("%f",&montant);
printf("Veuillez saisir le taux d'interet :");
scanf("%f",&Taux_interet);
printf("Veuillez saisir le paiement mensuel :");
scanf("%f",&Paiment_mensuel);


for (i=1;i<=12;i++){
   taux_mensuel=(Taux_interet/100)/12;
   somme_pret_taux=montant*taux_mensuel;
   SR=montant+somme_pret_taux-Paiment_mensuel; 
  
   printf ("Solde restant après mois %d paiement : %f\n",i,SR);
montant=SR;
}
    return 0;
}
#include<stdio.h>
int main (){
    int numérateur,dénominateur;
    int num_init, den_init ;
    int a,b,PGCD,r;
printf ("Veuillez saisir valeur la fraction  :");
scanf("%d/%d",&numérateur,&dénominateur);

    num_init = numérateur;
    den_init = dénominateur;
do {
    r=numérateur%dénominateur;
    numérateur=dénominateur;
    dénominateur=r;
}while (dénominateur!=0);

PGCD=numérateur;

a=num_init/PGCD;
b=den_init/PGCD;
printf("%d/%d",a,b);


    return 0;
}
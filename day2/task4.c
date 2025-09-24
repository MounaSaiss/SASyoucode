#include<stdio.h>
int main (){
    int m1,m2,j1,j2,a1,a2;
printf ("Veuillez saisie la premier annee :");
scanf ("%d/%d/%d",&m1,&j1,&a1);
printf ("Veuillez saisie la premier annee :");
scanf ("%d/%d/%d",&m2,&j2,&a2);

if (a1<a2)
printf("la premier annee est le plus anncien ");
else if (a1>a2)
printf("la Deuxieme  annee est le plus anncien ");
else {
        if (j1<j2)
        printf("la premier annee est le plus anncien ");
        else if (j1>j2)
        printf("la Deuxieme  annee est le plus anncien ");
        else {
                   if (m1<m2)
                   printf("la premier annee est le plus anncien ");
                   else if (m1>m2)
                   printf("la Deuxieme  annee est le plus anncien ");
        }
}
    
    return 0;
}
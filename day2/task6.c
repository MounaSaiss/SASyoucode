#include<stdio.h>
int main (){
    int m,n,r;
printf ("Veuillez saisir valeur de nombre 1 :");
scanf("%d",&m);
printf ("Veuillez saisir valeur de nombre 1 :");
scanf("%d",&n);

do {
    r=m%n;
    m=n;
    n=r;
}while (n!=0);
printf (" le pgcd est :%d",m);

    return 0;
}
#include<stdio.h>
int main (){
    int X,a,b;
    printf ("Veuillez saisir un nombres de deux chiffres ");
    scanf("%d",&X);
    a=X%10;
    b=X/10;
    printf ("l'inverse est :%d%d",a,b);
    return 0; 
}
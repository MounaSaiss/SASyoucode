#include<stdio.h>
int main (){
    float r,V;
    float pi=3.14159;
    printf("Veuillez saisir le  rayon de sphere:");
    scanf("%f",&r);

    V=(4.0f/3.0f)*pi*r*r*r;

    printf("le volume est :%f",V);
    return 0;
}
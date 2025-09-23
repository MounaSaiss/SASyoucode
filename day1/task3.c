#include<stdio.h>
#include<math.h>
int main (){
    float r,V;
    float pi=3.14159;
    printf("Veuillez saisir le  rayon de sphere:");
    scanf("%f",&r);

    V=(4.0f/3.0f)*pi*pow(r,3);

    printf("le volume est :%f",V);
    return 0;
}
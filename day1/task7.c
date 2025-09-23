#include<stdio.h>
int main (){
    int Md;
    int r1,r2,a,b,c,d;
printf("Veuillez saisir un montant en dollars :");
scanf ("%d",&Md);
a=Md/20;
r1=Md%20;
b=r1/10;
r2=r1%10;
c=r2/5;
d=r2%5;
printf("Billets de 20$ :%d\n",a);
printf("Billets de 10$ :%d\n",b);
printf("Billets de 5$ :%d\n",c);
printf("Billets de 1$ :%d",d);
    return 0;
}
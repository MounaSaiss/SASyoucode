#include<stdio.h>
#include<ctype.h>
int main (){
    char messaj[50];
    char c;
    int i;
printf("Veuillez saisir le messaj :");
scanf(" %[^\n]s", messaj);

printf("En B1FF-speak : ");

for(i=0;messaj[i]!='\0';i++){
    c = toupper(messaj[i]); //convertir en majiscule
if  (c=='A')
printf("4");
else if  (c=='B')
printf("8");
else if  (c=='E')
printf("3");
else if  (c=='I')
printf("1");
else if  (c=='O')
printf("0");
else if  (c=='S')
printf("5");
else 
printf("%c",c); //affiche c
}

printf ("!!!!!!!!!");

return 0;
}
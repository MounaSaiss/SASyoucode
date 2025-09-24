#include<stdio.h>
#include<ctype.h>

int main(){
    char N[50], c;
    int somme = 0;
    int i;

    printf("Entrer un mot: ");
    scanf("%s", N);

    for(i=0; N[i] != '\0';i++){
        c = toupper(N[i]);
        if(c == 'A' || c == 'E' || c == 'I' ||c == 'L' || c == 'N' || c == 'O' || c == 'R' || c == 'S' || c == 'T' || c == 'U')
        somme += 1;
        else if(c == 'D' || c == 'G')
        somme += 2;
        else if(c == 'B' || c == 'C' || c == 'M' ||c == 'P')
        somme += 3;
        else if(c == 'F' || c == 'H' || c == 'V' ||c == 'W' || c == 'Y')
        somme += 4;
        else if(c == 'K' )
        somme += 5;
        else if(c == 'J' ||  c == 'X' )
        somme += 8;
        else if(c == 'Q'|| c == 'Z')
        somme += 10;
    } 
printf("Valeur de scrable : %d",somme);
}
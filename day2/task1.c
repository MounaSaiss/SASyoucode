#include<stdio.h>
int main(){

    char isbn[100];
    int i, group=1;

    printf("Entrer l'ISBN: ");
    scanf("%s", isbn);

    printf("le prefixe GS1 : ");
    
    for(i=0; isbn[i]!='\0'; i++){ 
        if(isbn[i] == '-'){
            group++;
            switch(group){
                case 2: printf("\nIdentifiant de groupe:");
                        break;
                case 3: printf("\nCode de l'editeur :");
                        break;
                case 4: printf("\nNumero d'article:");
                        break;
                case 5: printf("\nChiffre de controle:");
                        break;
            }
        }else{
            printf("%c", isbn[i]);
        }
    }
        return 0;
    }
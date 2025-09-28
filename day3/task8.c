#include<stdio.h>
#include<string.h>

int main(){
    char Phrase[100];
    char fin;
    int i, j, len;

    printf("Entrer votre message: ");
    i=0;
    while((Phrase[i] = getchar()) != '.' && Phrase[i] != '!' && Phrase[i] != '?'){
        i++;
    }
    fin = Phrase[i];
    Phrase[i] = '\0';

    len = strlen(Phrase);

    printf("\nInversion de la phrase : ");
    //parcour de la fin vers le debut
    for(i= len-1; i>=0; i--){
        if(Phrase[i] == ' ' || i==0){
            if(i==0)
                j=0;
            else
                j = i+1;
        //afficher le mot
        while(Phrase[j] != ' ' && Phrase[j] != '\0'){
            putchar(Phrase[j]);
            j++;
        }
        putchar(' ');
    }
    }
    printf("%c", fin);
    return 0;
}
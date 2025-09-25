#include<stdio.h>
#include<stdbool.h>
int main(){
    int digit_seen[10]={false};
    int digit;
    int  i,n; 


    do {
         
        printf("Entrer un nombre: ");
        scanf("%d", &n);
            if(digit_seen[n]== false)
                digit_seen[n] += 1;
            else
                digit_seen[n] +=1;
    
    } while(n>0);
       
        
        printf("les chiffres repetes:\n ");
        for(int i=0; i<10;i++){
            printf("%d ->  %d  \n", i, digit_seen[i]);
        }
    return 0;
}
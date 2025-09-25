#include<stdio.h>
#include<stdbool.h>
int main(){
    int digit_seen[10]={false};
    int digit;
    long n; 

        printf("Entrer un nombre: ");
        scanf("%ld", &n);

        while(n > 0){
            digit = n%10;
            if(digit_seen[digit]== false)
                digit_seen[digit] += 1;
            else
                digit_seen[digit] +=1;
            n/=10;
        }
        
        printf("les chiffres repetes:\n ");
        for(int i=0; i<10;i++){
            printf("%d ->  %d  \n", i, digit_seen[i]);
        }
    return 0;
}

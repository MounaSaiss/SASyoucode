#include<stdbool.h>
#include<stdio.h>
int main (){
    bool digit_seen[10]={false}; /*declarer un tableau en 10 dimense false mean that*/
    int digit ;
    long n ;
    long found = false; 
printf("Entrer un nombre :");
scanf("%d",&n);

while (n>0){
    digit =n % 10;
    if (digit_seen[digit])
    {
    printf ("%d",digit);
    found = true;
    }

    digit_seen[digit]=true;
    n/=10;
}


    return 0 ;
}
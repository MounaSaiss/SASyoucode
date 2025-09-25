#include<stdbool.h>
#include<stdio.h>
int main (){
    bool digit_seen[10]={false}; 
    int digit ;
    long n ;
    long found = false; 
    int i;
do { 

printf("Entrer un nombre :");
scanf("%d",&n);

if (n<=0){
    break ;
}

for (i=0;i<10;i++){
    digit_seen[i]==false;
}
found =false;

while (n>0){
    digit =n % 10;
    if (digit_seen[digit]==true){
        found = true;
        n/=10;
    }
    
}
if (found )
   printf("Le nombre %ld contient des chiffres repetes.\n", n);
else 
   printf("Le nombre %ld ne  pas de chiffres repetes.\n", n);
}while(n>0);



    return 0 ;
}
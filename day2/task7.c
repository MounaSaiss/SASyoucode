#include<stdio.h>
int main(){
    int N,i,R;
printf("Veuillez saisir un nombre entier :");
scanf("%d",&N);
for(i=1;i<=N;i++){
    if ((i*i)%2==0 && i*i<=N)
printf ("%d\n",i*i);
}
    return 0;
}
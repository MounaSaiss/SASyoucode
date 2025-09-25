#include<stdio.h>
//#define N 10;
int main(){
int a[10],i;
int N = (int)(sizeof(a) / sizeof(a[0])); 

printf("Entrer %d nombres :",N);
for (i=0;i<N;i++)
scanf("%d",&a[i]);

printf ("dans l'ordre inverse :\n");
for (i=N-1;i>=0;i--)
printf("%d\n",a[i]);

    return 0;
}
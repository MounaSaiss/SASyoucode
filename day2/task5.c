#include<stdio.h>
int main () {
    int a ;
    int N;
printf("Veuillez saisir une note numérique :");
scanf("%d",&a);

N=a/10;
if (N/10==0){
 switch (N){
        case 0  : printf ("Note littérale : F");
                 break ;
        case 1  : printf ("Note littérale : F");
                 break ;
        case 2  : printf ("Note littérale : F");
                 break ;
        case 3  : printf ("Note littérale : F");
                 break ;
        case 4  : printf ("Note littérale : F");
                 break ;
        case 5  : printf ("Note littérale : F");
                 break ;
        case 6  : printf ("Note littérale : D");
                 break ;
        case 7  : printf ("Note littérale : C");
                 break ;
        case 8  : printf ("Note littérale : B");
                 break ;
        case 9  : printf ("Note littérale : A");
                 break ;
        default : printf ("la note non trouvable");
                break ;
    }
}else if (N/10==1)
   printf ("Note littérale : A");
else 
   printf (" impossible de saisie cette note ");
   
return 0;
}


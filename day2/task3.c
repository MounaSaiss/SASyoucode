#include<stdio.h>
int main (){
    int h,m,T;
    printf ("Entrez l'heure (24h) : ");
    scanf ("%d:%d",&h,&m);
    
    T=(h*60)+m;

if (T>480 && T<574)
printf ("L'heure de depart la plus proche est 8h00 a.m, arrivant a 10h16 a.m.");
else if  (T>574 && T<679)
printf ("L'heure de depart la plus proche est 9h43 a.m., arrivant a 11h52 a.m.");
else if  (T>679 && T<767)
printf ("L'heure de depart la plus proche est 11h19 a.m., arrivant a 1h31 p.m.");
else if  (T>767 && T<840)
printf ("L'heure de depart la plus proche est 12h47 p.m., arrivant a 3h00 p.m.");
else if  (T>840 && T<945)
printf ("L'heure de depart la plus proche est 2h00 p.m., arrivant a 4h08 p.m.");
else if (T>945 && T<1140)
printf ("L'heure de depart la plus proche est 3h45 p.m., arrivant a 5h55 p.m.");
else if (T>1140 && T<1305)
printf ("L'heure de depart la plus proche est 7h00 p.m., arrivant a 9h20 p.m.");
else 
printf ("L'heure de départ la plus proche est 9h45 p.m., arrivant a 11h58 p.m.");
return 0;
}
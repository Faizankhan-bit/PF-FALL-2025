#include<stdio.h>
int main ()
 {
   int days;
printf ("Enter days (1-7):"); 
scanf ("%d", &days);
switch (days){

case 1: 
printf ("Monday") ; 
break;
case 2:
 printf ("Tuesday");
  break;
case 3:
 printf ("Wednesday") ;
  break;
case 4:
 printf ("Thrusday"); 
 break;
case 5: 
printf ("Friday");
break;
case 6: 
printf ("saturday");
break;
case 7:
 printf ("sunday"); 
 break;
default:
 printf ("This is not a valid input");

 return 0;
}
}

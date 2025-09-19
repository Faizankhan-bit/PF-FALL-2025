#include<stdio.h>
int main()
{
int num1, num2;
printf("Input the value of numi: ");
scanf("%d",&num1);
printf("Input the value of num2:");
scanf ("%d", &num2);
if(num1 != num2){
printf ("numi is not equal to num2\n");
}
if(num1>num2) {
printf ("numi is greater than num2\n");
}
else if(num2>num1) {
printf("num2 is greater than num1");
}
else{

printf("num1 is equal to num2");
}
 
   return 0;
}

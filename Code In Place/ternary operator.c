#include<stdio.h>
int main()
{
int num1, num2;
printf("Input the value of numi: ");
scanf ("%d", &num1);
printf("Input the value of num2:");
scanf ("%d", &num2);

    //using ternary operator
    (num1 != num2)
            ? ((num1>num2)
                   ? printf("num1 is not equal than to num2\n num1 is greater than num2\n ")
                   : printf("num1 is not equal than to num2\n num2 is greater than num1\n "))
                   :printf("num1 is equal to num2");
                   return 0;
               }
			
			
			
			
			

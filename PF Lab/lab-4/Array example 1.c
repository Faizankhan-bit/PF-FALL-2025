#include<stdio.h>
int main(){
   int avg, sum=0;
   int i;
   int marks[5];
   for(i=0; i<5; i++){
   	 printf("Enter Student marks: ");
   	 scanf("%d",&marks[i]);
   }	
   for(i=0; i<5; i++){
   	sum = sum + marks[i];
   }
   avg = sum/5;
   printf("The avg marks are:%d\n ",avg);
   printf("The total marks are:%d\n ",sum);
	
	
	return 0;
}

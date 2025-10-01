#include<stdio.h>
int main(){
	
	int year;
	//Input year
	printf("Enter year: ");
	scanf("%d",&year);
	
	//Check leap year
	if((year%400==0) || (year%4==0 && year%100!=0))                      
	 printf("The year is a leap year");
	 
	 else
	 printf("The year is not a leap year");
	return 0;
}

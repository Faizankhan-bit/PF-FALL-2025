#include<stdio.h>
int main(){
     int day,month,dayofyear;
    
	int monthdays[]= {31,28,31,30,31,30}; 
    
     printf("Enter month(1-6):");
     scanf("%d",&month);
     
     printf("Enter day of month:");
     scanf("%d",&day);
     
     if(month<1 || month>6 || day<1 || day>monthdays[month-1]  ){
     	printf("invalid date! please enter date between jan 1 - june 30\n");
     	return 0;
	 }
	 dayofyear=day;
	 int i;
	 for(i=0; i<month-1; i++ ){
	 	dayofyear=dayofyear+monthdays[i];
	 }
	 
	 printf("Day of the year=%d\n",dayofyear);
	 
	 if(dayofyear>=1 && dayofyear<=50 ){
	 	printf("Skill Programming\n");
	 }
	 else if(dayofyear>=51 && dayofyear<=100 ){
	 	printf("Skill Social Marketing");
	 }
	 else if(dayofyear>=101 && dayofyear<=181 ){
	 	printf("Skill Entrepreneurship\n");
	 }
	 else{
	 	printf("invalid range");
	 }
     
	return 0;
	
}   

#include<stdio.h>
int main()
{
	int program, Year;
	printf("Select your field:\n ");
	printf("1, Computer Science\n");
	printf("2, Electrical Engineering\n");
	printf("Enter your choice:");
	scanf("%d",&program);
	
	switch(program){
		case 1 :
		printf("\nYou have Selected Computer Science\n");
		printf("Select your year:\n ");
		printf("1, 1st year\n");
		printf("2, 2nd year\n");
		printf("Enter your choice:");
		scanf("%d",&Year);
	
		
	switch(Year){
		case 1 :
		   printf("\nYou have selected 1st year\n");
		   printf("The courses you have are:\n Programming fundamentel\n Applied physics\n ITFA");
		  
		   break;
		   
		case 2 : 
		   printf("\nYou have selected 2nd year\n");
		   printf("The courses you have are:\n Data Structure Algorithms and Application\n Differential Equation"); 
		   
		   break;
		 default :
		 printf("INVALID YEAR");  
		}	
		break;
		
		
		case 2 :
		printf("\nYou have Selected Electrical Engineering\n");
		printf("Select your year:\n ");
		printf("1, 1st year\n");
		printf("2, 2nd year\n");
		printf("Enter your choice:");
		scanf("%d",&Year);
		
		switch(Year){
			case 1 :
				printf("\nYou have selected 1st year\n");
		   printf("The courses you have are:\n Engineering Chemistry\n Engineering physics\n calculus");
		   break;
		   
		   case 2 :
		   	   printf("\nYou have selected 2nd year\n");
		   printf("The courses you have are:\n Signals and Systems\n Electrical Machines\n Electrical Circuit Theory");
		   break;
		   
		   default :
		   	printf("INVALID YEAR");
			
		}
		break;
	}
	
	return 0;
}

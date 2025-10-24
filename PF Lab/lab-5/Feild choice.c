#include<stdio.h>
int main(){

	int dept, subDept;
	printf("Select your deparment:\n");
	printf("1, CS (Computer Sscience)\n");
	printf("2, EE (Electrical Engineering)\n");
	printf("Enter your choice:");
	scanf("%d",&dept);
	
	switch(dept){
		case 1 : // CS Department
	   printf("You selected Computer Science.\n");
	   printf("Choose your specialization:\n");
	   printf("1, CSIT\n");
	   printf("2, CSDS\n");
	   printf("3, CSCR\n");
	   scanf("%d",&subDept);
	   
switch(subDept)
	{
		case 1:
		 printf("you selected CSIT.\n");
		break;
		
		case 2:
		 printf("you selected CSDS.\n");
		break;
		
		case 3:
		 printf("you selected CSCR.\n");
		break;
	 
		default:
			printf("invalid input");
			
	}
	break;
	
	{
		case 2: // EE department
	  printf("You selected Electrical Engineering");
	 
	  break;
	 
		default:
		printf("invalid input");
	 
	  
	}
   }
	return 0;
	
}
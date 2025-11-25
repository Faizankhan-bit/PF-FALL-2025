#include<stdio.h>
void assignPosition(){         
   int marks; 
   float experience;
	
	printf("Enter your marks: ");
	scanf("%d",&marks);
	
	if(marks>=50 && marks < 60){
		printf("Your are selected for the post of trainee engineer\n");
		}
		else if(marks>=60){
				printf("Enter your years of experience: ");
                scanf("%f",&experience);
			if(marks>=70 && experience>=2){
				printf("you are selected for assistent developer");
			}	
			else if(marks>=60 && experience>=1){
				printf("you are selected for associate developer");    		
		}
		else{
			printf("sorry. you do not meet the experience criteria");
		}
}
       else{
       	printf("you do not qualify for any position");
	   }
}
int main(){
	assignPosition();
	return 0;
}


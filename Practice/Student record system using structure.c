#include<stdio.h>


#define MAX 5

struct student{
	int roll_no;
	float marks;
    char name[20];
};
  
  int main(){
  	struct student s[MAX];
  	int i;
  	
  	printf("===Student record system using structure===\n\n");
  	
  	for(i=0; i<MAX; i++){
  		printf("Enter details of student %d:\n",i+1);
  		printf("Enter roll no.:\n ");
  		scanf("%d",&s[i].roll_no);
  		
  		printf("Enter marks:\n ");
  		scanf("%f",&s[i].marks);
  		
  		printf("Enter name:\n ");
  		scanf("%s", s[i].name);
  		
  		printf("\n");
  		
	  }
	  
	  printf("===Displaying Student Records===\n");
	  
	  for(i=0; i<MAX; i++){
	  	
	
	  printf("Student :\n",i+1);
	  printf("Roll no. %d\n",s[i].roll_no);
	   printf("Marks %.2f\n",s[i].marks);
	    printf("Name %s\n",s[i].name);
	     printf("--------------------");
  	  }
  	return 0;
  }
 

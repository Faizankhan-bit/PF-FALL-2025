#include<stdio.h>

#define MAX_STUDENT 3
#define MAX_DEPT 3

  struct dept{
  	int deptID;
  	char deptName[30];
  };
  
  struct student{
  	int roll_no;
  	int deptID;
  	char name[30];
  };
  
  int main(){
  	struct dept d[MAX_DEPT];
  	struct student s[MAX_STUDENT];
  	int i,j;
  	
  	 printf("===Enter Department Details===\n\n");
  	    for(i=0; i<MAX_DEPT; i++){
  	    	printf("Enter %d department Id:\n",i+1);
  	    	scanf("%d",&d[i].deptID);
  	    	printf("Enter %d department name:\n",i+1);
  	    	scanf("%s",&d[i].deptName);
		  }
		  printf("\n==Enter Student Details===\n\n");
		  
  	 for(i=0; i<MAX_STUDENT; i++){
  	 	printf("Enter %d roll no.:\n",i+1);
  	 	scanf("%d",&s[i].roll_no);
  	 	printf("Enter %d name:\n",i+1);
  	 	scanf("%s",&s[i].name);
  	 	printf("Enter %d department Id:\n",i+1);
  	    	scanf("%d",&s[i].deptID);
	   }
	   printf("\n===Displaying Student Details with Department===\n\n");
	   
	   for(i=0; i<MAX_STUDENT; i++){
	   	printf("student:%d\n",i+1);
	   	printf("roll no.:%d\n",s[i].roll_no);
	   		printf("name:%s\n",s[i].name);
	   			printf("Department ID:%d\n",s[i].deptID);
	   			
	   	int found = 0;		
	   	for(j=0; j<MAX_DEPT; j++){
	   		if(s[i].deptID == d[j].deptID ){
	   			printf("Department name : %s\n",d[j].deptName);
	   			found = 1;
	   			break;
			   }
		   }
		   if(!found){
		   	printf("Department Name : Invalid Department ID\n");
		   }
		   printf("----------------------\n");
	   }
	   
  	
  }

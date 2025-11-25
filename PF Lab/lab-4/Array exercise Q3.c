#include<stdio.h>
#include<string.h>
int main(){
	char firstname[50];
	char lastname[50];
	char fullname[100];
	
	printf("Enter your first name: ");
	gets(firstname);
	
	printf("Enter your last name: ");
	gets(lastname);
	
	strcpy(fullname,firstname);
	strcat(fullname," ");
	strcat(fullname,lastname);
	
	int count = strlen(fullname);
	
	printf("Full name: %s\n",fullname);
	printf("The number of character are: %d",count);
	
	return 0;
}

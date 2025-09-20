#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z'){
		printf("This is an uppercase letter");
	}
	else if(ch>='a' && ch<='z'){
		printf("This is a lowercase letter");
	}
	else if(ch>='0' && ch<='9'){
		printf("This is a digit");
	}
	else {
		printf("This is a special character");
	}
	return 0;
}

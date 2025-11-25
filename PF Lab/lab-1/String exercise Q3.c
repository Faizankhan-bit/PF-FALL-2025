#include<stdio.h>
#include<string.h>
int main(void){
	char str1[100],str2[100];
	
	printf("Enter firat string: ");
	scanf(" %[^\n]",str1);
	printf("Enter second string: ");
	scanf(" %[^\n]",str2);
	
	
	int result = strcmp(str1, str2);
	if(result == 0){
		printf("Both strings are equal");
	}
	else if(result > 0){
		printf("Strings are not equal. First string is greater than second string");
	}
	else{
		printf("Strings are not equal. second string is greater than first string");
	}
}

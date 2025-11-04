#include<stdio.h>
#include<string.h>
int main(){
	char arr[]="Hello";
	char dest[8];
	
	strcpy(dest,arr);
	
	printf("dest = %s",dest);
	return 0;
}

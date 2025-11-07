#include<stdio.h>
#include<string.h>
int main(){
	char pf[]={'P','r','o','g','r','a','m','m','i','n','g','\0'};
	char arr[20];
	
	strncpy(arr,pf,4);
	arr[4]='\0';
	
	printf("Copied string: %s",arr);
	return 0;
	
}

#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	puts("Enter a string: ");
	scanf("%[^\n]s",str);
	
	int i,j,k=0;
	int size = 0;
	while(str[k] != '\0'){
		size++;
		k++;
	}
	for(i=0,j = size-1; i<=j; i++,j-- ){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	puts("The reveerse string is: ");
	puts(str);


  	return 0;
  }

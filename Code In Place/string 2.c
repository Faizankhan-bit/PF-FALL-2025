#include<stdio.h>
#include<string.h>
int main(){
	char str1[15]= "Faizan";
	char str2[]= " Khan";
	
	strcat(str1,str2);
	
	printf("str1 = %s",str1);
	return 0;
}

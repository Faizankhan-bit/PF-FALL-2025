#include<stdio.h>
int main()
{
	int i,n,fact=1;
	scanf("%d",&n);
	
	if(0>n){
		printf("Negative number entered. Exiting program.");
		return 0;
	}
	
	for(i=1; i<=n; i++){
	
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}

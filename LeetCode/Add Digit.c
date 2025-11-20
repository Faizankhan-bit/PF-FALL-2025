#include<stdio.h>
int addDigit(int n){
   
   if (n == 0)
   	return 0;
   	
   	return 1 + (n - 1 ) % 9;
   
} 


int main(){
	int n;
	scanf("%d",&n);
	
	printf("%d",addDigit(n));
	return 0;
}

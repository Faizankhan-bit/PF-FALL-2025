#include<stdio.h>
int sumOfsquares(int n){
	int sum=0,digit;
	
	while(n > 0){
	digit = n % 10;
	sum += digit * digit;
	n /= 10;
		}
	return sum;
}

int ishappy(int n){
  	 int slow=n, fast=n;
	do{

	slow = sumOfsquares(slow);
	fast = sumOfsquares(sumOfsquares(fast));
	
   if(fast == 1)
   	return 1;
   	
   }while(slow!=fast);
   
   return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	
	if(ishappy(n)){
		printf("True");
		
	}
	else{
		printf("False"); 
	}
	return 0;
}

#include<stdio.h>

 
  int sumNatural(int n){
  	if(n==1)
      	return 1;
      	
  	else  return n + sumNatural(n-1);
  }
  int main(){
  	int n=5;
  	printf("Sum of fisrt n natural number is %d ", sumNatural(n));
  	
  	return 0;
  }

#include<stdio.h>
int isPalindrome(int num) {
	 int temp,remainder,reversed=0;
	 temp = num;
	 
	    
	 while(num!=0){
	 	remainder = num % 10;
	 	reversed = (reversed*10)+remainder;
	 	num = num/10;
	 }

	
  if(temp==reversed){
  	return 1;
  }else
  {
  	return 0;
  }
	
}


int main(){
	int n;
	scanf("%d",&n);
	
	if(n<0){
	 	printf("false");
	 	return 0;
	 }
	if(isPalindrome(n)){
		printf("true");
	}	
	else{
		printf("false");
	}
}






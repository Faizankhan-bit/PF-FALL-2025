#include<stdio.h>
int main(){
     int num,remainder,originalNum,reversed=0;
     printf("Enter value of num:");
     scanf("%d",&num);
     
     originalNum = num;
     
    while(num!=0){
    	remainder=num%10;
    	reversed=(reversed*10)+remainder;
    	num=num/10;
	}
	if(originalNum == reversed ){
		printf("%d is a palindrome number.\n",originalNum);
	}
	else{
		printf("%d is not a palindrome number.\n",originalNum);
	}
	
	return 0;
	
}   

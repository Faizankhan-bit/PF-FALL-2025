#include<stdio.h>
int main(){
	int n, num, i, sum=0, reversed=0;
	int temp;
	
	printf("Enter five digit number: ");
	scanf("%d",&num);
	
    n = num;
	while(n != 0){
		temp = n % 10;
		sum = sum + temp;
		n = n/10; 
	}
		printf("Sum = %d\n",sum);
		 
	if( sum % 2 == 0){
		int flag = 1;
		if(num < 2)
			flag = 0;
	for(i=2; i<= num/2; i++){
		if(num % i == 0){
	
		flag = 0;
		break;
			}
	}
	
	if(flag == 1){
	
	printf("%d is Prime number\n",num);
	}
	else{
			printf("%d is not a Prime number\n",num);
		
	}
	}
else{	
	n = num;
	while(n != 0){
		temp = n % 10;
		reversed = (reversed*10) + temp;
		n = n/10;
	}
	if(reversed == num){
		printf("%d is a palindrome number\n",reversed);
	}
	else{
		printf("%d is not a palindrome number\n",reversed);
	}
	
		}
	
	return 0;
}

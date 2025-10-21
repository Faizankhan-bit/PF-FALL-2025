#include<stdio.h>
int main(){
		int num,remainder,digit,reversed=0;
	printf("Enter a number: ");
	scanf("%d",&num);

	
	
	while(num!=0){
		digit=num%10;
		reversed=reversed*10+digit;
		num=num/10;
	}
	printf("The reverse number are:%d",reversed);
	
	return 0;
}

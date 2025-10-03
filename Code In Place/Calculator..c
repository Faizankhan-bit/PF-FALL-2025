#include<stdio.h>
int main()
{
	int num1, num2;
	char op;
	printf("Enter the value of num1: ");
	scanf("%d",&num1);
	
	printf("Enter operator (+, -, *, / , %%): ");
	scanf(" %c",&op);
	
	printf("Enter the value of num2: ");
	scanf("%d",&num2);
	
	
	
	switch(op){
	case '+':
		printf("result : %d\n",num1+num2);
		break;
		
	case '-':
		printf("result : %d\n",num1-num2);
		break;	
		
	case '*':
		printf("result : %d\n",num1*num2);
		break;	
	
	case '/':
		if(num2 == 0 ){
			printf("Error: Division by zero is not allowed");
		}
		else{
			printf("result : %d\n",num1/num2);
		}
		break;
	
	case '%':
		if(num2 == 0 ){
			printf("Error: Modulus by zero is not allowed");
		}
		else{
			printf("result : %d\n",num1%num2);
		}
		break;
	
		
	default :
	  printf("Invalid operator");		
		
}
	
	return 0;
}

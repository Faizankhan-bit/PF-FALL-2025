#include<stdio.h>

float roundTwo(float x){
	float result;
	result = (int)(x * 100 + 0.5)/100.0;
	return result;
}
int main(){
	float num,roundedvalue;
	printf("Enter positive number: ");
	scanf("%f",&num);
	
	roundedvalue = roundTwo(num);
	printf("rounded value: %.2f",roundedvalue);
	
	return 0;
}

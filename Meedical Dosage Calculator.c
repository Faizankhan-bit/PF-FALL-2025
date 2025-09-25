#include<stdio.h>
int main()
{
	float weight, dosage;
	
	//prompt the user to enter patient`s weight
	printf("Enter the patient`s weight: ");
	scanf("%f",&weight);
	
	//calculate using the formula
	dosage=weight*0.8;
	
	printf("the dosage(mg) for the patient is %.2f",dosage);
	return 0;
}

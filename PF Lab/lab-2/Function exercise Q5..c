#include<stdio.h>      

void instruction(){
	printf("\n===This Program will calculates the total cost of house after 5 yrs===\n");
	printf("you have to entered\n");
	printf("1. Initial cost\n");	
	printf("2. Annual fuel cost\n");
	printf("3. Annual tax rate\n");		
}
int main(){
	float initialcost, annualfuel, taxrate;
	float totalcost, fuelfor5yrs, taxfor5yrs;
	
	instruction();
		
	printf("Enter initial house cost: \n");
	scanf("%f",&initialcost);
	
	printf("Enter annual fuel cost: \n");
	scanf("%f",&annualfuel);
	
	printf("Enter annual tax rate(example: 0.025): \n");
	scanf("%f",&taxrate);
	
	fuelfor5yrs = annualfuel * 5;
	taxfor5yrs = (initialcost * taxrate) * 5;
	totalcost = fuelfor5yrs + taxfor5yrs + initialcost;
	
	printf("The total cost of house after 5 yrs is: %.2f",totalcost);
	
	return 0;
		
}

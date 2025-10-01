#include<stdio.h>
int main()
{
	int units;
	float bill=0;
	//enter consumed units
	printf("Enter electricity units consumed: ");
	scanf("%d",&units);
	
	//calculate bill
	if(units<=100){
		bill = units*5;
	}
	else if(units<=200){
		bill = units*5+(units-100)*7;
	}
	else{
		bill = units*5+units*7+(units-200)*10;
	}
	printf("Electricity bill = Rs %.2f",bill);
	return 0;

}

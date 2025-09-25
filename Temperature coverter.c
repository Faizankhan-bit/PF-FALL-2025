#include<stdio.h>
int main()
{
	float tempCelsius, tempFahrenheit;
	
	//Take input in Celsius
	printf("Enter Temperature in Celsius:");
	scanf("%f",&tempCelsius);
	
	//Convert it into Fahrenheit
	tempFahrenheit = ((tempCelsius)*9/5)+32;
	printf("The Temperature in Fahrenheits is: %.2f",tempFahrenheit);
	
    //Check conditions  
	 if(tempCelsius>=30){
	 	printf("\nIt's hot! Stay hydrated and wear light clothes");
	 }	
	  else if(tempCelsius>=20 && tempCelsius<=29){
	 	printf("\nNice Weather! Perfect for outdoor activities");
	 }
	  else if(tempCelsius>=10 && tempCelsius<=19){
	 	printf("\nCool Weather. Wear a light jacket.");
	 }
	  else if(tempCelsius>=0 && tempCelsius<=9){
	 	printf("\nCool! Wear warm clothes.");
	 }
	 else if(tempCelsius<0){
	 	printf("\nFreezing! Stay  indoors and bundle up");
	 }
	
	 
	 return 0;
}

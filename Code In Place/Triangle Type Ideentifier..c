#include<stdio.h>
int main()
{   int Side1, Side2, Side3;
   
   //input sides
    printf("Enter the 1st side of triangle: ");
    scanf("%d",&Side1);
    
     printf("Enter the 2nd side of triangle: ");
    scanf("%d",&Side2);
	
	 printf("Enter the 3rd side of triangle: ");
    scanf("%d",&Side3);
    
    //check if valid triangle
    if((Side1 + Side2 > Side3) && (Side1 + Side3 > Side2) && (Side2 + Side3 > Side1)) {
    	if(Side1==Side2 && Side2==Side3)
    	printf("This is an equilateral Triangle");
    	else if(Side1==Side2 || Side2==Side3 || Side1==Side3)
    	printf("This is an isosceles triangle");
    	else
    	printf("This is a scalene triangkle");
	}
	else{
		printf("The given sides do not form a valid triangle");
	}
	return 0;
}

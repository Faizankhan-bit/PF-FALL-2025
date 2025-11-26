#include<stdio.h>
int main(void){
	float arr[20];
	float *ptr = arr;
	float highest,second_highest;
	int i;
	
	printf("Enter 20 float number: ");
	for(i=0; i<20; i++){
		scanf("%f", (ptr + i));
	}
	
	if(*ptr > *(ptr + 1)){
		highest = *ptr;
		second_highest = *(ptr + 1);
	}
	 else{
		second_highest = *ptr;
		highest = *(ptr + 1);
	}
	
	for(i=2; i<20; i++){
		if(*(ptr + i) > highest ){
			second_highest = highest;
			highest = *(ptr + i);
		}
		else if(*(ptr + i) > second_highest && *(ptr + i) != highest ){
				second_highest = *(ptr + i);
			}
		
	}
	printf("The second highest number is: %.2f ",second_highest);
	
	
	 
}

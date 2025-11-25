#include<stdio.h>

int h,a;

void getData(int x, int y);
float volumecal();

int main(){
	getData(0,0);
	return 0;
}

void getData(int x, int y){
  	
  	printf("Enter the height: ");
  	scanf("%d",&h);
  	
  	printf("Enter the base length: ");
  	scanf("%d",&a);
  	
  	volumecal();
  	
  }
float volumecal(){
	float v;
	
	v = (a*a*h)/3.0;
	printf("The volume is: %.2f", v);
	return v;
}  

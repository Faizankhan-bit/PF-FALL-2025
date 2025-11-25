#include<stdio.h>
int main(){
	int size, i;
	float Allsum=0, PositiveSum=0, avg;\
	
	printf("Enter the size of Array: ");
	scanf("%d",&size);
	
	int arr[size];
     printf("Enter elements of array:\n");
     for(i=0; i<size; i++){
     	scanf("%d",&arr[i]);
     	
     	Allsum = Allsum + arr[i];
     	
     	if(arr[i] > 0 )
     	   PositiveSum += arr[i];
	 }
	 avg = Allsum/size;
	 
	 printf("The sum of all postive element is : %.2f\n",PositiveSum);
	 printf("The avg of all number is: %.2f\n",avg);
	 
	 return 0;
}

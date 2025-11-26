#include<stdio.h>
int main(void){
	int n,i;
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	
	int arr[n];
	int *ptr = arr;
	int sum = 0;
	
	printf("Enter the elements: ");
		for(i=0; i<n; i++){
			scanf("%d",(ptr + i));
		}
	for(i=0; i<n; i++){
		sum += *(ptr + i);
	}	
	printf("The sum of elements are: %d",sum);
}

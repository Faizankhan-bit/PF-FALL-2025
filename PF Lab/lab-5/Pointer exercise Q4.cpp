#include<stdio.h>
 
void sortfunction(int *arr, int*size, int order){
	int n = *size;
	int i,j,temp;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			
			if(order == 1 && *(arr + j) > *(arr + j + 1)){
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
			else if(order == 2 && *(arr + j) < *(arr + j + 1)){
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
		}
	}
}
}
int main(){
	int size;
	int i;
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter %d integer:\n",size);
	for(i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	int order;
	printf("Enter your order(1 = Asscending, 2 = Descending): ");
	scanf("%d",&order);
	
	if(order != 1 && order !=2 ){
		printf("Invalid choice!");
		return 0;
	}
	
	sortfunction(arr,&size,order);
	
	printf("\n===sorted array===\n");
	for(i=0; i<size; i++){
		printf("%d",arr[i]);
		
	}
	return 0;
}

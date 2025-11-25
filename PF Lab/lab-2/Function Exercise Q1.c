#include<stdio.h>

 void countfreq(int arr[], int size){
 	int counted[100] = {0};
 	int i,j;
 	
 	printf("\nvalue | Frequency\n");
 	printf("---------------------\n");
 	
 	for(i=0; i<size; i++){
 		int value = arr[i];
 		
 		if(counted[value] == 1)
 			continue;
 			
 			
 		int count = 0;
		for(j=0; j<size; j++){
			if(arr[j] == value)
				count++;
		} 	
		counted[value] = 1;
		printf(" %d | %d\n ",value,count);
	 }
 }
 int main(){
 	int size;
 	int i;
 	
 	printf("Enter size of array: ");
 	scanf("%d",&size);
 	
 	int array1[size];
 	
 	printf("\nGenerated Array\n");
 	for(i=0; i<size; i++){
 		array1[i] = rand() % 11;
 		printf("%d ",array1[i]);
	 }
	 countfreq(array1,size);
	 
	 return 0;
 	
 }

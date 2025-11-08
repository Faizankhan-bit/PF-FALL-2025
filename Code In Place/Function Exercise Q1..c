#include<stdio.h>
  void CountFrequency(int array[], int size){
  	int freq[11]={0};
  	int i;
  	
  	 for(i=0; i<size; i++ ){
  	 	freq[array[i]]++;
	   }
	   printf("Value\tFrequency\n");
	   for(i=0; i<=10; i++ ){
	   	if(freq[i]>0){
	   		printf("%d \t %d",i,freq[i]);
		   }
	   }
  }
  int main(){
  	int size,i;
  	printf("Enter size of array: ");
  	scanf("%d",&size);
  	
  	int array1[size];
  	printf("Enter %d number (between 0 to 10):");
  	for(i=0; i<size; i++ ){
  		scanf("%d",&array1[i]);
	  }
	 CountFrequency(array1,size);
	 return 0;
  }

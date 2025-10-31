#include<stdio.h>

int main(){
     int arr[]={1,2,3,4};
     int n=4;
	 int i,count=0;
	 
	 for(i=0;i<n;i++){
	 	if(arr[i] % 2 ==0){
	 		count++;
	 	
		 }
		 
	 }
	 printf("The total even numbers are : %d",count);
     
     
	return 0;
}

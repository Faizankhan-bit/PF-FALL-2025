#include<stdio.h>

int main(){
     int arr[]={1,2,3,4};
     int n=4;
	 int i,first,second;
	 
	 first=second=arr[0];
	 
	 for(i=1; i<n; i++){
	 	if(arr[i]>first){
	 		second=first;
	 		first=arr[i];
		 }
		 else if(arr[i]>second && arr[i] !=first ){
		 	second = arr[i];
		 }
	 	
	 } 
	 printf("The two largest number are %d %d",second,first);
	 
	return 0;
}

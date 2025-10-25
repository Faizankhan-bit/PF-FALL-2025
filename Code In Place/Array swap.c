#include<stdio.h>

int main(){
     int arr[4]={1,2,3,4};
     int n=4;
	 int i,swap;
     
     for(i=0 ; i<n/2;i++){
	swap=arr[i];
	arr[i]=arr[n-i-1];
	arr[n-i-1]=swap;
	 }
	 printf("Reversed array: ");
	 for(i=0;i<n;i++){
	 	printf("%d",arr[i]);
	 	
	 }
     
     
	return 0;
}

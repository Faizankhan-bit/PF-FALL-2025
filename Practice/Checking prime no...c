#include<stdio.h>
 
 int main(){
 	int i,n;
 	int not_prime=0;
 	printf("Enter a number: ");
 	scanf("%d",&n);
 	if(n==0 || n==1){
 		not_prime=1;
	 }
	 else{

 	for(i=2;i<n;i++){
 		if(n%i==0){
 			not_prime=1;
		 }
		 }
		 	 }
		 if(not_prime){
		 	printf("%d is not a prime number",n);
		 }
		 else{
		 		printf("%d is  a prime number",n);
		 }
 		
	 
 	return 0;
 }
  


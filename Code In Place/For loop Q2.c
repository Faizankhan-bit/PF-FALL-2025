#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
 
 int i,fact=1;
    for(i=1; i<=n; i++ ){
    	fact=fact*i;
    
	}
		printf("The factorial is: %d\n ",fact);

    
     
	return 0;
	
}   

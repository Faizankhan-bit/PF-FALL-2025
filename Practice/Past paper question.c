#include<stdio.h>
int main(){
     int n,sum=0;
     int digit, product=1;
     printf("enter a number: ");
     scanf("%d",&n);
     
     int temp = n;
     
     while(temp>0){
	 
     digit = temp % 10;
     sum = sum+digit;
     product = product*digit;
     temp = temp/10;     
 }
    int result = product-sum;
    
    printf("The sum of number is = %d\n",sum);
    printf("The product of number is = %d\n",product);
    printf("result(product-sum)=%d\n",result);
 
	return 0;
	
}   

#include <stdio.h>

int main() {
   int a = 0, b = 1, next =0;
   int sum=0;
   
   printf("Fabonacci series up to 1000\n");
   
   while(a<=1000){
   	printf("%d ",a);
   	
   	if(a % 3 ==0 || a % 5 ==0 || a % 7 ==0 ){
   	sum +=a;
   	 }
   	 next = a + b;
   	 a = b;
   	 b = next;
   	
   }
   printf("\nsum of fabonacci series divisible by 3, 5 and 7 are: %d",sum);
   
    return 0;
}


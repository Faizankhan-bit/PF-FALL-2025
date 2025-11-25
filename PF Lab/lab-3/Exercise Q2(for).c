#include <stdio.h>

int main() {
   int a = 0, b = 1, next =0;
   int i,sum=0;
   
   printf("Fabonacci series up to 1000\n");
   
   for(i=1; i<=100; i++){
   	printf("%d ",a);
   	
   	if(a % 3 ==0 || a % 5 ==0 || a % 7 ==0 ){
   	sum +=a;
   	 }
   	 next = a + b;
   	 a = b;
   	 b = next;
   	 
   	 if(a > 1000){
   	 	break;
		}
   	
   }
   printf("\nsum of fabonacci series divisible by 3, 5 and 7 are: %d",sum);
   
    return 0;
}


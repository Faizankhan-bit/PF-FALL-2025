#include<stdio.h>
int main(){
	int i=1,j;
	
	printf("Multiplication from 1 to 5:\n\n");
	
	while(i<=10){
	  j=1;
	 while(j<=5){
	 	printf("%d * %d = %2d\t",j,i,j*i);
	 	j++;
	 }
	 printf("\n");
	 i++;
	}
return 0;
}

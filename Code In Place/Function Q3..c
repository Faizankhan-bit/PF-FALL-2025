#include<stdio.h>
 
 void swap(int *a, int *b){
 	int temp;
 	temp = *a;
 	*a = *b;
 	*b = temp;
 }
 int main(){
 	int x = 10, y = 20;
 	printf("before swap: %d %d\n ",x,y);
 	swap(&x,&y);
 	printf("after swap: %d %d\n ",x,y);
 	return 0;
 }
  


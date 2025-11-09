#include<stdio.h>
 
 void increment(int *p){
 	(*p)++;
 }
  int main(){
   int num=10;
   printf("before: %d\n",num);
   increment(&num);
   printf("after: %d\n",num); 
  	return 0;
  }
 
  


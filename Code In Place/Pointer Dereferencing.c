#include<stdio.h>
 int main(){
  int a=3;
  float b=4.5;
  char c='D';
  
  int *pta=&a;
  float *ptb=&b;
  char *ptc=&c;
  
    printf("int : %d\n",*pta);
     printf("float : %.2f\n",*ptb);
      printf("char : %c\n",*ptc);
  	
  	
  	return 0;
  }

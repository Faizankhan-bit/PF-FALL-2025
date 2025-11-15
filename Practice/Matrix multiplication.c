#include<stdio.h>

  int main(){
  	int m,n,p;
  	int i,j,k;
  	
  printf("Enter the order of matrices....\n");
  printf("Matrix A: m X n \nMatrix B: n X p\n");
  printf("Enter the value of m:");
  scanf("%d",&m);
   printf("Enter the value of n:");
  scanf("%d",&n);
   printf("Enter the value of p:");
  scanf("%d",&p);
   
   int a[m][n], b[n][p], c[m][p];
   printf("Enter the values for Matrix A(%d x %d)\n",m,n);
   for(i=0;i<m;i++){
   	for(j=0;j<n;j++){
   		scanf("%d",&a[i][j]);
	   }
   }
   printf("Enter the values for Matrix A(%d x %d)\n",n,p);
  for(i=0;i<n;i++){
   	for(j=0;j<p;j++){
   		scanf("%d",&b[i][j]);
	   }
   }
   printf("\n===Matrix Entered===\n");
   printf("The value for Matrix A are\n");
   for(i=0;i<m;i++){
   	printf("|");
   	  for(j=0;j<n;j++){
   	  	printf("%d",a[i][j]);
   	  	if(j != n-1 ) printf(" ");
		 }
		 printf("|\n");	 
   }
   
   printf("The value for Matrix b are\n");
   for(i=0;i<n;i++){
   	printf("|");
   	  for(j=0;j<p;j++){
   	  	printf("%d",b[i][j]);
   	  	if(j != p-1 ) printf(" ");
		 }
		 printf("|\n");	 
   }
   
   printf("\n===Matrix Multiplication====\n");
   printf("Matrix C\n");
   
   for(i=0;i<m;i++){
   	printf("|");
   	for(j=0;j<p;j++){
   		c[i][j]=0;
   		for(k=0;k<n;k++)
   			c[i][j] += a[i][k] * b[k][j];
   			printf("%d",c[i][j]);
   			if( j != p-1 ) printf(" ");
   			
		   
		   
	   }
	   printf("|\n");
   }
   
   
  
  
  
  return 0;
  }

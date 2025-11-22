#include<stdio.h>
int main(){
	int m,n,i,j;
	int countzero = 0;
	printf("Enter number of rows: ");
	scanf("%d",&m);
	
	printf("Enter number of columns: ");
	scanf("%d",&n);
	
	int arr[m][n];
	
	printf("Enter values of matrix : \n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
			
			if(arr[i][j] == 0){
			countzero++;
		   }
		}
	}
	if(countzero >= (m*n)/2){
		printf("This is a spare matrix\n");
	}
	else{
		printf("This is not a spare matrix\n");
	}
	printf("The number of zeros are: %d",countzero);
	
	return 0;
}

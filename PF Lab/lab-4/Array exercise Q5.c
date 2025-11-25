#include<stdio.h>
int main(){
	int n, m, i, j;
	
	printf("Enter number of rows: ");
	scanf("%d",&m);
	
	printf("Enter number of columns: ");
	scanf("%d",&n);
	
	int arr[m][n];
	
	printf("\nEnter elements of Matrix\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Entered Elements\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ",arr[i][j]);		
		}
		printf("\n");
	}
	int max = arr[0][0];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(arr[i][j] > max){
				  max = arr[i][j];
			}
		}
		
	}
	
	printf("The maximum element in the matrix: %d",max);
	
    
	 return 0;
}


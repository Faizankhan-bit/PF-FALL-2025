#include<stdio.h>
int main(){
	int matrix[2][2], transpose[2][2], i, j;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n===Entered elements===\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ",matrix[i][j]);		
		}
			printf("\n");
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			transpose[j][i] = matrix[i][j];		
		}
	}	
	printf("\n===Transpose Matrix===\n");
	
		for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ",transpose[i][j]);		
		}
			printf("\n");
	}
	
	return 0;
}

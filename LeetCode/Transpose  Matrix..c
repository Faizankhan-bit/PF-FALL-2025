#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("Enter number of rows:\n ");
	scanf("%d",&r);
	
	printf("Enter number of columns:\n ");
	scanf("%d",&c);
	
	int arr[r][c];
	
	printf("enter all the elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int transpose[i][j];
	
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
		transpose[i][j]=arr[j][i];
		}
	}
	printf("\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
		printf("%d ",transpose[i][j]);
	}
	printf("\n");	
}
		
	return 0;
}

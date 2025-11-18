#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter number of row / column:\n ");
	scanf("%d",&n);
	
	
	int arr[n][n];
	
	printf("enter all the elements:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\n");
	int temp;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
		temp = arr[i][j];
		arr[i][j] = arr[j][i];
		arr[j][i] = temp;
	}	
}

	for(i=0;i<n;i++){
    j=0;
   	int k=n-1;
   	while(j<k){
       	temp=arr[i][j];
       	arr[i][j] = arr [i][k];
       	arr[i][k] = temp;
       	j++;
       	k--;
       	
	   }
	  
} 
  
  for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("%d ",arr[i][j]);
	}
	printf("\n");	
}

	
		
	return 0;
}

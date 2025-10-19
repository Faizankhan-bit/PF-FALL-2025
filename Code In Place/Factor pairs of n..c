#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i,j;
	printf("Factor pairs of %d:\n",n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i*j==n)
			printf("(%d %d)",i,j);
		}
	}
	
	return 0;
}

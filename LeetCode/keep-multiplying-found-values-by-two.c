#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    
    int num[n];
    for(i=0; i<n; i++){
    	scanf("%d",&num[i]);
	}
	int original;
	scanf("%d",&original);
	
    int found = 1;
    while(found){
    	found = 0;
    	for(i=0; i<n; i++){
		if(num[i] == original){
			original = 2*original;
    	found = 1;
    	break;
	}	
		}
	}
	printf("%d",original);
	
	
	return 0;
}

#include<stdio.h>
int main(){
	int n1,n2;
	
	scanf("%d %d",&n1,&n2);
	
	int list1[100], list2[100], merged[200];
	int i,j,k=0;
	
	for(i=0; i<n1; i++){
		scanf("%d",&list1[i]);
	}
	for(i=0; i<n2; i++){
			scanf("%d",&list2[i]);
	}
	
	i=0,j=0;
	while(i<n1 && j<n2){
		if(list1[i]<list2[j]){
		  merged[k++] = list1[i++];
	}
	else{
		merged[k++] = list2[j++];
	}
		}
	
	while(i<n1){
		merged[k++] = list1[i++];
	}
	while(j<n2){
		merged[k++] = list2[j++];
	}
  
    for(i=0; i<k; i++){
	
    printf("%d ",merged[i]); 
	}
	return 0;
}

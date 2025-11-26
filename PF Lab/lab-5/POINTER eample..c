#include<stdio.h>

void swaped( int *a, int *b, int *c){
	int temp;
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}
int main(void){
	int x = 3;
	int y = 6;
	int z = 9;
	printf("The number before swaping are %d %d %d\n ",x,y,z);
	swaped(&x,&y,&z);
	printf("The number after swaping are %d %d %d\n ",x,y,z);

}

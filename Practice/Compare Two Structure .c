#include<stdio.h>

struct date{
	int day;
	int month;
	int year;
};
int main(){
	struct date d1;
	
	d1.day = 12;
	d1.month = 3;
	d1.year = 2004;
	
	struct date d2;
	
	d2.day = 12;
	d2.month = 7;
	d2.year = 2009;
	
	int flag = 1;
	if(d1.day != d2.day) flag = 0;
	if(d1.month != d2.month) flag = 0;
	if(d1.year != d2.year) flag = 0;
	
	if(flag == 1 ){
		printf("dates are equal");
	}
	else{
		printf("dates are unequal");
	}
	return 0;
}

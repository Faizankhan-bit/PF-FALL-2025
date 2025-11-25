#include<stdio.h>
#include<string.h>
int main(void){
	char name[200], courses[500];
	int freq[256] = {0};
	int i, max =0;
	char maxchar;
	
     printf("Enter your name: ");
     fgets(name, sizeof(name), stdin);
     
     printf("Enter courses offered in fall 2021: ");
     fgets(courses, sizeof(courses), stdin);
     
     strcat(name,courses);
     
     for(i=0; name[i] != '\0'; i++ ){
     	unsigned char ch = name[i];
     	if(ch == ' ' || ch == '\n')
     		continue;
     		
     		freq[ch]++;
     		if(freq[ch]>max){
     			max = freq[ch];
     			maxchar = ch;
			 }
	 }
	 printf("%d\n",max);
	 printf("%c\n",maxchar);
}

#include<stdio.h>
int main()
{
 int marks;
   printf("Enter you marks: ");
   scanf ("%d", &marks);

 if(marks>=90){
printf("you got Grade A");
}
else if(marks>=80){
printf("you got Grade B");
}
    else if(marks>=70){	
   printf("you got Grade C");
}
else if(marks>=60){
printf("you got Grade D");
}
 else{
printf ("you got Grade F");
}
 return 0;
}

#include<stdio.h>
int main()
{
	int balance=1000;
	int withdraw,deposit;
	char choice;
	printf(" 1. Withdraw\n 2. Deposit\n 3. Check Balance\n 4. Exit\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1 :
			printf("Enter withdrawal amount: ");
			scanf("%d",&withdraw);
			balance-=withdraw;
			if(withdraw>balance){
				printf("Error. Insufficient balance");
			}
			else{
			printf("Remaining balance = %d", balance);
		}
			break;
			
	     case 2 :
	     	printf("Enter the amount you want to deposit: ");
	     	scanf("%d",&deposit);
	     	balance+=deposit;
	     	printf("Your current balance is %d", balance);
	     	break;
	     	
	     case 3 :
	     	printf("Your current balance is %d", balance);
	     	break;
		 	
		case 4 :
		    printf("Exiting...");
			break;
			
		default :
		  printf("Invalid choice");		
	
	}
	
	return 0;
}

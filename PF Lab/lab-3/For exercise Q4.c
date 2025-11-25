#include<stdio.h>
#include<string.h>
int main(void){
	char username[20], password[20];
	char loginUser[20], loginPass[20];
	int i, len, hasupper, haslower, hasDigit;
	
	while(1){

	printf("Enter a username(5 alphabet): ");
	scanf("%s", username);
	
	if(strlen(username) != 5){
		printf("Username must contain 5 alphabet.\n");
		continue;
	}
	int valid = 1;
	for(i=0; i< 5; i++){
    if(!((username[i] >= 'A' && username[i] <= 'Z') || (username[i] >= 'a' && username[i] <= 'z')) ){
	    valid = 0;
		break;
	}
		}
	if(!valid){
			printf("Username must contain only alphabets\n");
			continue;
	}
	

	break;
}
	while(1){
		printf("Enter a password(6 char, uppercase, lowercase, digit): ");
		scanf("%s", password);
		
		if(strlen(password) != 6){
			printf("password must contain 6 char.\n");
			continue;
		}
		haslower = hasupper = hasDigit = 0;
		for(i=0; i<6; i++){
			if(password[i] >= 'A' && password[i] <= 'Z') hasupper = 1;
			if(password[i] >= 'a' && password[i] <= 'z') haslower = 1;
			if(password[i] >= '0' && password[i] <= '9') hasDigit = 1;
			
		}
		if(!(hasupper && haslower && hasDigit)){
			printf("password must include uppercase, lowercase, digit\n.");
			continue;
		}
		break;
	}
	printf("\n===Account Created Successfully===\n");
	while(1){

	printf("\n---Login---\n");
	printf("Enter username: ");
	scanf("%s", loginUser);
	printf("Enter password: ");
	scanf("%s", loginPass);
	
	if(strcmp(username,loginUser) == 0 && strcmp(password,loginPass) == 0){
		printf("Welcome %s. You are now logged in.",username);
		break;
	}
	printf("Incorrect Username or password. TRY AGAIN.");
	
		}
}


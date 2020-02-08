#include <ctype.h> 
#include <stdio.h> 

int main(){
	char a;
	scanf("%s",&a);
	a = tolower(a);
	switch(a){
		case 'a':
			printf("Genius");
		break;
		case 'b':
			printf("Good");
		break;
		case 'c':
			printf("Try Harder");
		break;
		case 'd':
			printf("Very Bad");
		break;
		case 'f':
			printf("Fail");
		break;
		default:
			printf("Invalid Input");
		break;
	}

    return 0;
}


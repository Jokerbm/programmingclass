#include<stdio.h>
#include<ctype.h>

int main(){
	char a;
    scanf("%c" , &a);
    isdigit(a) ? printf("number") : islower(a) ? printf("lowercase") : isupper(a) ? printf("uppercase") : printf("error");
}

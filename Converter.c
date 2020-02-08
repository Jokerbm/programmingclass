#include<stdio.h>

int main(){
	char a;
	scanf("%c" ,&a);
    if ((a >= 65) && (a <= 90)){
        a = a + 32;
    }
    else if ((a>='a' && a<='z')){
    	a = a-32;
    }
    else{
    	printf("error");
    	return 0;
    }
    printf("%c" ,a);
    return 0;
}


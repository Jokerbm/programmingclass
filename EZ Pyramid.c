#include <stdio.h>
#include <string.h>
int main()
{
    int i, a = 0,b = 1;
    char k[500] ="*";
    scanf("%d", &i);
    i -= 1;
    while(i>=0){
    while(a < i){
    	printf(" ");
    	a += 1;
    }
    printf("%s\n", k);
    k[b]= '*';
    k[b + 1]= '*';
    b += 2;
    a=0;
    i -=1;
}
    return 0;
}
	

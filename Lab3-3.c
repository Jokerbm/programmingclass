#include<stdio.h>

int main(){
    int num1;
    scanf("%d", &num1);
    printf("%d s = %d d %d h %d m %d s",num1,num1/86400,num1%86400/3600,num1%86400%3600/60,num1%86400%3600%60);


    return 0;
}

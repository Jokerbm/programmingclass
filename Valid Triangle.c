#include <stdio.h> 

int main(){
	float a,b,c;
	scanf("%f\n%f\n%f",&a,&b,&c);
	(a + b > c && a +c >b && b+c >a) ? printf("Triangle is valid.") : printf("Triangle is not valid.");

    return 0;
}


#include<stdio.h>

int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	(b>a && a>c || c>a && a>b) ? printf("%.2f", a) : (a>b && b>c || c>b && b>a) ? printf("%.2f", b) : printf("%.2f", c);

    return 0;
}


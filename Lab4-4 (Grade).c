#include <stdio.h> 

int main(){
	float a;
	scanf("%f",&a);
	a > 100 ? printf("Out of Range") : (a >= 80 && a <= 100) ? printf("A") : a >= 70 ? printf("B") : a>=60 ? printf("C") : a>=50 ? printf("D") : a >=0 ? printf("F") : printf("Out of Range");

    return 0;
}


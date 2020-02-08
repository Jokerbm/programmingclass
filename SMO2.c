#include <stdio.h>
#include <math.h>


int main(){
	float a,b,c,price2,k;
	scanf("%f\n%f\n%f",&a,&b,&c);
	k = 100 - b;
	float price1 = a * c * k /100;
	price2 = floor(c / 3) *2 * a + fmod(c , 3) * a;
	if (price1 <= price2){
	    printf("Discount %.0f%%\n%.2f",b,price1);
	}
	else{
		printf("Buy 2 Get 1\n%.2f",price2);
	}
	return 0;
}


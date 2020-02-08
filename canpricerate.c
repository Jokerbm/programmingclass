#include<stdio.h>

int main(){
    double num1,num2,num3;
    scanf("%lf\n%lf\n%lf",&num1,&num2,&num3);
    num2 = num2 / 2 * num2 / 2;
  	double pi =3.14159265359, price = num3 * pi * num2;
    printf("Volume : %.2lfml\nBaht/ml : %.4f",price, num1 / price);
    return 0;
}

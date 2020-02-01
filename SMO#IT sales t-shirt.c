#include<stdio.h>

int main(){
    float num1,num2,num3;
    scanf("%f" ,&num1);
    scanf("%f" ,&num2);
    scanf("%f" ,&num3);
    printf("%.2f",num1 * num3 - num1*num3 *num2 /100);
}

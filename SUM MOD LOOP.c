#include<stdio.h>
#include <math.h>


int main() {
  int num0, num1, num2;
  num2 = 1;
  scanf("%d", & num0);
  while (1) {
    scanf("%d", & num1);
    if (num1 == 0) {
      break;
    }
    num2 += num0 % num1;
    num0 = num1;
  }
  printf("%d", num2);
  return 0;
}
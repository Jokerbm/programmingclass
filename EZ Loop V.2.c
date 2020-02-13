#include<stdio.h>

int main() {
  int n, a = 1;
  while (1) {
    scanf("%d", & n);
    if ((n % 2 != 0) || (n < 2)) {
      printf("error\n");
    } else {
      n = n / 2;
      while (a <= n) {
        printf("%d", a);
        ++a;
      }
      a = 1;
      while (n >= a) {
        printf("%d", n);
        --n;
      }
      break;
    }
  }
  return 0;
}
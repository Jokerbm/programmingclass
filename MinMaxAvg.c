#include<stdio.h>

int main() {
  int i, k;
  float delta, max, min, sum;
  scanf("%d\n%f", & k, & delta);
  max = delta;
  min = delta;
  sum = delta;
  for (i = 1; i < k; i++) {
    scanf("%f", & delta);
    if (delta > max) {
      max = delta;
    }
    if (min > delta) {
      min = delta;
    }
    sum += delta;
  }
  printf("%d Values\n", k);
  printf("Min: %.3f\n", min);
  printf("Max: %.3f\n", max);
  printf("Avg: %.2f", sum / k);
  return 0;
}
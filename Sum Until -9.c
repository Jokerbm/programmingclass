#include<stdio.h>

int main() {
	int a, b=0;
	while(1){
		scanf("%d",&a);
		if (a == -9){
			break;
		}
		b+=a;
	}
	printf("%d",b);
  return 0;
}

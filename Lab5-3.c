	#include <stdio.h>

	int main() {
	  int i, k;
	  scanf("%d %d", & i, & k);
	  if (i > k) {
	    do {
	      printf("%d ", i);
	      i--;
	    } while (i >= k);
	  } else {
	    do {
	      printf("%d ", i);
	      i++;
	    } while (i <= k);

	  }
	  return 0;
	}
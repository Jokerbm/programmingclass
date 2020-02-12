	#include <stdio.h>

	int main() {
	  int i, k, b,start = 1,end,j=1,count = 1;
	  scanf("%d", &i);
	  end = i;
	  	  k = (i-1)/2;
	  while(count <= k){
	  while(j <= i){
	  	if( (j != start) && (j != end)){
	  		printf("#");
	  	}
	  	else{
	  		printf("-");
	  	}
	  	j++;
	  }
	  printf("\n");
	  start += 1;
	  end -= 1;
	  j = 1;
	  count++;
	}
	count = 1;
	while(count <= k+1){
	  while(j <= i){
	  	if( (j != start) && (j != end)){
	  		printf("#");
	  	}
	  	else{
	  		printf("-");
	  	}
	  	j++;
	  }
	  printf("\n");
	  start -= 1;
	  end += 1;
	  j = 1;
	  count++;
	}


	  return 0;
	}

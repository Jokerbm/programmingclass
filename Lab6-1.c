#include<stdio.h>

int main(){
	int num, i, check = -1;
	int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
	int N[] = {1, 3, 9, 7, 11, 15, 19};
	while(1){
		scanf("%d",&num);
		if ((num >= 1) && (num<=20)){
			break;
		}		
	}
	if(num%2 == 0){
		for(i=0; i<8; i++){
			if (M[i] == num){
				check = i;
				break;
			}
		}
		if (check != -1){
		printf("%d is in M at index [%d]",num, check);
		}
		else{
			printf("%d is not in neither M nor N",num);
		}
	}
	else{
		for(i=0; i<8; i++){
			if (N[i] == num){	
				check = i;
				break;
			}
		}
		if (check != -1){
		printf("%d is in N at index [%d]",num, check);
		}
		else{
			printf("%d is not in neither M nor N",num);
		}
	}
}
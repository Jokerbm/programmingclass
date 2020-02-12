#include <stdio.h>
int main()
{
    int i, a = 0;
    scanf("%d", &i);

    if(i >= 0){
    	 while (i >= a)
    {
        printf("%d ", i);
        --i;
    }	
    }
    else{
    while (i <= a)
    {
        printf("%d ", i);
        ++i;
   
}
}
    return 0;
}
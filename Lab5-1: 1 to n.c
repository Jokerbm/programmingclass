#include <stdio.h>
int main()
{
    int i, a = 1;
    scanf("%d", &i);
    
    while (a <= i)
    {
        printf("%d ", a);
        ++a;
    }
    return 0;
}
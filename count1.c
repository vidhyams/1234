#include <stdio.h>
void main()
{
    int n, i, s = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        s += i;   // s = s+i;
    }

    printf("Sum = %d",s);
}

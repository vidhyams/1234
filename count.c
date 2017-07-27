#include <stdio.h>
int main()
{
    long n;
    int cou = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++cou;
    }

    printf("Number of digits: %d", cou);
}

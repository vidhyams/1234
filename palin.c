#include <stdio.h>
void main()
{
    int n, reverse = 0, rem, org;

    printf("Enter an integer: ");
    scanf("%d", &n);

    org = n;
    while( n!=0 )
    {
        rem = n%10;
        reverse = reverse*10 + rem;
        n /= 10;
    }
    if (org == reverse)
        printf("%d is a palindrome.", org);
    else
        printf("%d is not a palindrome.", org);
}

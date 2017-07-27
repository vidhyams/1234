#include <stdio.h>
void main()
{
    int number, origi, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    origi= number;

    while (origi != 0)
    {
        remainder = origi%10;
        result += remainder*remainder*remainder;
        origi /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
}

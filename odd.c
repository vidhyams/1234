#include <stdio.h>

void main()

{

    int number,m =20,n=40;

    clrscr();

    printf("Print Odd Numbers in a given range m to n:\n");

    for (number = m; number <= n; number++)

        {

               if (number % 2 == 1)

                  printf ("%d ", number);

         }

                getch();

} 

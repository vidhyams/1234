#include <stdio.h>

void main()

{

    int num,m =20,n=40;

    clrscr();

    printf("Print even Numbers in a given range m to n:\n");

    for (num = m; num <= n; num++)

        {

               if (num % 2 == 0)

                  printf ("the odd number between two interval is %d", num);

         }

                getch();

} 

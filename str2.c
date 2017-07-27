

#include <stdio.h>
#include <string.h>
 
int main()
{
   char st[1000];
 
   printf("Input a string to convert to upper case\n");
   gets(st);
 
   printf("Input string in upper case: \"%s\"\n",strupr(st));
 
   return  0;
}

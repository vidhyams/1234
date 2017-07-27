#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
     char str[20],tmp;
     int m,k;
     clrscr();
     printf("\nEnter a string : ");
     scanf("%s",str);
     printf("\n\nOriginal String     : %s",str);
     for(m=0;m<strlen(str);m=m+2){
     tmp = str[m];
     str[m] = str[m+1];
     str[m+1] = tmp;
     }
     printf("\nAfter Swap String      : %s",str);
     getch();
}

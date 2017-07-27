
#include<stdio.h>
void main()
{
int i,j;
printf("enter the table you want\n");
scanf("%d",&i);
for(j=1;j<=10;j++)
{
printf("%d * %d = %d",i,j, i*j);
}
}

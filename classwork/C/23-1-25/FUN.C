#include<stdio.h>

fun1()
{
int i,j;

 for(i=1;i<=5;i++)
{
 for(j=1;j<=i;j++)
{
 printf("*");
}
 printf("\n");
}
}


main()
{
 fun1();
}
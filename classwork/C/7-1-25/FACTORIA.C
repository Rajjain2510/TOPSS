#include<stdio.h>
main()
{
 int n;
 int i=1,fac=1;
 printf("enter number:");
 scanf("%d",&n);
 while(i<=n)
 {
  fac=fac *i;
  i++;
 }
 printf("factorial is: %d",fac);
}

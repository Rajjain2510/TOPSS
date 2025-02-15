#include<stdio.h>
main()
{
 int n;
 int i=0,fac=0;
 printf("enter number:");
 scanf("%d",&n);
 while(i<=n)
 {
  fac=fac +i;
  i++;
 }
 printf("factorial is: %d",fac);
}

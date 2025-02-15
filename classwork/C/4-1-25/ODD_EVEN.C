#include<stdio.h>
main()
{
 int n;
 printf("enter number:");
 scanf("%d",&n);

 if(n==0)
 {
  printf("number neither even or odd");
 }

 else if(n%2==0)
 {
  printf("even");
 }
 else
 {
  printf("odd");
 }
}
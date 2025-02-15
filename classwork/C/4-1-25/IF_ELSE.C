#include<stdio.h>
void main()
{
 int n;
 printf("enter age:");
 scanf("%d",&n);

 if(n>100)
 {
  printf("invalid age!!");
 }

  else if(n>=18)
  {
   printf("eligible");
  }

  else
  {
   printf("not eligible");
  }
 }


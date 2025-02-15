#include<stdio.h>
main()
{
int n1=25;
 printf("---------welcome to guess the number challenge----------");
 while(1)
 {
  printf("\n-----choose number between 1 to 50:-----");

  int n;
  printf("\nenter number:");
  scanf("%d",&n);

  if(n>50)
  {
  printf("invalid number!!");

 }
  else if(n==n1)
  {
   printf("you won the game!!");
   break;
  }
  else if(n<n1)
  {
   printf("enter numner is greater then the random number!!");
  }
  else
  {
   printf("enter number is less then the random number!!");
  }
 }
}
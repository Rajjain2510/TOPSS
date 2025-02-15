#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter number 1:");
scanf("%d",&a);
printf("enter number 2:");
scanf("%d",&b);
//a=50 b=100

temp=a;//temp=50 , a=blank
a=b;//a=100 , b=blank
b=temp;//b=50 ,temp=blank

printf("\nAfter swapping value A: %d",a);
printf("\nAftetr swappipng value B: %d",b);

}
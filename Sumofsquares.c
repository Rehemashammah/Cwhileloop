#include<stdio.h>

int main()
{
//Write a program to calculate the sum of squares
int x ,y,sqr1, sqr2, sum;
printf("Enter a number:");
scanf("%d%d", &x,&y);
sqr1=x*x;
sqr2=y*y;
sum= sqr1 + sqr2;
printf("Sum of squares=%d",sum);

return 0;
}

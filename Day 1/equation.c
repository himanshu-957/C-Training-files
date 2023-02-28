#include<stdio.h>
void main()
{
 int x,y;
 printf("Enter the value of x: ");
 scanf("%d",&x);
 printf("Enter the value of y: ");
 scanf("%d",&y);
 int solve1 = x*x*x + x*x + 2*x + 5;
 int solve2 = x*x + y*y + 2*x*y - 10;
 printf("%d\n",solve1);
 printf("%d\n",solve2);
}

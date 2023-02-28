#include<stdio.h>
void main()
{
 int num, d1, d2, d3, d4;
 printf("Enter the first number: ");
 scanf("%d",&num);
 d1 = num%10;
 num = num/10;
 d2 = num%10;
 num = num/10;
 d3 = num%10;
 num = num/10;
 d4 = num%10;
 printf("The sum of first and last digit is : %d\n", (d1 + d4));
}

#include<stdio.h>
void main()
{
 int C,D,temp;
 printf("Enter the value of C: ");
 scanf("%d",&C);
 printf("Enter the value of D: ");
 scanf("%d",&D);
 temp = C;
 C = D;
 D = temp;
 printf("The value of C: %d\n",C);
 printf("The value of D: %d\n",D);
}

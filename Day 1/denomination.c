#include<stdio.h>
void main()
{
 int amount, ten, hundred, fifty;
 printf("Enter the amount to be withdrawn: ");
 scanf("%d",&amount);
 hundred = amount/100;
 amount = amount%100;
 fifty = amount/50;
 amount %= 50;
 ten = amount/10;
 printf("The amount contains %d hundred's notes, %d fifty's notes, %d ten's notes",hundred, fifty, ten );
}

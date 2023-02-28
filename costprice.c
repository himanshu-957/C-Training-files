#include<stdio.h>
void main()
{
	int sp, profit;
	printf("Enter the cost price of 15 items: ");
	scanf("%d",&sp);
	printf("Enter the total profit : ");
	scanf("%d",&profit);
	float cp = (sp - profit)/15;
	printf("Cost Price of one item is : %f", cp);
	
}

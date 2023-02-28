#include<stdio.h>
void main()
{
	int pizza = 300, sandwich = 100, burger = 150;
	int qp, qb, qs;
	printf("Enter the number of pizza you want to order: ");
	scanf("%d",&qp);
	printf("Enter the number of burger you want to order: ");
	scanf("%d",&qb);
	printf("Enter the number of sandwich you want to order: ");
	scanf("%d",&qs);
	float amount = pizza*qp + burger*qb + sandwich*qs;
	float Total_amount = amount + 0.125*amount;
	printf("Amount = %f\n", amount);
	printf("Total amount after GST = %f\n", Total_amount);
	
}

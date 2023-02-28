#include<stdio.h>
void main()
{
	int sub1, sub2, sub3, sub4, sub5;
	printf("Enter the marks of first subject: ");
	scanf("%d",&sub1);
	printf("Enter the marks of second subject: ");
	scanf("%d",&sub2);
	printf("Enter the marks of third subject: ");
	scanf("%d",&sub3);
	printf("Enter the marks of fourth subject: ");
	scanf("%d",&sub4);
	printf("Enter the marks of five subject: ");
	scanf("%d",&sub5);
	float aggregrate = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
	printf("Total aggregate = %f\n", aggregrate);
	float percentage = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
	printf("Total percentage = %f\n", percentage);
}

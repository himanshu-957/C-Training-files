#include<stdio.h>
void main()
{
	int day;
	printf("Enter the number of days: ");
	scanf("%d",&day);
	int month = day/30;
	day = day%30;
	printf("%d months and %d days\n", month, day);
}

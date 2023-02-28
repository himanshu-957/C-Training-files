#include<stdio.h>
void main()
{
 int days, month, week, year;
 printf("Enter the number of days: ");
 scanf("%d",&days);
 year = days/365;
 days %= 365;
 month = days/30;
 days %= 30;
 week = days/7;
 printf("Number of %d month, %d week, %d year",month, week, year);

}

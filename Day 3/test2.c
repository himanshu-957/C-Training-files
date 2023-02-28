#include<stdio.h>
void main()
{
 int days, price, fine;
 printf("Enter the number of days the member is late: ");
 scanf("%d",&days);
 printf("Enter the price of the book: ");
 scanf("%d",&price);
 if(days>10)
 {
  fine = 5*5+5*10+20*(days-10);
 }
 else if(days > 5)
 {
  fine = 5*5 + 10*(days-5);
 }
 else
 {
  fine = days*5;
 }
 if(days>30)
 {
  fine = fine>price?fine:price;
 }
 printf("Total fine: %d\n",fine);
}

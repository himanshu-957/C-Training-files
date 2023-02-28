#include<stdio.h>
void main()
{
//----------------Question 1 -------------------------------------------------
 int gross_sal, saving;
 printf("Enter your gross salary: ");
 scanf("%d",&gross_sal);
 printf("Enter your savings: ");
 scanf("%d",&saving);
 float tax;
 if(saving >= 100000)
 {
  gross_sal -= 100000;
 }
 else
 {
  gross_sal -= saving;
 }
 printf("Taxable income: %d\n", gross_sal);
 if(gross_sal > 500000)
 {
  tax = 0.1*100000 + 0.2*300000 + 0.3*(gross_sal-500000);
 }
 else if(gross_sal > 200000)
 {
  tax = 0.1*100000 + 0.2*(gross_sal-200000);
 }
 else if(gross_sal > 100000)
 {
  tax = 0.1*(gross_sal-100000);
 }
 else
 {
  tax = 0;
 }
 printf("Calculated tax: %f\n", tax);
//---------------------Question 2--------------------------------------------
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

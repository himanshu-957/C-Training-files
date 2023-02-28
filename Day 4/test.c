#include<stdio.h>
void main()
{
 /*int n;
 printf("Enter the number: ");
 scanf("%d",&n);
 int i=n;
 printf("Even\n");
 while(ecount <= 10)
 {
  if(i%2==0)
  {
   ecount++;
   printf("%d\n",i);
  }
  i++;
 }
 printf("ODD\n");
 while(ocount <= 10)
 {
  if(n%2!=0)
  {
   ocount++;
   printf("%d\n",n);
  
  }
  n++;
  
 }*/
 //printf("Total %d numbers divisible by 5 or 3 between 1 to %d\n",count,n);
 /*int n,num,positive=0,negative=0,even=0,odd=0,zero=0;
 printf("Enter no. of input: ");
 scanf("%d\n",&n);
 for(int i = 1; i <=n;i++)
 {
  scanf("%d",&num);
  even += (num%2==0)?1:0;
  odd += (num%2!=0)?1:0;
  positive += (num>0)?1:0;
  negative += (num<0)?1:0;
  zero += (num==0)?1:0;
 }
 printf("Positive count = %d\n", positive);
 printf("Negative count = %d\n", negative);
 printf("Zero count = %d\n", zero);
 printf("Odd count = %d\n", odd);
 printf("Even count = %d\n", even);*/
 /*int n;
 printf("Enter the number: ");
 scanf("%d",&n);
 for(int i = 1; i<11; i++)
 {
  printf("%d * %d = %d\n",n,i,n*i);
 }*/
 /*int x,y,answer=1;
 printf("Enter the number: ");
 scanf("%d",&x);
 printf("Enter its maximum power: ");
 scanf("%d",&y);
 for(int i = 1; i <= y; i++)
 {
  answer *= x;
 }
 printf("%d power %d is %d\n",x,y,answer);*/
 /*int n;
 while(n!=-1)
 {
  printf("Hello ");
  scanf("%d",&n);
 }*/
 int quantity, choice;
 float buy_price, sell_price, prolos = 0, cp = 0;
 printf("Did you bought any share?: ");
 scanf("%d",&choice);
 do
 {
  printf("Enter its cost price?: ");
  scanf("%f",&buy_price);
  cp += buy_price;
  printf("Enter how many share you bought?: ");
  scanf("%d",&quantity);
  printf("Enter its sell_price?: ");
  scanf("%f",&sell_price);
  prolos += (sell_price - buy_price)*quantity;
  printf("Did you bought any more share?: ");
  scanf("%d",&choice);
  
 }while(choice != 0);
 printf("Total profit/loss = %f\n",prolos);
 float per = prolos*100/(cp*quantity);
 printf("Total profit/loss percentage = %f\n",per);
 







































}

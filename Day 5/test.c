#include<stdio.h>
void main()
{

 int num, sum = 0, rem, rev = 0, arm = 0;
 printf("Enter the number: ");
 scanf("%d",&num);
 /*
 int temp = num;
 while(temp>0)
 {
  rem = temp%10;
  temp /= 10;
  sum += rem;
  rev = rev*10 + rem;
  arm += rem*rem*rem;
 }
 printf("Sum of its digits are : %d\n",sum);
 printf("Reverse of its digits are : %d\n",rev);
 if(rev == num)
 {
  printf("Entered number is pallindrome\n");
 }
 else
 {
  printf("Entered number is not pallindrome\n");
 }
 if(arm == num)
 {
  printf("Entered number is Armstrong number\n");
 }
 else
 {
  printf("Entered number is not Armstrong number\n");
 }
 for(int n = 1; n <= num; n++)
 {
  int temp = n;
  while(temp>0)
  {
   rem = temp%10;
   temp /= 10;
   arm += rem*rem*rem;
  }
  if(arm == n)
  {
   printf("%d is Armstrong number\n",n);
  }
  arm = 0; 
 }*/
 for(int j = 2;j<num;j++)
 {
 for(int i = 2; i<=j/2; i++)
 {
  if(j%i == 0)
  {
   arm = 1;
  }
 }
 if(arm == 0)
 {
  printf("%d is a prime number\n",j);
 }
 arm = 0;
 }
}

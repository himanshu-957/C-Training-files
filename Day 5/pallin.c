#include<stdio.h>
void main()
{
 int num, rev = 0, temp, rem, count = 0;
 printf("Enter the Number: ");
 scanf("%d",&num);
 temp = num;
 while(temp>0)
 {
  rem = temp%10;
  count += 1;
  temp /= 10;
  rev = rev*10 + rem;
 }
 if(rev == num)
 {
  printf("Palindrome\n");
 }
 else
 {
  num /= 10;
  while(count > 0)
  {
   num *= 10;
   count--;
  }
  num += rev;
  printf("%d\n",num);
 }
}

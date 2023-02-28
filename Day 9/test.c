#include<stdio.h>
/*void sum1(int a, int b)
{
 printf("Sum1 = %d\n",a+b);
}
int sum2(int a, int b)
{
 return a+b;
}
void sum3()
{
 int a,b;
 printf("Enter first number: ");
 scanf("%d",&a);
 printf("Enter second number: ");
 scanf("%d",&b);
 printf("Sum3 = %d\n",a+b);
}
int sum4()
{
 int a,b;
 printf("Enter first number: ");
 scanf("%d",&a);
 printf("Enter second number: ");
 scanf("%d",&b);
 return a+b;
}
void square(int a)
{
 printf("%d\n",a*a);
}
int square2(int a)
{
 return a*a;
}
char grade(int marks)
{
 if(marks > 80)
 {
  return "A";
 }
 else if(marks > 60)
 {
  return "B";
 }
 else if(marks > 40)
 {
  return "C";
 }
 else if(marks > 33)
 {
  return "D";
 }
 else
 {
  return "E";
 }
}*/
void fun(int n)
{
 if(n>0)
 {
  fun(n-1);
  printf("%d ",n);
  fun(n - 1);
 }
}
int power(int num, int pow)
{
 int ans = num;
 for(int i = 1; i < pow; i++)
 {
  ans *= num;
 }
 return ans;
}
int iseven(int num)
{
 if(num%2 == 0)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
int isprime(int num)
{
 int flag = 1;
 for(int i = 2; i <= num/2; i++)
 {
  if(num%i == 0)
  {
   flag = 0;
  }
 }
 if(flag)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
void main()
{
 fun(4);
}


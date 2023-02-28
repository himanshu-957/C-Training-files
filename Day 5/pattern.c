#include<stdio.h>
void main()
{
 for(int i = 1; i <= 5; i++)
 {
  for(int j = 1; j <=5; j++)
  {
   if(i == 1 || j == 3)
   printf("* ");
   else
   printf("  ");
  }
  printf("\n");
 }
printf("\n");
 for(int k = 1; k <= 5; k++)
 {
  for(int l = 1; l <=5; l++)
  {
   if(k == 1 || l == 1 || k == 3 || k == 5)
   printf("* ");
   else
   printf("  ");
  }
  printf("\n");
 }
printf("\n");
  for(int i = 1; i <= 5; i++)
 {
  for(int j = 1; j <=5; j++)
  {
   if(i == j || j == 1 || j == 5)
   printf("* ");
   else
   printf("  ");
  }
  printf("\n");
 }
printf("\n");
  for(int i = 1; i <= 5; i++)
 {
  for(int j = 1; j <=5; j++)
  {
   if(i+j == 6 || i == 1 || i == 5)
   printf("* ");
   else
   printf("  ");
  }
  printf("\n");
 }
printf("\n");
  for(int i = 1; i <= 5; i++)
 {
  for(int j = 1; j <=5; j++)
  {
   if(j<=i)
   printf("* ");
   else
   printf("  ");
  }
  printf("\n");
 }
printf("\n");
  for(int i = 1; i <= 5; i++)
 {
  for(int j = 1; j <=5; j++)
  {
   if(j<=6-i)
   printf("* ");
   else
   printf("  ");
  }
  printf("\n");
 }
printf("\n");
  for(int i = 1; i <= 5; i++)
 {
  for(int j = 1; j <=5; j++)
  {
   if(j<6-i)
   printf("  ");
   else
   printf("* ");
  }
  printf("\n");
 }
printf("\n");
}

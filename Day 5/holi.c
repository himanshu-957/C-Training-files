#include<stdio.h>
void main()
{
 int holiday=0,date=1,N;
printf("Enter number of festivals: ");
scanf("%d",&N);
for(int i = 1; i < 31; i++)
 {
  if(i%7==6 || i%7==0)
  {
   holiday += 1;
  }
 } 
while(date > 0 && date < 31 && N > 0)
{ 
 printf("Enter the date of holiday?: ");
 scanf("%d",&date);
 holiday++;
 if(date%7 == 6 || date%7 == 0)
 {
  holiday--;
 }
 N--;
} 
printf("Total number of holidays: %d\n", holiday);
}

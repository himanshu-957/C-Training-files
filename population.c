#include<stdio.h>
void main()
{
 int pmale = 52, pliteracy = 48, plmale = 35, total = 80000;
 float literacy = pliteracy/100*total;
 float lmale = plmale*total/100;
 float lfemale = literacy - lmale;
 float male = pmale*total/100;
 float female = total - male;
 float imale = male - lmale;
 float ifemale = female - lfemale;
 printf("Total illeterate male: %f\n",imale);
 printf("Total illeterate female: %f\n",ifemale);
}

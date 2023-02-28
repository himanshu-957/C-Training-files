#include<stdio.h>
void main()
{
 int arr[5],arr1[5],n,k=-1;
 for(int i = 0; i<5;i++)
 {
  printf("Enter the element for array: ");
  scanf("%d",&arr[i]);
 }
 printf("Which element do you want to remove from array: ");
 scanf("%d",&n);
 for(int i = 0; i < 5; i++)
 {
  if(arr[i] == n)
  {
   k = i;
   break;
  }
 }
 for(int i = 0; i < 5; i++)
 {
  if(arr[i]!=n)
  {
   printf("%d\n",arr[i]);
  }
 }

 /*for(int i = 0; i<5;i++)
 {
  printf("Enter the element for second array: ");
  scanf("%d",&arr1[i]);
 }
 for(int i = 0; i < 5; i++)
 {
  for(int j = 0; j < 5; j++)
  {
   if(arr[i] == arr[j])
   {
    k++;
   }
  }
 }
 if(k>=5)
 {
  printf("Both arrays are equal\n");
 }
 else
 {
  printf("Both arrays are unequal\n");
 }*/
 /*for(int i = 0; i < 5; i++)
 {
  n = 0;
  for(int j = 0; j < 5; j++)
  {
   if(arr[i] == arr[j])
   {
    n++;
   }
  }
 arr1[i] = n;
 }
 for(int i = 0; i < 5; i++)
 {
   printf("%d has %d occurence in the given array\n",arr[i],arr1[i]);
 }*/
 //printf("How much cyclic rotation do you want? ");
 //scanf("%d",&n);
 /*int min = arr[0];
 int max = arr[0];
 int sum = 0;
 for(int i = 0; i<5; i++)
 {
  sum += arr[i];
  if(max<arr[i])
  max = arr[i];
  if(min>arr[i])
  min = arr[i];
 }
 float avg = sum/5;
 printf("Minimum: %d \nMaximum: %d \nAverage = %f \n",min,max,avg);
 printf("Enter the element you want to search: ");
 int s,index = -1;
 scanf("%d",&s);
 for(int i = 0; i<5; i++)
 {
  if(s == arr[i])
  {
   index = i;
   break;
  }
 }
 if(index == -1)
 {
  printf("Entered element does not exist in array\n");
 }
 else
 {
  printf("Entered element exists at %d index\n",index);
 }*/
 /*for(int i = 0; i<5;i++)
 {
  arr1[4-i] = arr[i];
 }
 for(int i = 0; i<5;i++)
 {
  printf("%d\n",arr1[i]);
 }*/
 /*for(int i = 1; i < 5 ; i++)
 {
  ls = 0;
  rs = 0;
  int j = i-1;
  while(j >= 0)
  {
   ls += arr[j];
   j -= 1;
  }
  j = i + 1;
  while(j<5)
  {
   rs += arr[j];
   j++;
  }
  if(ls == rs)
  {
   flag = 1;
   printf("Equlibirium of array is at %d\n",i);
   break;
  }
 }
 if(flag == 0)
 {
  printf("Equilibrium does not exist\n");
 }*/
 /*for(int i = 0; i < 5-n; i++)
 {
  arr1[i+n]=arr[i];
 }
 int k = 0;
 for(int i = 5-n;i<5;i++)
 {
  arr1[k] = arr[i];
  k++;
 }
 for(int i = 0; i < 5; i++)
 {
  printf("%d\n",arr1[i]);
 }*/
 
 
}

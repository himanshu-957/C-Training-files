#include<stdio.h>
void main()
{
  int n,row = -1,count = 0;
  printf("Enter the row/column count for square matrix: ");
  scanf("%d",&n);
  int arr[n][n];
  for(int i=0; i < n; i++)
  {
    for(int j=0; j < n; j++)
    {
      printf("Enter %d x %d element: ",i+1,j+1);
      scanf("%d",&arr[i][j]);
    }
  }
  for(int i=0; i < n; i++)
  {
    for(int j=0; j < n; j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  int i = 0;
  while(i < n)
  {
    for(int j = 0; j < n; j++)
    {
      if(j==n-1 && arr[i][j] == 0)
      {
        row = i;
        break;
      }
      if(arr[i][j] == 1)
      {
        i += 1;
      }
    }
    if(row != -1)
    {
      break;
    }
  }
  for(int i = 0; i < n; i++)
  {
    if(arr[i][row]==1)
    {
      count++;
    }
  }
  if(count == n-1 && row != -1)
  {
    printf("Celebrity is: %d\n", row+1);
  }
  else
  {
    printf("No one is celebrity\n");
  }
}

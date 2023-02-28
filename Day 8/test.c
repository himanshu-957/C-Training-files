#include<stdio.h>
void sum(int a, int b, int c)
{
	int ans;
	ans = a+b+c;
	printf("sum is %d\n",ans);
}
void main()
{
	sum(10,20,30);
	
	/*int a[5] = {10,5,6,3,2},temp;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
				
			}
			
		}
	}
	for(int i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}*/
	/*int arr[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	int brr[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	int ans[3][3];
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			ans[i][j] = 0;
			for(int k = 0; k < 3; k++)
			{
				ans[i][j] += arr[i][k]*brr[k][j];
			}
		}
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}*/
}

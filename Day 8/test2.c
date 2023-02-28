#include<stdio.h>
void main()
{
	int N;
	printf("Enter number of elements in array: ");
	scanf("%d",&N);
	int arr[N];
	int lsum[N], lmin[N], count = 0, sum = 0;
	for(int i = 0; i < N; i++)
	{
		printf("Enter %d element of array : ",i);
		scanf("%d",&arr[i]);
	}
	for(int i = N-1; i >= 0; i-- )
	{
		for(int j = i-1; j >= 0;j--)
		{
			if(arr[j] < arr[i])
			{
				count++;
			}
			sum += arr[j];
		}
		lmin[i] = count;
		lsum[i] = sum;
		count = 0;
		sum = 0;
	}
	printf("Left minimum count - ");
	for(int i = 0; i < N; i++)
	{
		printf("%d ",lmin[i]);
	}
	printf("\n");
	printf("Sum of elements on left - ");
	for(int i = 0; i < N; i++)
	{
		printf("%d ",lsum[i]);
	}	
	printf("\n");
}

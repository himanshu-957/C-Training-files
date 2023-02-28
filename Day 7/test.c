#include<stdio.h>
void main()
{
	int N, S, initial = 0, sum = 0;
	printf("Enter the range of array: ");
	scanf("%d",&N);
	int arr[N];
	for(int i = 0; i < N; i++)
	{
		printf("Enter %d element of array: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the sum you want to find: ");
	scanf("%d",&S);
	for(int i=0; i < N; i++)
	{
		sum += arr[i];
		if(sum == S)
		{
			printf("%d %d: ",initial+1,i+1);
			printf("[");
			for(int j = initial; j<i+1;j++)
			{
				printf("%d ",arr[j]);
			}
			printf("]\n");
			sum = 0;
			i = initial;
			initial++;
		}
		else if(sum > S)
		{
			i = initial;
			sum = 0;
			initial++;
			
		}
		

	}
	
	/*curr = arr[N-1];
	printf("%d ",curr);
	for(int i = N-2; i >= 0; i--)
	{
		if(arr[i] > curr)
		{
			printf("%d ",arr[i]);
			curr = arr[i];
		}
	}*/
	/*for(int i = 0; i < N; i++)
	{
		curr = 0;
		for(int j = i+1; j<N; j++)
		{
			if(arr[i]<arr[j])
			{
				curr = 1;
				break;
			}
		}
		if(curr == 0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("\n");*/
	/*for(int i = 0; i < N; i++)
	{
		if(arr[i] == miss && miss <= N)
		{
			miss++;
			i=-1;
		}
		else if(i == N-1 && arr[i] != miss)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0 || miss > N)
	{
		printf("All numbers are present\n");
	}
	else
	{
		printf("%d number is missing\n",miss);
	}*/
}

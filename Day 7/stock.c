#include<stdio.h>
void main()
{
	int sp, cp, profit;
	int arr[7] = {100, 180, 260, 310, 40, 535, 695};
	sp = arr[6];
	for(int i = 6; i > 0; i--)
	{
		if(arr[i-1] > arr[i])
		{
			cp = arr[i];
			profit = sp - cp;
			if(profit != 0)
			{
				printf("%d: ",profit);
				printf("(%d %d)\n",cp,sp);
			}
			sp = arr[i-1];
		}
	}
	printf("%d: ",sp-arr[0]);
	printf("(%d %d)\n",arr[0],sp);
}

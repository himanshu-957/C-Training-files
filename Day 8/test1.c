#include<stdio.h>
void main()
{
//------------------------------------Question-1-------------------------------------------------------------------
	int accNo[9] = {1001,1002,1003,1004,1005,1006,1007,1008,1009};
	int accPass[9] = {1001,2001,3001,4001,5001,6001,7001,8001,9001};
	int balance[9] = {0,0,0,0,0,0,0,0,0};
	int status = 1, user, pass, flag = 0, choice, index, amount;
	while(status !=0)
	{
		printf("Enter your username: ");
		scanf("%d",&user);
		for(int i = 0; i < 9; i++)
		{
			if(user == accNo[i])
			{
				index = i;
				flag = 1;
			}
		}
		if(flag == 0)
		{
			printf("Username does not exist\n");
			continue;
		}
		flag = 0;
		printf("Enter password: ");
		scanf("%d",&pass);
		
		if(pass == accPass[index])
		{
			flag = 1;
		}
		if(flag == 0)
		{
			printf("Incorrect Password\n");
			continue;
		}
		flag = 0;
		printf("Enter one of the following option: \n Display amount - 1 \n Deposit amount - 2 \n Withdraw amount - 3\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("Your account balance = %d\n",balance[index] );
			break;

			case 2:
			
			printf("Enter amount you want to deposit: ");
			scanf("%d",&amount);
			balance[index]+= amount;
			printf("Your account balance after deposit = %d\n",balance[index] );
			
			break;
			
			case 3:
			printf("Enter amount you want to withdraw: ");
			scanf("%d",&amount);
			if(amount < balance[index])
			{
				balance[index]-= amount;
			}
			else
			{
				printf("Amount exceeds minimum balance\n");
			}
			printf("Your account balance after withdrawl = %d\n",balance[index] );
			
			break;
		}
		printf("Do you want to continue (0/1): ");
		scanf("%d",&status);
	}
//-----------------------------------------------------Question-2-----------------------------------------------------------
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

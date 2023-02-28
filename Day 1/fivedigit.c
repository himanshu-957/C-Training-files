#include<stdio.h>
void main()
{
	int num, d1, d2, d3, d4, d5;
	printf("Enter the number: ");
	scanf("%d", &num);
	d1 = num%10;
	num = num/10;
	d2 = num%10;
	num = num/10;
	d3 = num%10;
	num = num/10;
	d4 = num%10;
	num = num/10;
	d5 = num%10;
	printf("Sum of its digit is: %d\n", d1 + d2 + d3 + d4 + d5);
	printf("reverse of number is: %d%d%d%d%d \n",d1,d2,d3,d4,d5);
	printf("After adding 1 in each digit is: %d%d%d%d%d \n",(d5+1)%10,(d4+1)%10,(d3+1)%10,(d2+1)%10,(d1+1)%10);
}

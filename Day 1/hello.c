#include<stdio.h>
void main()
{
	int distance;
	printf("Enter distance between two cities: ");
	scanf("%d",&distance);
	float metres, feet, inches;
	metres = distance*1000;
	inches = distance*39370.1;
	feet = distance*3280.84;
	printf("%d km = %f metres\n",distance, metres);
	printf("%d km = %f inches\n",distance, inches);
	printf("%d km = %f feet\n",distance, feet);
	
}

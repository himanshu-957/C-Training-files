#include<stdio.h>
void main()
{
 int farh;
 printf("Enter the temperature in Fahrenheit: ");
 scanf("%d", &farh);
 float celc = (farh - 32)*5/9;
 printf("The temperature in celcius is: %f", celc);
}

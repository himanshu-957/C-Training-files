#include<stdio.h>
void main()
{
 int height;
 float inches, metres, centimetres;
 printf("Enter the height in feet: ");
 scanf("%d", &height);
 inches = 12*height;
 metres = 0.3048*height;
 centimetres = metres*100;
 printf("Height in inches = %f\n",inches);
 printf("Height in metres = %f\n",metres);
 printf("Height in centimetres = %f\n",centimetres);
}

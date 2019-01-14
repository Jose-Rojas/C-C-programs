//Fahrenheit degrees are entered and converted in Centigrade degrees.

#include<stdio.h>
int main()
{
 float ft, ct;
 printf("Enter temperature in Fahrenheit degrees ");
 scanf("%f", &ft);
 ct= 5/9 * (ft - 32);
 printf("Temp in Centigrade degrees is =%f", ct);
 return 0;
}

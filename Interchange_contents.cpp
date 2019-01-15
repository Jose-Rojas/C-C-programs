//Two variables a and b contain integer values, the program will interchange the values without
//the use of a third variable.

#include<stdio.h>

int main()
{
 int a,b;
 
 printf("Enter values of a and b: ");
 scanf("%d %d", &a, &b);
 
 printf("Before interchanging\n");
 printf("a=%d b=%d\n",a,b);
 
 a=a+b;
 b=a-b;
 a=a-b;
 
 printf("After interchanging\n");
 printf("a=%d b=%d\n",a,b);
 return 0;
}

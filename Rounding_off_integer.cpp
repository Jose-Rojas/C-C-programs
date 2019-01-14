//Write a program to round off an integer i to the next largest multiple of another integer j.
//For example 256 days when rounded off to the next largest multiple divisible by days in a week results into 259.
//When program execute:
//Enter values of i and j:
//256 7 (press enter)
//Next largest multiple of 256 = 259

#include "stdafx.h" //stdafx.h is for standard application framework if you use Visual Studio 2010(pre-compiled header)
//#include<stdio.h> //use this one if you like to compile in linux or netbeans.
int main()
{
 int i,j,k;
 printf("Enter values of i and j\n");
 scanf("%d %d", &i,&j);
 k=i+j-i%j;
 printf("Next largest multiple of %d=%d" ,i,k);
 return 0;
}

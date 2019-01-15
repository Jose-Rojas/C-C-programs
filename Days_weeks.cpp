//Program to find out how many days and how many weeks have passed between the dates 1/1/year and 12/31/year.

#include<stdio.h>

int main()
{
 int days,weeks,leftoverdays;
 days=31+29+31+30+31;
 weeks=days/7;
 leftoverdays=days%7;
 
 printf("days=%d\n",days);
 printf("weeks=%d\n",weeks);
 printf("left over days = %d\n", leftoverdays);
 
 return 0;
}

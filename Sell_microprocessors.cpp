//A microprocessors manufacturer sells three types of microprocessors: 8 bit, 16 bit and 32 bit.
//The customers are in three areas: government, industry and university.
//For 32 bit microprocessor if the order is for less than $50000 allow 5% discount to industrial customers 
//and 6.5% discount to the government agencies. If the order is $50000 or more a discount of 7.5% is given
//to the industrial customers and 8.5% to the government agencies.
//A discount of 10% is given to both industrial customers and government agencies if the order is more than
//$100000. Universities get a discount of 7.5%.
//For 16 bit microprocessors, no discount is given for orders less than $10000. For orders of  $10000 or more
//5% of discount is given to industrial customers and universities and 6% discount is given to government agencies.
//For 8 bit microprocessors a flat discount of 10% is given to all the three types of customers for any order.
//The program must reads the type of the customer, the type of the product, the amount of the order and prints
//the net ammount payable by the customer.

#include<stdio.h>

int main()
{
 int mptype;
 char customer;
 float order,discount=0,amount;
 
 printf("Enter MP type, customer type and order amount\n");
 scanf("%d %c %f", &mptype, &customer, &order);
 
 if(mptype==32)
 {
  if(customer=='u')
   discount=7.5;
  if(customer=='i')
  {
   if(order<50000)
    discount=5;
   else
    discount=7.5;
   if(order>100000)
    discount=10;
  }
  if(customer=='g')
  {
   if(order<50000)
    discount=6.5;
   else
    discount=8.5;
   if(order>100000)
    discount=10;
  }
 if(mptype==16)
 {
  if(order>10000)
  {
   if(customer=='u'||customer=='i')
    discount=5;
   else
    discount=6;
  }
 }
 if(mptype==8)
  discount=10;
  
 amount=order - order * discount/100;
 printf("MP= %d Customer= %c Order= %f amount= %f\n", mptype, customer, order, amount);
 
 return 0;
}
 
  
 

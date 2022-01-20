// Calculate discount

#include <stdio.h>

void main()
{
  int price, discount, netprice;

     printf("Enter price :");
     scanf("%d",&price);

     if(price > 1000)
        discount = price * 20 / 100;
     else
        discount = price * 10 / 100;

     netprice = price - discount;

     printf("Net price = %d", netprice);

}

// Displays net price for the given price with 10% discount
// Date : 17-JAN-2022

#include <stdio.h>

void main()
{
   float price, discount, net_price;

      // input
      printf("Enter price :");
      scanf("%f",&price);

      // Calculate 10% discount
      discount = price * 10 / 100;
      net_price = price - discount;

      //output
      printf("Net price = %.2f", net_price);

}


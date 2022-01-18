// Calculate net amount

#include <stdio.h>

void main()
{
  int price, qty, amount, tax, net_amount;

    printf("Enter price :");
    scanf("%d", &price);

    printf("Enter qty :");
    scanf("%d", &qty);

    amount = price * qty;
    tax = amount * 8 / 100;
    net_amount = amount + tax;

    printf("Amount      : %6d\n",amount);
    printf("+ Tax       : %6d\n",tax);
    printf("              -------\n");
    printf("Net Amount  : %6d\n",net_amount);
    printf("              -------\n");
}


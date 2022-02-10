// Saving Account

#include <stdio.h>

struct account {
    int acno;
    char ahname[30];
    int balance;
};


void main()
{
   struct account a = {1, "Billy Joy", 20000};
   char ch;
   int amt;

      printf("Enter tran type [d/w] :");
      ch = getchar();

      printf("Enter tran amount     :");
      scanf("%d",&amt);

      if (ch == 'd')
           a.balance += amt;
      else
           a.balance -= amt;

      printf("%d  %s  %d", a.acno, a.ahname, a.balance);
}

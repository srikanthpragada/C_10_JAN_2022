#include <stdio.h>

struct product  {
   char name[20];
   int price;
};


void main()
{
   struct product p1;
   struct product p2 = {"Mac Pro", 20000};


     printf("Enter price : ");
     scanf("%d", &p1.price);

     fflush(stdin);  // clear keyboard buffer

     printf("Enter name  : ");
     gets(p1.name);

     printf("\n%s - %d", p1.name, p1.price);

}

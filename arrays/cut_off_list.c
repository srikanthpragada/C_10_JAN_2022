// Display numbers > the given number
#include <stdio.h>

void main()
{
 int a[10];
 int i, sn;

     srand(time(0));
     for(i = 0 ; i < 10; i ++)
     {
        a[i] = rand() % 100;
        printf("%5d", a[i]);
     }

     printf("\nEnter a number : ");
     scanf("%d",&sn);

     for(i = 0 ; i < 10; i ++)
     {
        if(a[i] > sn)
           printf("%5d", a[i]);
     }

}

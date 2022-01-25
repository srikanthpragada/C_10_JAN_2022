// Take 5 numbers and display total

#include<stdio.h>
void main()
{
    int n, total = 0, i;

      for(i = 1; i <= 5; i ++)
      {
         printf("Enter a number : ");
         scanf("%d",&n);
         total += n;
      }

      printf("Total = %d\n",total);
}

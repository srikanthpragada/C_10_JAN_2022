// Take 5 numbers and display average of positive numbers

#include<stdio.h>
void main()
{
    int n, total = 0, count = 0, i;

      for(i = 1; i <= 5; i ++)
      {
         printf("Enter a number : ");
         scanf("%d",&n);
         if(n > 0)
         {
              total += n;
              count ++;
         }
      }
      printf("Average = %d\n",total/count);
}

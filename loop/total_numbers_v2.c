// Take 10 numbers or until 0 is given and display total

#include<stdio.h>
void main()
{
    int n, total = 0, i;

      for(i = 1; i <= 10; i ++)
      {
         printf("Enter a number [0 to stop] : ");
         scanf("%d",&n);

         if(n == 0)
            break;

         total += n;
      }

      printf("Total = %d\n",total);
}

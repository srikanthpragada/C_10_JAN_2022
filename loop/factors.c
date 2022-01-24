// Factors

#include<stdio.h>
void main()
{
    int n = 12345, i;

      for(i = 2; i <= n/2; i ++)
      {
          if (n % i == 0)
             printf("%d ",i);

      }
}

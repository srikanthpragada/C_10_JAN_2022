// Count Factors

#include<stdio.h>
void main()
{
    int n = 20, i, count = 0;

      for(i = 2; i <= n/2; i ++)
      {
          if (n % i == 0)
              count ++;
      }

      printf("Count = %d", count);
}

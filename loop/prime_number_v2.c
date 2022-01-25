// Prime number

#include<stdio.h>
void main()
{
    int n = 20, i, prime = 1;

      for(i = 2; i <= n/2; i ++)
      {
          if (n % i == 0) {
            prime = 0;
            break;
          }
      }

      if(prime == 1)
          printf("Prime Number");
      else
          printf("Not a prime number");
}

// Largest Factor

#include<stdio.h>
void main()
{
    int n = 500233, i;

      for(i = n/2; i > 0;  i --)
      {
          if (n % i == 0)
          {
             printf("Largest factor = %d",i);
             break;
          }
      }
}

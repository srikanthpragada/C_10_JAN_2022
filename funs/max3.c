#include <stdio.h>

int max(int a,int b,int c)
{
   if (a>b && a>c)
      return a;
   else
      if(b>c)
           return b;
      else
           return c;
}


void main()
{
     printf("max(10,20,30)    = %d\n", max(10,20,30));
     printf("max(30,20,25)    = %d\n", max(30,20,25));

}

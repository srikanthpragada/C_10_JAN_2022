//  Print grade based on marks

#include <stdio.h>

void main() {
  int  m1,m2;

    m1 = 60;
    m2 = 40;

    if(m1 > 80)
    {
         if (m2 > 80)
            printf("A");
         else
            printf("B");
    }
    else
    {
      if(m2 > 80)
         printf("C");
      else
         printf("D");
    }
}

// 5 * 5 Array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[5][5];
  int i,j;

     srand(time(0));
     for(i = 0; i < 5; i ++)
     {
        for (j = 0; j < 5; j ++)
        {
           a[i][j] = rand() % 50;
           printf("%5d", a[i][j]);
        }
        printf("\n");
     }

}

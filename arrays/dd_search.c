// 5 * 5 Array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[5][5];
  int i,j, sn, found = 0;

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

     printf("\nEnter search number : ");
     scanf("%d",&sn);

     for(i = 0; i < 5 && !found; i ++)
     {
        for (j = 0; j < 5; j ++)
        {
           if(sn == a[i][j])
           {
              printf("Found at %d, %d\n", i, j);
              found = 1;
              break;
           }
        }
     }

     if(!found)
        printf("Not found\n");

}

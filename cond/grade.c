#include<stdio.h>
void main()
{
 int marks;

  printf("enter marks obtained:");
  scanf("%d",&marks);

  if(marks > 80)
  {
     printf("grade A!");
  }
  else
  {
      if(marks > 60)
      {
        printf("grade B!");
      }
     else
     {
        printf("grade C!");
     }
  }

}

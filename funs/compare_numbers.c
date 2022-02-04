#include<stdio.h>

void compare(int a,int b)
{
   if(a > b)
     printf("%d is greater than %d\n",a,b);
   else
     if(b > a)
         printf("%d is greater than %d\n",b,a);
     else
         printf("%d is equal to %d\n",a,b);
}

void main()
{
     compare(5,8);
     compare(10,5);
     compare(10,10);
}

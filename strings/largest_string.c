// Take 5 strings and display largest string

#include <stdio.h>

void main()
{
 char st[30], lst[30];
 int i;


   strcpy(lst,"");

   for(i = 1; i <= 5; i ++)
   {
     printf("Enter string : ");
     gets(st);
     if( strcmp(st, lst) > 0)
         strcpy(lst,st);
   }

   printf("Largest string = %s\n",lst);

}

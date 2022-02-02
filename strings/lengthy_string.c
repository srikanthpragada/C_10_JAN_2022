// Take 5 strings and display lengthiest string

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
     if(strlen(st) > strlen(lst))
         strcpy(lst,st);
   }

   printf("Lengthy string = %s\n",lst);

}

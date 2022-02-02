// Take a string and count number of uppercase letters

#include <stdio.h>

void main()
{
 char name[30];
 int i, count = 0;

   printf("Enter string : ");
   gets(name);


   for(i = 0; name[i] != '\0'; i ++)
   {
       if (isupper(name[i]))
          count ++;
   }

   printf("Count = %d", count);

}

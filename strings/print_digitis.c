// Take a string and print all digits

#include <stdio.h>

void main()
{
 char s[30];
 int i;

   printf("Enter string : ");
   gets(s);


   for(i = 0; s[i] != '\0'; i ++)
   {
       if (isdigit(s[i]))
           putch(s[i]);
   }

}

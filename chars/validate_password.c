// validate password

#include <conio.h>

void main()
{
  char ch;
  int i, upper = 0, digit = 0;

     printf("Enter password : ");
     for(i = 1; i <= 6; i ++)
     {
        ch = getch();
        putch('*');
        if(isdigit(ch))
           digit = 1;
        else
            if(isupper(ch))
               upper = 1;
     }

     if(upper && digit)
        printf("\nValid Password");
     else
       printf("\nInvalid Password");
}

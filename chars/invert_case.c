#include <conio.h>

void main()
{
  char ch;

      printf("Enter char : ");
      ch = getchar();

      if(isupper(ch))
          putch(tolower(ch));
      else
          putch(toupper(ch));

}

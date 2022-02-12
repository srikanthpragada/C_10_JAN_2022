// Read names from names.txt

#include <stdio.h>

void main()
{
   FILE * fp;
   int ch;

      fp = fopen("names.txt", "rt"); // create file

      if(fp == NULL)
      {
          printf("Sorry! Could not open file. Qutting!");
          exit(1);   // exit with error
      }

      while(1)
      {
         ch = fgetc(fp);    // read one char
         if (ch == EOF)     // End of file
            break;

         putchar(ch);
      }

      fclose(fp);
}

// Read lines from the given file

#include <stdio.h>

void main()
{
   FILE * fp;
   char filename[30], line[100], *cp;
   int lineno = 1;

      printf("Enter filename :");
      gets(filename);

      fp = fopen(filename, "rt"); // create file

      if(fp == NULL)
      {
          printf("Sorry! Could not open file. Quitting!");
          exit(1);   // exit with error
      }

      while(1)
      {
        cp = fgets(line,100,fp);
        if(cp == NULL)  // EOF
            break;

        printf("%3d: %s", lineno, line);
        lineno ++;
      }

      fclose(fp);
}

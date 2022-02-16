// Print lines from the given file with line numbers
// Take filename on command line

#include <stdio.h>

void main(int argc, char * argv[])
{
   FILE * fp;
   char line[100], *cp;
   int lineno = 1;

      if(argc < 2)
      {
          printf("Usage : print_file  <filename>\n");
          exit(1);
      }

      fp = fopen(argv[1], "rt"); // create file
      if(fp == NULL)
      {
          printf("Sorry! Could not open file : %s. Quitting!\n", argv[1]);
          exit(2);   // exit with error
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

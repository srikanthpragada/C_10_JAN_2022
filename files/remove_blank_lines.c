// Remove blank lines from the given file

#include <stdio.h>

void main()
{
   FILE * sfp, *tfp;
   char filename[50], line[100], *cp;

      printf("Enter filename :");
      gets(filename);

      sfp = fopen(filename, "rt"); // create file
      if(sfp == NULL)
      {
          printf("Sorry! Could not open file : %s. Quitting!", filename);
          exit(1);   // exit with error
      }

      tfp = fopen("temp.txt", "wt"); // create file
      if(tfp == NULL)
      {
          printf("Sorry! Could not open file : temp.txt. Quitting!");
          exit(2);   // exit with error
      }

      while(1)
      {
        cp = fgets(line,100,sfp);
        if(cp == NULL)  // EOF
            break;

        // write to target file if it is not blank line
        // Length includes newline, so it must be > 1
        if (strlen(line) > 1)
            fputs(line, tfp);
      }

      fclose(sfp);
      fclose(tfp);

      remove(filename);                 // delete source file
      rename("temp.txt", filename);     // rename temp file to source file
}

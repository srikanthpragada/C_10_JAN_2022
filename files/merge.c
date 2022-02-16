// Merge source files into a target file
// Usage : merge target source1 source2 ...

#include <stdio.h>

void main(int argc, char * argv[])
{
   FILE * tfp, * sfp;
   int ch, i;

      if(argc < 3)
      {
          printf("Usage : merge  <target>  <source1> [<source2>] ...\n");
          exit(1);
      }

      tfp = fopen(argv[1], "wt"); // target file
      if(tfp == NULL)
      {
          printf("Sorry! Could not create file : %s. Quitting!\n", argv[1]);
          exit(2);   // exit with error
      }

      printf("Opened target file : %s\n",argv[1]);

      for(i = 2; i < argc ; i ++)
      {
         sfp = fopen(argv[i],"rt");
         if(sfp == NULL)
         {
             printf("Could not open file %s\n", argv[i]);
             continue;
         }

         printf("Opened Source file : %s\n",argv[i]);

         // copy source to target
         while(1)
         {
             ch = fgetc(sfp);
             if (ch == EOF)
                break;
             fputc(ch, tfp);
         } // while

         fclose(sfp);

      } // for

      fclose(tfp);
      printf("Completed\n");
}

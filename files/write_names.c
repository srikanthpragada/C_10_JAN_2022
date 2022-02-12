// Write names into names.txt

#include <stdio.h>

void main()
{
   FILE * fp;
   int i;
   char name[30];


      fp = fopen("names.txt", "wt"); // create file

      for(i=1; i <= 5; i ++)
      {
          printf("Enter name :");
          gets(name);

          fprintf(fp,"%s\n",name); // write name to file
      }

      fclose(fp);
}

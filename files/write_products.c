#include <stdio.h>

struct product {
    char name[30];
    int price;
};

void main()
{
     struct product p;
     FILE * fp;

         fp = fopen("products.dat", "wb");

         while(1)
         {
             fflush(stdin);     // clear keyboard buffer
             printf("Enter name [end to stop] : ");
             gets(p.name);

             if(stricmp(p.name, "end") == 0)
                  break;

             printf("Enter price :");
             scanf("%d",&p.price);

             fwrite(&p,sizeof(struct product), 1, fp);
         }

         fclose(fp);
}

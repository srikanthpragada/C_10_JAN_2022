#include <stdio.h>

struct product {
    char name[30];
    int price;
};

void main()
{
     struct product p;
     FILE * fp;
     int count;

         fp = fopen("products.dat", "rb");

         while(1)
         {
             count = fread(&p,sizeof(struct product), 1, fp);
             if(count == 0) // EOF
                break;

             printf("%-30s %8d\n", p.name, p.price);
         }

         fclose(fp);
}

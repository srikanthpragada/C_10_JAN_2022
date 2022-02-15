#include <stdio.h>

struct product {
    char name[30];
    int price;
};

void main()
{
     struct product p;
     FILE * fp;
     int count, pos, pno;

         fp = fopen("products.dat", "rb");
         while(1)
         {
             printf("Enter product number [-1 to stop] :");
             scanf("%d",&pno);

             if(pno == -1)
                break;

             // Move to product with given number
             pos = (pno - 1) * sizeof(struct product);

             fseek(fp, pos, SEEK_SET); // Move to pos from the beginning of the file

             count = fread(&p,sizeof(struct product), 1, fp);

             if(count == 0) // EOF
                printf("Sorry! Invalid product number.\n");
             else
                printf("%-30s %8d\n", p.name, p.price);
         }

         fclose(fp);
}

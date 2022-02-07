
int find(int a[5], int sn)
{
   int i;

      for(i = 0; i < 5 ; i ++)
      {
           if(a[i] == sn)
              return i;    // Found
      }

      return -1; // Not found
}

void main()
{
  int a [] = {10,20,3,40,50};

      printf("%d \n", find(a,40));
      printf("%d \n", find(a,30));
}

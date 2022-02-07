
int compare(int a[5], int b[5])
{
   int i;

      for(i = 0; i < 5 ; i ++)
      {
           if(a[i] != b[i])
              return 0;    // Mismatch
      }

      return 1; // Arrays are exactly same
}

void main()
{
  int a1 [] = {10,20,3,40,50};
  int a2 [] = {10,20,30,40,50};

  printf("%d ", compare(a1,a2));
}

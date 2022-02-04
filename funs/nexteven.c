
int nexteven(int num)
{
   return  num % 2 == 0 ? num + 2 : num + 1;
}

void main()
{
   int n;

     n = nexteven(13);
     printf("%d", n);
}

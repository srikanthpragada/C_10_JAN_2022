
void zero(int * p)
{
   *p = 0;
}

void main()
{
  int a = 100;
  int v;

       zero(&a);
       printf("%d ", a);

       scanf("%d", &v);
}

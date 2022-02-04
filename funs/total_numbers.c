
int total(int num)
{
   int i, total = 0;

      for(i = 1; i <= num ; i ++)
           total += i;

      return total;
}

int sum(int n)
{
    return n*(n+1)/2;
}


void main()
{
     printf("Total  = %d\n",  total(50));
     printf("Sum    = %d\n",  sum(50));

     printf("Total  = %d\n",  total(151));
     printf("Sum    = %d\n",  sum(151));
}

int count(int a[10], int sn)
{
  int i, count = 0;

    for(i = 0; i < 10; i ++)
    {
        if (a[i] == sn)
            count ++;
    }
    return count;
}


int total(int a[10])
{
  int i, total = 0;

    for(i = 0; i < 10; i ++)
    {
        total += a[i];
    }
    return total;
}

void main()
{
  int arr []= {1,2,3,4,5,67,84,5,6,5};

    printf("5 Occurs %d times\n", count(arr,5));
    printf("Total = %d  \n", total(arr));

}

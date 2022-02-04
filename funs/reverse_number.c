void reverse(int n)
{
 int digit;

    while(n>0)
    {
        digit= n%10;
        printf("%d",digit);
        n=n/10;
    }
}

void main()
{
    reverse(123);
}

int gcd(int a, int b)
{
    int i,small;

    small = a < b ? a : b;
    if (a % small == 0 && b % small == 0)
       return small;

    for(i = small/2; i >= 1; i --)
    {
        if(a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}


void main()
{
    printf("gcd of two numbers is %d\n",gcd(20,10));
    printf("gcd of two numbers is %d\n",gcd(27,45));
    printf("gcd of two numbers is %d\n",gcd(10,11));


}

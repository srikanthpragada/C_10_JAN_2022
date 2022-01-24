#include<stdio.h>
void main()
{
    int n = 1234, digit;

    while(n > 0)
    {
        digit = n % 10; // take rightmost digit
        printf("%d",digit);
        n /= 10;  // remove rightmost digit
    }
}

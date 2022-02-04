
int sum_of_digits(int num)
{
   int total = 0;

      while(num > 0) {
        total  += num % 10;
        num /= 10;
      }

      return total;
}

void main()
{

     printf("Sum of digits for 1234 is = %d",  sum_of_digits(1234));
}


int isprime(int num)
{
   int i;

      for(i = 2; i <= num/2 ; i ++)
      {
           if (num % i == 0)
              return 0;  // false
      }

      return 1;  // True
}



void main()
{
     printf("isprime(11)    = %d\n", isprime(11));
     printf("isprime(1000)  = %d\n", isprime(1000));

}

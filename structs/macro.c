// Macro

#define next_even(n)  n % 2 == 0 ? n + 2 : n + 1

void main()
{
  int v = 10;

      v = next_even(v);  //  v % 2 == 0 ? v + 2 : v + 1
      printf("%d", v);
}

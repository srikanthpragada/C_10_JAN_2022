// Functions and structures

#include <stdio.h>

struct time {
   int h,m,s;
};

void print_time(struct time t)
{
   printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
}

struct time get_start_time()
{
   struct time t = {0,0,0};
   return t;
}

void set_time_zero(struct time * p)
{
    p-> h = 0;
    p-> m = 0;
    p-> s = 0;
}

void main()
{
  struct time t = {5,10,30};
  struct time st;

      print_time(t);
      st = get_start_time();
      print_time(st);

      set_time_zero(&t);
      print_time(t);
}

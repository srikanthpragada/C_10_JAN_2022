// line function with parameters

void line(int len)
{
 int i;

    for(i=1; i <= len; i ++)
       putch('*');
}

void drawline(int len, char ch)
{
 int i;

    for(i=1; i <= len; i ++)
       putch(ch);
}

void main()
{
    drawline(25,'*');
    printf("\nSrikanth Technologies\n");
    drawline(30,'-');
}

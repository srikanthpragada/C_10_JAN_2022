// Print char type

void print_type(char ch)
{
  if(isupper(ch))
      printf("Uppercase");
  else
    if (islower(ch))
        printf("Lowercase");
    else
        if (isdigit(ch))
           printf("Digit");
        else
           printf("Other char");
}

void main()
{
    print_type('a');
}

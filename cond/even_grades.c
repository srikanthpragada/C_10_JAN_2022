#include<stdio.h>
void main()
{
    int n1, n2;
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);

    if(n1 % 2 == 0 && n2 % 2 == 0)
        printf("Grade A");
    else
        if(n1 % 2 == 0)
             printf("Grade B");
        else
            if(n2 % 2 == 0)
                printf("Grade C");
            else
                printf("Grade D");
}

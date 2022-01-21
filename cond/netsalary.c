// Net salary based on grade and salary

#include <stdio.h>

void main() {
  int grade, salary, hra, da, netsalary;

    printf("Enter grade [1/2] :");
    scanf("%d",&grade);

    printf("Enter salary :");
    scanf("%d",&salary);

    if (grade == 1)
    {
       hra = salary * 35 / 100;
       da = salary * 20 / 100;
    }
    else
    {
       hra = salary * 40 / 100;
       da = salary * 25 / 100;
    }

    netsalary = salary + hra + da;
    printf("Net salary = %d", netsalary);
}

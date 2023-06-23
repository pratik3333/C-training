#include <stdio.h>
#include <conio.h>
void main()
{
    int salary, grosssalary, HRA, DA;
    printf("Enter the Basic salary of employee: ");
    scanf("%d", &salary);

    if (salary <= 10000)
    {
        HRA = salary * 0.2;
        DA = salary * 0.8;
        grosssalary = salary + HRA + DA;
        printf("Gross salary is %d", grosssalary);
    }
    else if (salary >= 10001 && salary <= 20000)
    {
        HRA = salary * 0.25;
        DA = salary * 0.9;
        grosssalary = salary + HRA + DA;
        printf("Gross salary is %d", grosssalary);
    }
    else
    {
        HRA = salary * 0.30;
        DA = salary * 0.95;
        grosssalary = salary + HRA + DA;
        printf("Gross salary is %d", grosssalary);
    }
}
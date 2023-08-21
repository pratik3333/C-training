#include <stdio.h>
void main()
{
    struct Employee
    {
        int id;
        char name[10];
        long int salary;
    };

    struct Employee *emp;

    printf("\nEnter the name, id and salary of employee\n");
    scanf("%s %d %ld", &emp->name, &emp->id, &emp->salary);
    printf("\nthis is for test\n");
    printf("\nName is %s", emp->name);
    printf("\nid is %d", emp->id);
    printf("\nsalary is %ld", emp->salary);
}
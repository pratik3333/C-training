// use the structure member using its variable

#include <stdio.h>
#include <conio.h>

struct Employee
{
    int id;
    char name[100];
    int sal;
};

int main(int argc, char const *argv[])
{
    struct Employee emp;
    printf("Enter the name id and salary of employee\n");
    scanf("%s%d%d", &emp.name, &emp.id, &emp.sal);

    printf("\n Name is %s\n", emp.name);
    printf("\n Id is %d\n", emp.id);
    printf("\n salary is %d\n", emp.sal);
    return 0;
}

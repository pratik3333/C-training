#include <stdio.h>
#include<conio.h>
void main()
{
    struct Student
    {
        int id;
        char name[10];
    };
    struct Student s[5];

    printf("\nEnter the details of five students\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the student name and id\n");
        scanf("%s %d", &s[i].name,&s[i].id);
    }

    printf("\nDisplay student details\n");
    for (int i = 0; i < 5; i++)
    {
        printf("name is %s and id is %d",s[i].name,s[i].id );
        printf("\n");
    }
}
#include <stdio.h>
#include <conio.h>

union Student
{
    float per;
    char name[90];
};

union Student s1;
void main()
{
    int choice;
    do
    {
        printf("\nEnter Choice: \n");
        scanf("%d", &choice);

        printf("\nEnter 1 for adding percentage\n");
        printf("\nEnter 2 for adding Name\n");


        switch (choice)
        {
        case 1:
            union Student s1;
            break;
        case 2:

            union Student s1;
            break;

        default:
            printf("\nInvalid Input");
            break;
        }
    } while (choice!=3);
}

// union Student
// {
//     int name,per;
//     printf("\nEnter either percentage or name\n");
//     scanf("%s%d",&s1.name,&s1.per);

// };

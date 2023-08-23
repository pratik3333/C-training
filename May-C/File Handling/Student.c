#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    int id;
    char name[20];
    int fees;
};

struct Student std;
void insert();
void view();
void arrange();
void search();
int choice, sid;
void main()
{
    do
    {
        printf("\nEnter 1 for insert data: \n");
        printf("\nEnter 2 for view data: \n");
        printf("\nEnter 3 for Arrange Descending by fee data: \n");
        printf("\nEnter 4 for Search by name or id data: \n");
        printf("\nEnter choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            _flushall();
            insert();
            break;

        case 2:
            view();
            break;
        case 3:
            arrange();
            break;
        case 4:
            search();
            break;

        default:
            printf("\nInvalid input");
            break;
        }

    } while (choice > 0 && choice < 5);
}

void insert()
{
    FILE *fptr;
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\Student.txt", "a");
    printf("\nEnter name id and fees of student:\n");
    gets(std.name);
    scanf("%d%d", &std.id, &std.fees);

    fprintf(fptr, "\n%s\t%d\t%d", std.name, std.id, std.fees);
    printf("\nData Store succesfully....\n");
    fclose(fptr);
}
void view()
{
    FILE *fptr;
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\Student.txt", "r");
    while (fscanf(fptr, "%s%d%d", &std.name, &std.id, &std.fees) != -1)
    {
        printf("\n%s\t%d\t%d", std.name, std.id, std.fees);
    }

    fclose(fptr);
}

void arrange()
{
    FILE *fptr;
    int count=0,i=0;
    fptr=fopen("H:\\C-training\\May-C\\File Handling\\Student.txt", "r");
    while (fscanf(fptr,"%s%d%d",&std.name,&std.id,&std.fees) !=EOF)
    {
         count++;
    }
    fclose(fptr);

    struct Student std = (struct Student )malloc(count*sizeof(struct Student));
}

void search()
{

    FILE *fptr;
    fptr = fopen("H:\\C-training\\May-C\\File Handling\\Student.txt", "r");
    printf("\nEnter id for search: ");
    scanf("%d", &sid);
    int flag = 0;
    while (fscanf(fptr, "%s%d%d", &std.name, &std.id, &std.fees) != -1)
    {
        if (std.id == sid)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        printf("\nFile found\n");
        printf("%s\t%d\t%d", std.name, std.id, std.fees);
    }
    else
    {
        printf("\nFile not found\n");
    }

    fclose(fptr);
}
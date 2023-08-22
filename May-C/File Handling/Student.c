#include <stdio.h>
#include <string.h>

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
int choice;
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

    } while (choice>0 && choice<5);
}

void insert()
{
   FILE *fptr;
   fptr=fopen("H:\\C-training\\May-C\\File Handling\\Student.txt","a");
   printf("\nEnter name id and fees of student:\n");
   gets(std.name);
   scanf("%d%d",&std.id,&std.fees);

   fprintf(fptr,"\n%s\t%d\t%d",std.name,std.id,std.fees);
   printf("\nData Store succesfully....\n");
   fclose(fptr);
}
void view()
{

}

void arrange()
{

}

void search()
{

}
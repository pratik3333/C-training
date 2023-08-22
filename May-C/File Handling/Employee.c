#include<stdio.h>
#include<stdlib.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

struct Employee emp;

int main()
{
    FILE *fptr;
    fptr=fopen("H:\\C-training\\May-C\\File Handling\\emp1.txt","a");
    printf("\nEnter name, id and salary\n");
    gets(emp.name);
    scanf("%d %d",&emp.id,&emp.salary);
    fprintf(fptr,"%s\t%d\t%d\n",emp.name,emp.id,emp.salary);
    // while (fscanf(fptr,"%s %d %d", &emp.name,&emp.id,&emp.salary)!=-1)
    // {
    //     printf("%s %d %d",emp.name,emp.id,emp.salary);
    // }
    
    printf("\nData save succesfully........");
    fclose(fptr);

    return 0;

}
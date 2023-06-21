#include<stdio.h>
#include<conio.h>
void main()
{
    int id,salary;
    printf("Enter the emp id: ");
    scanf("%d",&id);
    printf("Enter the salary: ");
    scanf("%d",&salary);

    if (id<=100 && salary<=10000)
    {
        printf("Temporary");
    }
    else if (id<=100 && salary>=35000)
    {
        printf("Permanent");
    }
    else
    {
        printf("Invalid Input");
    }
    
    
}
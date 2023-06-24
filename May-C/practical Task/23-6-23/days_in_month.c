// WAP to print total number of days in month using switch case
#include<stdio.h>
void main()
{
    int choice;
    printf("Enter the month number between 1-12: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("31 days in month");
        break;

    case 2:
        printf("28 or 29 days in month");
        break;

    case 3:
        printf("31 days in month");
        break;

    case 4:
        printf("30 days in month");
        break;

    case 5:
        printf("31 days in month");
        break;

    case 6:
        printf("30 days in month");
        break;

    case 7:
        printf("31 days in month");
        break;
    case 8:
        printf("31 days in month");
        break;

    case 9:
        printf("30 days in month");
        break;

    case 10:
        printf("31 days in month");
        break;

    case 11:
        printf("30 days in month");
        break;

    case 12:
        printf("31 days in month");
        break;
   

    default:
        printf("Invalid Input");
        break;
    }
}
// Write a C program to input month number and print total number of days in 
// month using switch...case. C program to find total number of days in a month 
// using switch...case. Logic to print number of days in a month 
// using switch...case in C programming.
// Example
// Input
// Input month number: 3
// Output
// Total number of days = 31

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int month;
    printf("Input month number: ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
    printf(" Total number of days = 31");
        break;
    case 2:
    printf(" Total number of days = 28/29");
        break;

    case 3:
    printf(" Total number of days = 31");
    break;

    case 4:
    printf(" Total number of days = 30");
    break;

    case 5:
    printf(" Total number of days = 31");
    break;

    case 6:
    printf(" Total number of days = 30");
    break;

    case 7:
    printf("Total number of days = 31");
    break;

    case 8:
    printf("Total number of days = 31");
    break;

    case 9:
    printf("Total number of days = 30");
    break;

    case 10:
    printf("Total number of days = 31");
    break;

    case 11:
    printf("Total number of days = 30");
    break;

    case 12:
    printf("Total number of days = 31");
    break;

    
    default:
    printf("Invalid input! please enter month number between 1-12.");
        break;
    }

    return 0;

}

#include <stdio.h>
int main()
{
    int week;

    printf("Enter week number (1-7): ");
    scanf("%d",&week);
    switch(week)
    {
    case 1:
    printf("Monday");
        break;
    case 2:
    printf("Tuesday");
    break;
    
    case 3:
    printf("wednesday");
    break;
    
    case 4:
    printf("thursday");
    break;

    case 5:
    printf("friday");
    break;

    case 6:
    printf("saturday");
    break;

    case 7:
    printf("Sunday");
    break;
    
    default:
    printf("Invalid input");
        break;
    }
}
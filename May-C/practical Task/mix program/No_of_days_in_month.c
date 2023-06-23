// WAP to find number of days in month

#include <stdio.h>
void main()
{
    int i;
    printf("Enter the month number 1-12");
    scanf("%d", &i);

    if (i == 1)
    {
        printf("31 days in january");
    }
    else if (i == 2)
    {
        printf("29 days in February");
    }
    else if (i == 3)
    {
        printf("31 days in march");
    }
    else if (i == 4)
    {
        printf("30 days in April");
    }
    else if (i == 5)
    {
        printf("31 days in May");
    }
    else if (i == 6)
    {
        printf("30 days in June");
    }
    else if (i == 7)
    {
        printf("31 days in July");
    }
    else if (i == 8)
    {
        printf("31 days in August");
    }
    else if (i == 9)
    {
        printf("30 days in September");
    }
    else if (i == 10)
    {
        printf("31 days in October");
    }
    else if (i == 11)
    {
        printf("30 days in November");
    }
    else if (i == 12)
    {
        printf("31 days in December");
    }
    else
    {
        printf("Enter the number between 1 to 12");
    }
}
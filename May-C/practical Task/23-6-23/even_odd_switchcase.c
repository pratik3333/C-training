// WAP to check whether number is even or odd using switch case

#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:
        printf("%d is even", num);
        break;
    case 1:
        printf("%d is Odd", num);
        break;
    default:
        printf("Invalid Input");
        break;
    }
}
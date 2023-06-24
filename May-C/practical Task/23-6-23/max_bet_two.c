// WAP to find maximum between two numbers using switch case
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("Enter the two number num1 and num2: ");
    scanf("%d%d", &num1, &num2);
    switch (num1 > num2)
    {
    case 0:
        printf("Number %d is maximum", num2);
        break;
    case 1:
        printf("Number %d is maximum", num1);
        break;

    default:
        printf("Invalid Input");
        break;
    }
}
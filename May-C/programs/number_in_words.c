#include <stdio.h>
#include <conio.h>
void main()
{
    int no, rem, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &no);

    while (no > 0)
    {
        rem = no % 10;
        rev = (rev * 10) + rem;
        no /= 10;
    }
    printf("Reverse number is %d", rev);

    while (rev > 0)
    {
        switch (rev % 10)
        {
        case 0:
            printf("\nZero");
            break;

        case 1:
            printf("\nOne");
            break;

        case 2:
            printf("\nTwo");
            break;

        case 3:
            printf("\nThree");
            break;

        case 4:
            printf("\nFour");
            break;

        case 5:
            printf("\nFive");
            break;

        case 6:
            printf("\nSix");
            break;

        case 7:
            printf("\nSeven");
            break;

        case 8:
            printf("\nEight");
            break;

        case 9:
            printf("\nNine");
            break;

        default:
            printf("\nInvalid Input");
            break;
        }
        rev/=10;
    }
}
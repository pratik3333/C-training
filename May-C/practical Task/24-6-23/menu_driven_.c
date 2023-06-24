#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    long int no, temp;
    int choice, rem, rev = 0, count = 0, armno = 0, sqr, powerno,exponent;
    printf("Enter the number: ");
    scanf("%d", &no);
    printf("\n\nEnter 1 for reverse the number: ");
    printf("\nEnter 2 for checking palindrome number: ");
    printf("\nEnter 3 for checking armstrong number: ");
    printf("\nEnter 4 for finding the square root of number: ");
    printf("\nEnter 5 for power of number : \n\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        while (no != 0)
        {
            rem = no % 10;
            rev = (rev * 10) + rem;
            no = no / 10;
        }
        printf("Reverse number is: %ld", rev);

        break;

    case 2:
        temp = no;
        while (no != 0)
        {
            rem = no % 10;
            rev = (rev * 10) + rem;
            no = no / 10;
        }
        if (temp == rev)
        {
            printf("Number is palindrome number.");
        }
        else
        {
            printf("Number is not palindrome number.");
        }
        break;

    case 3:
        temp = no;
        while (no != 0)
        {
            no = no / 10;
            ++count;
        }
        no = temp;
        while (no != 0)
        {
            rem = no % 10;
            armno = armno + pow(rem, count);
            no = no / 10;
        }
        if (temp == armno)
        {
            printf("Armstrong number");
        }
        else
        {
            printf("Not armstrong number");
        }

        break;

    case 4:
        while (no != 0)
        {
            sqr = sqrt(no);
        }
        printf("Square root of number is: %d", sqr);
        break;

    case 5:
    printf("Enter the Exponent: ");
    scanf("%d",&exponent);
    powerno=pow(no,exponent);
    printf("power of number is %d ",powerno);
        break;

    default:
        printf("Invalid Input");
        break;
    }
}
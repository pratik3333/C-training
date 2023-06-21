#include<stdio.h>
void main()
{
    long int no;
    printf("\nEnter the number: ");
    scanf("%ld",&no);

    if (no>0)
    {
        printf("Number is positive");
    }
    else if (no<0)
    {
        printf("Number is Negative");

    }
    else if (no==0)
    {
        printf("Number is Zero");
    }

    else
    {
        printf("Invalid input");
    }
    
}
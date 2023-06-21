#include <stdio.h>
#include <conio.h>
void main()
{
    int age, choice;

    printf("Enter the age of candidate: ");
    scanf("%d", &age);

    printf("\n Enter 1 for Checking the canidate is Eligible fir voting or not: ");
    printf("\n Enter 2 for Checking the canidate is Eligible fir Driving License or not: ");

    printf("\n\nEnter  choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        if (age >= 18)
        {
            printf("Candidate is Eligible for Voting");
        }
        else
        {
            printf("Candidate is not Eligible for Voting");
        }
        break;

    case 2:
        if (age >= 18 && age <= 80)
        {
            printf("Candidate is Eligible for Driving License");
        }
        else
        {
            printf("Candidate is not Eligible for Driving License");
        }
        
        break;

    default:
        printf("Something went wrong.");
        break;
    }
}
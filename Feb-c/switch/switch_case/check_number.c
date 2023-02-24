#include <stdio.h>
#include <conio.h>
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d",&num);

    switch (num>0)
    {
    case 1:
    printf("The number is positive.");
        break;
    
    case 0:
    if (num<0)
    {
        printf("The number is negative");
    }
    else
    printf("The number is zero");

    break;
    
    default:
    printf("Invalid input");
        
    }
}
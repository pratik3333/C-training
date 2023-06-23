// WAP to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
#include<conio.h>
void main()
{
    int no;
    printf("Enter the number: ");
    scanf("%d",&no);

    if (no%5==0 && no%11==0)
    {
        printf("Number is divisible by 5 and 11.");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }
    
}
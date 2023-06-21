#include<stdio.h>
void main()
{
    int no;
    printf("Enter the number: ");
    scanf("%d",&no);
    if (no%2==0)
    {
        printf("Number is Even");
    }
    else if (no%2==1)
    {
        printf("Number is Odd");
    }
    else
    {
        printf("Something went wrong");
    }
    
    
}
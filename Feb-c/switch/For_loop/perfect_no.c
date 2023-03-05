#include<stdio.h>

void main()
{
    int i,no,sum=0;

    printf(" Enter the number: ");
    scanf("%d",&no);

    for ( i = 1; i <no; i++)
    {
        if (no%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (no==sum)
    {
        printf("Number is perfect number.");
    }
    else
    {
        printf("Number is not perfect number.");
    }
    
}
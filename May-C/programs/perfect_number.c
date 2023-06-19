#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0,no,temp,rem;
    printf("Enter the number: ");
    scanf("%d",&no);

    temp=no;

    for ( i = 1; i <no; i++)
    {
        //  rem=no%i;
        if (no%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (sum==temp)
    {
        printf("Number is perfect number.");
    }
    else
    {
        printf("Number is not perfect number.");
    }
}
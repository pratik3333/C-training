#include<stdio.h>
#include<conio.h>

void main()
{
    int i,sum=0,no,dublinum;
    printf("Enter the number you want to check: ");
    scanf("%d",&no);
    dublinum=no;

    for ( i = 1; i < no; i++)
    {
        if (no%i==0)
        {
            sum=sum+i;
        }
        
    }
    if (sum==dublinum)
    {
        printf("Number is perfect number");
    }
    else
    {
        printf("Number is not perfect number");
    }
    
    
}
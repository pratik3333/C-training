// Check number is prime number or not

#include<stdio.h>
#include<conio.h>
void main()
{
    int no,count=0,i;
    printf("\nEnter the numebr: ");
    scanf("%d",&no);

    for ( i=1; i<=no; i++)
    {
        if (no%i==0)
        {
            count++;
        }
        
    }
    if (count==2)
    {
        printf("\nNumber is prime number.");
    }
    else
    {
        printf("NUmber is not prime number.");
    }
}
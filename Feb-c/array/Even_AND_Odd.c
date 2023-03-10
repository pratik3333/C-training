// Find the even and odd numbers in array.

#include<stdio.h>

void main()
{
    int a[5],i;

    printf("Enter the five elements of array: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Display the even numbers of array: ");
    for ( i = 0; i <5; i++)
    {
        if (a[i]%2==0)
        {
            printf("\t%d",a[i]);
        
        }
        
    }
    printf("\nDisplay the odd numbers of array: ");
    for ( i = 0; i <5; i++)
    {
        if (a[i]%2==1)
        {
            printf("\t%d",a[i]);
        
        }
    }
    
    
}
// WAP to seperate odd and even integers in separate arrays?
#include<stdio.h>
void main()
{
    int a[5],i,j,even,odd;
    printf("Enter the five elements of array: \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDisplay all the array elements:\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }

    printf("\nEven numbers are: \n");
    for ( i = 0; i <5; i++)
    {
        if (a[i]%2==0)
        {
            printf("\t%d",a[i]);
        }
        
    }

    printf("\nodd numbers are: \n");
    for ( i = 0; i <5; i++)
    {
        if (a[i]%2==1)
        {
            printf("\t%d",a[i]);
        }
        
    }
    
    
    
    
}
#include<stdio.h>

void main()
{
    int a[5],i,j,temp;

    printf("Enter the five values of array: ");
    for ( i = 0; i <5; i++)
    {
        scanf("\n%d",&a[i]);

    }
    
    printf("\narray element before descending: ");
    for ( i = 0; i <5; i++)
    {
        printf("\n%d ",a[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j =(i+1); j<5; j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            
            }
            
            
        }
        
    }
    
    printf("Array elements in descending orders: ");
    for ( i = 0; i <5; i++)
    {
        printf("\n%d ", a[i]);
    }
    
    
}
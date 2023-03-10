// Find the missing element in array

#include<stdio.h>

void main()
{
    int a[5],i,j;
    
    printf("Enter the five elements of array: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);

    }

    printf("Display the missing values: \n");
    for ( i=0; i<5; i++)
    {
        for (j= a[i]+1; j<a[i+1]; j++)
        {
            printf("%d\t",j);
        }
        
    }
    
    
}
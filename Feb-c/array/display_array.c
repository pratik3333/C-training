// Enter the 5 elements in array and display it.

#include<stdio.h>

void main()
{
    int a[5],i;
    printf("Enter the five elements of array: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Display the elements of array: ");
    for ( i = 0; i <5; i++)
    {
        printf("%d ",a[i]);
    }
    
    

}
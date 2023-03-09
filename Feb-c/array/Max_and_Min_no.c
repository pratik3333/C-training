// Find the max number and min number in array.

#include<stdio.h>

void main()
{
    int a[5],i,max,min,temp;

    printf("Enter the five values of array: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    max=min=a[0];
    for ( i = 1; i <5; i++)
    {  
        if (min>a[i])
        min=a[i];

        if(max<a[i])
        max=a[i];
        
    }
    printf("Minimum array is: %d ",min);
    printf("\n Maximum array is: %d ",max);



    
}
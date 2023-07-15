#include<stdio.h>
void main()
{
    int i,a[5],max,len;
    printf("Enter the five values of array:\n ");
    len=sizeof(a)/sizeof(a[0]);
    for ( i = 0; i <len; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Display the array value:\n ");
    for ( i = 0; i < len; i++)
    {
        printf("\t%d",a[i]);
    }

    
    // Finding max value
    max=a[0];

    for ( i = 1; i <len; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
    
    printf("\nThe maximum value in array is %d",max);
    
}
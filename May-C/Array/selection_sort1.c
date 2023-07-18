#include<stdio.h>
void main()
{
    int i,a[5],j,min_ind;
    printf("Enter the five elements of array: \n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nArray before sorting\n");
    for ( i = 0; i <5; i++)
    {
        printf("%d\t",a[i]);
    }

    // Selection sort logic

    for ( i = 0; i <4; i++)
    {
        min_ind=i;
        for ( j = (i+1); j < 5; j++)
        {
            if (a[j] < a[min_ind])
            {
                min_ind = j;
            }

            
        }
        if (min_ind != i)
        {
            int temp=a[i];
            a[i]=a[min_ind];
            a[min_ind]=temp;
        }
        
    }
    
    printf("\nAfter sorting array: \n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
    
}
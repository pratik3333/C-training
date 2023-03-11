#include<stdio.h>
void main()
{
    int a[5],i,j,temp,count=0;

    printf("Enter the five values of array: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Display the array in descending order: ");
    for ( i = 0; i <5; i++)
    {
        for ( j =(i+1); j <5; j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

            
        }
        
    }
    for ( i = 0; i <5; i++)
    {
        if (a[i]==a[j])
        {
            ++count;
        }
        
    }
    printf("count is  %d ",count);
    printf("\nSecond largest value is: %d",a[1]);
    
}
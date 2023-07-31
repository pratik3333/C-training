#include<stdio.h>
void main()
{
    int a[5],i,j,count;
    printf("\nEnter five elements of array:\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nDisplay array elements:\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    
    printf("\nPrime number are: \n");
    for ( i = 0; i <5; i++)
    {
        count=0;
        for ( j = 2; j <a[i]; j++)
        {
            if (a[i]%j==0)
            {
                count++;
                break;
            }
            
        }
        if (count==0)
        {
            printf("\t%d",a[i]);
        }
        
    }
    
}
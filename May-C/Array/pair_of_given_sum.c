#include<stdio.h>
void main()
{
    int a[5],i,j,sum,gsum,flag=0;
    printf("\nEnter five values of array's: \n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nPlease Enter the sum: \n");
    scanf("%d",&gsum);



    for ( i = 0; i <5; i++)
    {
        sum=0;
        for ( j =i+1; i <5; i++)
        {
            if (a[i]+a[j]==gsum)
            {
                flag=1;
                break;
            }
            
        }
        
    }
    
    if (flag)
    {
        printf("\n\nPair of elements can make the given sum by the value of index %d and %d",i,j);
    }
    else
    {
        printf("\nThere no pair of that\n");
    }
}
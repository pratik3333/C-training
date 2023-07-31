#include<stdio.h>
void main()
{
    int a[5],i,j,sum,gsum,flag=0,x;
    printf("\nEnter five values of array's: \n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nPlease Enter the sum: \n");
    scanf("%d",&gsum);


    
    x=a[i]+a[j];
     
    for ( i = 0; i <5; i++)
    {
        
        for ( j =i+1; i <5; i++)
        {
            if (x==gsum)
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
#include<stdio.h>
void main()
{
    int a[5],*b[5],i,j,count;

    printf("\nEnter five values in array: \n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDisplay array values\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    

    for ( i = 0; i <5; i++)
    {
        b[i]=&a[i];
    }


    printf("\nPrime numbers: \n");
    for ( i = 0; i <5; i++)
    {
        count=0;
        for ( j = 2; j<*b[i]; j++)
        {
            if (*b[i]%j==0)
            {
                count++;
                break;
            }
            
        }
        
        if (count==0)
        {
            printf("\t%d",*b[i]);
        }
        
    }
    
    
}
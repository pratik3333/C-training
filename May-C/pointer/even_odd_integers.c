#include<stdio.h>
void main()
{
    int a[5],*b[5],*c[5],i,count=1,c1=1;

    printf("\nEnter five elements values: \n");
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
    for ( i = 0; i <5; i++)
    {
        c[i]=&a[i];
    }
    
    
    
    for ( i = 0; i <5; i++)
    {
        if (a[i]%2==0)
        {
            b[i]=&a[i];
            // ++count;
        }
        else
        {
            c[i]=&a[i];
            // ++c1;
        }
        
    }
    
    printf("\nEven numbers using pointer are: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",*b[i]);
    }
    
    printf("\nOdd numbers using pointer are: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",*c[i]);
    }
    
    
    
}
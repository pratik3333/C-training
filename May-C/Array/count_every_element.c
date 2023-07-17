#include<stdio.h>
void main()
{
    int a[10],i,j,count,len;
    len=sizeof(a)/sizeof(a[0]);
    printf("\nEnter the 10 values of array: \n");
    for ( i = 0; i <len; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDisplay the array\n");
    for ( i = 0; i <len; i++)
    {
        printf("\t%d",a[i]);
    }

    // Ascending order logic
    for ( i = 0; i < len; i++)
    {
        for ( j = (i+1); j <len; j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    
    printf("\nDisplay array after ascending:\n");
    for ( i = 0; i < len; i++)
    {
        printf("\t%d",a[i]);
    }
    
    // counting logic

    count=1;
    for ( i = 0; i <len; i++)
    {
        if (a[i]==a[i+1])
        {
            ++count;
        }
        else
        {
            printf("\n%d----count is---%d\n",a[i],count);
            count=1;
        }
        
    }
    
    

    
    
    
}
#include<stdio.h>
void main()
{
    int a[5],i,pos,flag=0;
    printf("\nEnter the five values of array\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the desired position\n");
    scanf("%d",&pos);

    printf("\nArray before deleting\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    
    for ( i = 0; i <5; i++)
    {
        if (i==(pos-1))
        {
            flag=1;
            break;
        }
        
    }
    
    if (flag)
    {
        for ( i =(pos-1); i <5; i++)
        {
            a[i]=a[i+1];
        }
        
        printf("\nArray After deleting position\n");
        for ( i = 0; i <4; i++)
        {
            printf("\t%d",a[i]);
        }
        
    }
    else
    {
        printf("\nInvalid input");
    }
    
}
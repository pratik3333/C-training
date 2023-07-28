#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[5],*b[5];
    int i,j,temp;

    printf("\nEnter the array values:\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDisplay array\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }

    for ( i = 0; i <5; i++)
    {
        b[i]=&a[i];
    }

    printf("\nDisplay ptr1 values: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%u",b[i]);
    }
    
    
    for ( i = 0; i < 5; i++)
    {
        for ( j =(i+1); j <5; j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
    }


    printf("\nFeatching ptr values using ptr1 through pointer\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%u",*b[i]);
    }
    
    
}
#include<stdio.h>
void main()
{
    int a[5],*ptr,i,j,count;
    printf("\nEnter the five values in array: \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nDisplay array address\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",ptr);
        ptr++;
    }
    
    ptr=&a;
    printf("\nDisplay array elements\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",*(ptr+i));
       
    }
    
    printf("\nPrime numbers are: \n");
    for ( i = 0; i <5; i++)
    {
        count=0;
        for ( j = 2; j <*ptr; j++)
        {
            if (*ptr%j==0)
            {
                count++;
            }
            
        }
        if (count==0)
        {
            printf("\t%d",*ptr);
        }
        
        ptr++;
    }
    
    
}
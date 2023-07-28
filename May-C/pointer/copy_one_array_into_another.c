#include<stdio.h>
void main()
{
    int a[5],*b[5],i;

    printf("\nEnter the a block values:\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

     
    for ( i = 0; i <5; i++)
    {
        b[i]=&a[i];
        
    }
    
     printf("\nDisplay b block array address: \n");
    for ( i = 0; i <5; i++)
    {
        printf("%d\t",b[i]);
    }


    printf("\n\nDisplay array values: ");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",*b[i]);
    }
    
    
}
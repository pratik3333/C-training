#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter 5 array values\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nDisplay the array value:\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    
}
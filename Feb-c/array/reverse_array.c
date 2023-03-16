// WAP to enter five element in array and reverse it.

#include<stdio.h>
void main()
{
    int a[5],i,j;
    printf("Enter the five elements of array: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nDisplay array: ");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    
    printf("\nReverse array: \n");
    for ( i =a[5]; i >0 ; i--)
    {
        
        printf("\t%d ",a[i]);
    }
    
}
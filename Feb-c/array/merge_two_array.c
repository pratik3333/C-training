// Merge two array in a array.

#include<stdio.h>
void main()
{
    int a[5],b[5],i,c[10],k,j=0;
    printf("Enter the first array value: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the second array value: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&b[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        c[i]=a[i];
    }
    for ( i = 5; k=10; i++)
    {
        c[i]=b[j];
        j++;
        
    }
    printf(" %d ",c[i]);



    
}
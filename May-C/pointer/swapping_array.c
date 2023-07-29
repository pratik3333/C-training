#include<stdio.h>
void main()
{
    int a[5],b[5],i;
    int *c[5],*d[5];

    printf("\nEnter five elements in first array: \n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter five elements in second array: \n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&b[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        c[i]=&a[i];
    }

    for ( i = 0; i <5; i++)
    {
        d[i]=&b[i];
    }

    printf("\nBefore swapping array's: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",b[i]);
    }
    
    
    
    for ( i = 0; i <5; i++)
    {
        *c[i]=*c[i]+*d[i];
        *d[i]=*c[i]-*d[i];
        *c[i]=*c[i]-*d[i];
    }

    printf("\nAfter swapping array's Using pointer : \n");

    for ( i = 0; i <5; i++)
    {
        printf("\t%d",*c[i]);
    }
    
    printf("\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",*d[i]);
    }
    
    
    
}
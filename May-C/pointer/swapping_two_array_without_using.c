#include<stdio.h>
void main()
{
    int a[5],b[5],*c,*d,temp,i;
    
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
    
    c=a;
    d=b;
    
    temp=c;
    c=d;
    d=temp;

    printf("\nAfter swapping two array\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",c[i]);
    }
    
    printf("\n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",d[i]);
    }
    

    
}
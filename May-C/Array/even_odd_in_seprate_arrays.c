#include<stdio.h>
void main()
{
    int a[5],b[5],c[5],i;
    int j=0,k=0;

    printf("\nEnter five values in array\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nDisplay array\n");
    for ( i = 0; i < 5; i++)
    {
         printf("%d\t",a[i]);
    }

    for ( i = 0; i <5; i++)
    {
        if (a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
        
    }
    
    printf("\nEven number array is\n");
    for ( i = 0; i <j; i++)
    {
        printf("\t%d",b[i]);
    }

    printf("\n\nOdd number array is\n");
    for ( i = 0; i <k; i++)
    {
        printf("\t%d",c[i]);
    }
    
}
// Merge two array in a array.

#include<stdio.h>
void main()
{
    int a[5],b[5],i,c[10],k=0,j=0;
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

    for ( i = 0; i < 10; i++)
    {
        if (k==5)
        {
            c[i]=b[j];
            j++;
        }
        else if (j==5)
        {
            c[i]=a[k];
            k++;
        }
        else if (a[k]>=b[j])
        {
            c[i]=b[j];
            j++;
        }
        else
        c[i]=a[k];
        k++;
        
        
    }

    
    
    



    
}
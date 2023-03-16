// WAP to merge two arrays of same size sorted in descending order 

#include<stdio.h>
void main()
{
    int a[5],b[5],c[10],i,j,k,temp;

    printf("Enter the first array values: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);   
    }

    printf("Enter the second array values: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&b[i]);
    }
    
    printf("\nDisplay first array: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    
    printf("\nDisplay the second array: \n");
    for ( i = 0; i < 5; i++)
    {
        printf("\t%d",b[i]);
    }
    j=0;
    k=0;
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
        {
            c[i]=a[k];
            k++;
        }
        
    }

    for ( i = 0; i < 10; i++)
    {
        for ( j =(i+1); j<10; j++)
        {
            if (c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            
            }
            
            
        }
        
    }
    printf("\nmerge array in descending order: ");
    for ( i = 0; i <10; i++)
    {
        printf("\t%d",c[i]);
    }
    
    
}
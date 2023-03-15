
// WAP to merge two array

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],b[5],c[10],i,j,k;
    printf("Enter the first array: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the second array: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Display first array: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    
    printf("\nDisplay second array: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",b[i]);
    }
    
    j=0;
    k=0;
    for ( i = 0; i <10; i++)
    {
        if (i==5)
        {
            c[i]=b[k];
            k++;
        }
        else if (j==5)
        {
            c[i]=a[j];
            j++;
        }
        else if (a[j]>=b[k])
        {
            c[i]=b[k];
            k++;
        }
        else
        {
            c[i]=a[j];
            j++;
        }
    }

    printf("\nfinal merge array: ");
    for ( i = 0; i <10; i++)
    {
        printf("\t%d",c[i]);
    }
    
    
}

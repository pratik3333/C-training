#include<stdio.h>
void main()
{
    int a[20],b[20],c[20];
    int i,j=0,k=0,no;
    printf("\nSize of array: \n");
    scanf("%d",&no);

    printf("\nENTER THE ARRAY:\n");
    for ( i = 0; i <no; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <no; i++)
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
    printf("\nEven numbers are\n");
    for ( i = 0; i <j; i++)
    {
        printf("\t%d",b[i]);
    }
    printf("\nOdd numbers are\n");
    for (i = 0; i <k; i++)
    {
        printf("\t%d",c[i]);
    }
    
    
    
    
}
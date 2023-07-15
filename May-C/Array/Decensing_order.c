#include<stdio.h>
void main()
{
    int i,a[5],len,temp,j;
    len=sizeof(a)/sizeof(a[0]);

    printf("\nEnter the five elements of array: \n");
    for ( i = 0; i <len; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nDisplay array before sorting: \n");
    for ( i = 0; i < len; i++)
    {
        printf("\t%d",a[i]);
    }
    
    //applying sorting logic
    for ( i = 0; i <len; i++)
    {
        for ( j = (i+1); j <len; j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }

    printf("\n\nDisplay array after sorting in Decending order: \n");
    for ( i = 0; i < len; i++)
    {
        printf("\t%d",a[i]);
    }
    
    
}
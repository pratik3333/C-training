#include<stdio.h>
void main()
{
    int a[5],i,temp,len,j;

    len=sizeof(a)/sizeof(a[0]);

    printf("\nEnter the five values of array:\n");
    for ( i = 0; i <len; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Display the array Before sorting \n");
    for ( i = 0; i < len; i++)
    {
        printf("\t%d",a[i]);
    }

    for ( i = 0; i <len; i++)
    {
        for ( j = (i+1); j <len; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
            
        }
        
    }
    
    printf("\nDisplay array after sorting: \n");
    for ( i = 0; i <len; i++)
    {
        printf("\t%d",a[i]);
    }
    


    
    
}
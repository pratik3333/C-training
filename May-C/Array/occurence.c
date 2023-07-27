#include<stdio.h>
void main()
{
    int a[10],i,j,temp,count;
    printf("Enter the 10 elements of array: \n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    // ascending order logic
    for ( i = 0; i <10; i++)
    {
        for ( j = i+1; j <10; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    
    printf("\nAfter ascending order: \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d\t",a[i]);
    }

    count=1;
    for ( i = 0; i <10; i++)
    {
        if (a[i]==a[i+1])
        {
            ++count;
        }
        else
        {
            printf("\n%d------%d",a[i],count);
            count=1;
        }
        
    }
    
    
}
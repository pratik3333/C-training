// write a program to enter the 5 values in ascending order and store
// in array and find out the missing element from array?

#include<stdio.h>
void main()
{
    int a[5],i,j,temp;
    printf("Enter the array values: \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nDisplay the array: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    
//    ascending order logic
    for ( i = 0; i <5; i++)
    {
        for ( j =(i+1); j <5; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
           
    }
     printf("\nArranging in ascending order: \n");
     for ( i = 0; i < 5; i++)
     {
        printf("\t%d",a[i]);
     }

    printf("\nprinting missing element: \n");
    for ( i = 0; i <5; i++)
    {
        for ( j =a[i]+1; j <a[i+1]; j++)
        {
            printf("\t%d",j);
        }
        
    }
    
     

    
    
}
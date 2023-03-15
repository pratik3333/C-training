// delete the array value

#include<stdio.h>
void main()
{
    int a[5],index,i,j,del;

    printf("Enter the array value: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nDisplay the array: \n");
    for ( i = 0; i <5; i++)
    {
        printf("\t%d",a[i]);
    }
    
    printf("\nEnter the deleting index: \n");
    scanf("%d",&index);

    del=a[index-1];
    for ( i = 0; i <5; i++)
    {
        if (del!=a[i])
        {
            printf("\t%d",a[i]);
        }
        
    }
    

}
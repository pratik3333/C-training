#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,i,size,*ptr1;

    printf("\nEnter the size of array: ");
    scanf("%d",&size);

    ptr=(int *)malloc(sizeof(int)*size);
    
    printf("\nEnter the values in array: \n");
    for ( i = 0; i <size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("\nDisplay array values: \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",ptr[i]);
    }
    
    ptr1=&ptr;
    for ( i = 0; i <size; i++)
    {
        ptr1[i]=ptr[i];
    }

    printf("\nDisplay array values in ptr1\n");
    for ( i = 0; i <size; i++)
    {
        printf("%d\t",ptr1);
    }
    
    
    
}
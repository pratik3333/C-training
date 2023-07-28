#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,i,size;

    printf("\nEnter the size of array: ");
    scanf("%d",&size);

    ptr=(int *)malloc(sizeof(int)*size);
    
    printf("\nEnter the array values: \n");
    for ( i = 0; i <size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("\nDispaly Array values: \n");
    for ( i = 0; i <size; i++)
    {
        printf("%d\t",ptr[i]);
    }
    
}
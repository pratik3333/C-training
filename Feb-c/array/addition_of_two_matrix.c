// WAP to create two 3*3 matrix and calculate its addition.

#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,sum=0;

    // taking input for first array
    printf("Enter the first array value: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    // taking input for second array
    printf("Enter the fsecond array value: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
   
    // printing first matrix
    printf("Display the first array values: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    
    // printing second matrix
    printf("\nDisplay the first array values: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }

    // Addition of two matrix
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            c[i][j]=a[i][j] + b[i][j];
        }
        
    }
    printf("Addition of two matrix is: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
           printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    
}
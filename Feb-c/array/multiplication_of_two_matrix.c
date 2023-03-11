// WAP to create two 3*3 matrix and calculate its multiplication.

#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("First array values: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter second array values:  \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    printf("\nDisplay first matrix\n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDisplay second matrix: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    
    // logic for Multiplication of two matrix
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j<3; j++)
        {
            c[i][j]=a[i][j] * b[i][j];
        }
        
    }

    // printing the resultant matrix
    printf("\nMultiplication of two matrix: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
        
    }
    

    
    
    
}
// WAP to create two 3*3 matrix and calculate its multiplication.

#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;

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
    
    // logic for Multiplication of two matrix.
    printf("\nMultiplication of two matrix is: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            sum=0;
            for ( k = 0; k <3; k++)
            {
                sum=sum + a[i][k] * b[k][j];
            }
            printf("\t%d",sum);
        }
        printf("\n");
    }
    
    
}
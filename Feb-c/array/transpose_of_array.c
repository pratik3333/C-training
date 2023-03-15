// WAP to print transpose of matrix
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j;
    printf("Enter the matrix values: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("\nDisplay the array: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    
    printf("\nDisplay the transpose of matrix: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("\t%d",a[j][i]);
        }
        printf("\n");
    }
    
    
}
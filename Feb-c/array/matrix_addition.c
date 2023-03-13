#include<stdio.h>
void main()
{
    int a[3][3],i,sum=0,j;
    printf("Enter the array values: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Display 3*3 matrix: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n Addition of a matrix: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            sum=sum+a[i][j];
        }
        
    }
    
    printf("addition of matrix is: %d",sum);
    
}
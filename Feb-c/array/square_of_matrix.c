// write a program to print square of matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("Enter the first array: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter the second array: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    
    
    a[i][j]=b[3][3];

    printf("Display The array: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    printf("Display The array: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }


    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            sum=0;
            for ( k = 0; k <3; k++)
            {
                sum=sum + a[i][k] * b[k][k];
            }    
        } 
    }
    
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    
}
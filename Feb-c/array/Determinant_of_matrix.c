// Write a program to find determinant of matrix.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3][3],i,j;
    long determinant;
    
    printf("Enter the matrix value: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\nDisplay the matrix: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    
    determinant =  a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]) -
                   a[0][1] * (a[1][0] * a[2][2]) - (a[2][0] * a[1][2]) +
                   a[0][2] * (a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));

    printf("The Diterminant of above matrix is : %d",determinant);

}
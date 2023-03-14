// write a program to print square of matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],i,j,k;
    printf("Enter the array: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    a[i][j]=b[3][3];

    printf("Display The array: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
    // for ( i = 0; i <3; i++)
    // {
    //     for ( j = 0; j< 3; j++)
    //     {
    //         printf("%d",b[i][j]);
    //     }
    //     printf("\n");
    // }
}
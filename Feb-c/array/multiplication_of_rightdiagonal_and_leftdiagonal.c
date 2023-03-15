// WAP to calculate the sum of left and right diagonal element of matrix and create matrix of size 3 x 3
#include<stdio.h>
void main()
{
    int a[3][3],i,j,rdiag=1,ldiag=1;
    printf("Enter the matrix: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            if (j==2-i)
            {
                rdiag=rdiag*a[i][j];
            }
            if (i==j)
            {
                ldiag=ldiag*a[i][j];
            }
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }



    printf("\nThe multiplication of right diagonal is : %d",rdiag);
    printf("\nThe multiplication of left diagonal is : %d",ldiag);
    
}
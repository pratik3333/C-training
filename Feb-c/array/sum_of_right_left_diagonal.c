#include<stdio.h>
void main()
{
    int a[3][3],i,j,rdiag,ldiag;
    printf("Enter the matrix: ");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("\ndisplay the matrix: \n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            if (j==2-i)
            {
                rdiag=rdiag+a[i][j];
            }
            if (i==j)
            {
                ldiag=ldiag+a[i][j];
            }
            
        }
        
    }

    printf("The sum of right diagonal is : %d",rdiag);
    printf("The sum of right diagonal is : %d",ldiag);
    
}
// W.A.P. to create the matrix and calculate the sum of all rows in matrix.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[3][3],i,j;
    printf("Enter the values in matrix:\n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Display the matrix\n");
    for ( i = 0; i <3; i++)
    {
        int sum=0;
        for ( j = 0; j < 3; j++)
        {
            sum=sum+a[i][j];
            printf(" %d",a[i][j]);
        }
        printf(" =%d\n",sum);
    }
    
    return 0;
}

#include<stdio.h>
void main()
{
    int a[3][3],i,j,count=0,c=0;
    printf("\nEnter the matrix value: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("\n\nDisplay matrix\n");

    for ( i = 0; i <3; i++)
    {
        for ( j= 0; j <3; j++)
        {
            if (a[i][j]==0)
            {
                ++count;
            }
            else
            {
                ++c;
            }
            
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    if (count>c)
    {
        printf("\nMatrix is sparse matrix\n");
    }
    else
    {
        printf("\nMatrix is not sparse matrix\n");
    }
    
}
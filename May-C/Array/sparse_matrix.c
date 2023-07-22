#include<stdio.h>
void main()
{
    int a[3][3],i,j,count=0,x;
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
            
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    if (count>4)
    {
        printf("\nThe given Matrix is sparse matrix\n");
    }
    else
    {
        
        x=5-count;
        for ( i = 0; i <3; i++)
        {
            for ( j = 0; j <3; j++)
            {
                if (a[i][j]!=0)
                {
                    a[i][j]=0;
                    x--;
                }
                if (x==0)
                {
                    break;
                }
                
            }
            if (x==0)
            {
                break;
            }
            
        }
        
        printf("\nSparse matrix after conversion\n");
        for ( i = 0; i <3; i++)
        {
            for ( j = 0; j <3; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        
    }
    
}
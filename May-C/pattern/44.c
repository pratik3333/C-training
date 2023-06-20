#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,px;
    for ( i = 1; i <=5; i++)
    {
        px=1;
        for ( j = 1; j <=5; j++)
        {
            if (j<=i)
            {
                printf("%d",px);
            }
            px=px*(i-j)/j;
            
        }
        printf("\n");
    }
    
}

// 1
// 11
// 121
// 1331
// 14641
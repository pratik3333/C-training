#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        int x;
        for ( j = 1; j <=5; j++)
        {
            if (j<=6-i)
            {
                x=(i+j)-1;
                printf("%d",x);
            }
        }
        
        printf("\n");
    }
    
}

// 12345
// 2345
// 345
// 45
// 5
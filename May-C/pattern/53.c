// 73 in mobile app

#include<stdio.h>
void main()
{
    int i,j,x=5;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            if (j<=6-i)
            {
                printf("%d",x);
            }
        }
        printf("\n");
        x--;
    }
    
}
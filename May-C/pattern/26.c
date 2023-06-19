#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,x;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            x=(i+j)-1;
            printf("\t%d",x);
        }
        printf("\n");
    }
    
}

        // 1       2       3       4       5
        // 2       3       4       5       6
        // 3       4       5       6       7
        // 4       5       6       7       8
        // 5       6       7       8       9
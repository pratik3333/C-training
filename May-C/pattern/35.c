#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("\t%d",j*2);
        }
        printf("\n");
    }
    
}

        // 2
        // 2       4
        // 2       4       6
        // 2       4       6       8
        // 2       4       6       8       10
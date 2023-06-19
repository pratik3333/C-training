#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            if (j<=i)
            {
                printf("\t%d",i*j);
            }
            
        }
        printf("\n");
    }
    
}
        // 1
        // 2       4
        // 3       6       9
        // 4       8       12      16
        // 5       10      15      20      25
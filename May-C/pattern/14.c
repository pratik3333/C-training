//  1 
//  1  2
//  1     3
//  1        4
//  1  2  3  4  5

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            if (i==5 || j==1 || j==i)
            {
                printf(" %d ",j);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    
}
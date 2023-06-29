#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=6; i++)
    {
        int x=1;
        for ( j = 1; j <=7; j++)
        {
            if (i==1 || j==1 || j==7 || i==6)
            {
                printf("*");
            }
            else
            {
                printf("%d",x);
                x++;
            }
            
        }
        printf("\n");
    }
    
}

// *******
// *12345*
// *12345*
// *12345*
// *12345*
// *******
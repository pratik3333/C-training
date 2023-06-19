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
                printf("%d",j+i-1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}

// 12345
// 3456
// 567
// 78
// 9
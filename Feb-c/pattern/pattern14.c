#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            if (j%2==1)
            {
                printf("%d",i);
            }
            else
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
    
}

// ans=
// 1
// 2*
// 3*3
// 4*4*
// 5*5*5
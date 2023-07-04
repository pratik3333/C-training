// 72 in mobile app

#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        int x=1;
        for ( j = 1; j <=5; j++)
        {
            if (j<=6-i)
            {
                printf("%d",x);
                x++;
            }
            
        }
        printf("\n");
    }
    
}

// O/P:-
// 12345
// 1234
// 123
// 12
// 1
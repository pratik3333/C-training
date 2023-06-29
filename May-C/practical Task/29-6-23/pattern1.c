#include<stdio.h>
void main()
{
    int i,j,x;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            if (i>=j)
            {
                x=i+j;
                if (x%2==0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
                
            }
            
        }
        printf("\n");
    }
    
}

// O/P:-
// 1
// 01
// 101
// 0101
// 10101
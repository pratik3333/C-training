#include<stdio.h>
void main()
{
    int i,j,x;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            x=6-j;
            if (j<=5-i)
            {
                printf(" ");
            }
           
            
            else
            {
                printf("%d",x);
            }
            
        }
        printf("\n");
    }
    
}

// no. 100 in app

//     1
//    21
//   321
//  4321
// 54321
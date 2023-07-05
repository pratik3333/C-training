#include<stdio.h>
void main()
{
    int i,j,x=2;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            if (j<=5-i)
            {
                printf("\t ");
            }
            else
            {
                printf("\t%d",x);
                x=x+2;
            }
            
        }
        printf("\n");
    }
    
}
 
//    no. 101 in c pattern programs application

        //                                 2
        //                         4       6
        //                 8       10      12
        //         14      16      18      20
        // 22      24      26      28      30
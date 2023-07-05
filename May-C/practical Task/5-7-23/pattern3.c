#include<stdio.h>
void main()
{
    int i,j,x=1;
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
    // no.102 in app
        //                                 1
        //                         3       5
        //                 7       9       11
        //         13      15      17      19
        // 21      23      25      27      29
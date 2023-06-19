#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=1;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            printf("\t%d",k);
            k=k+2;
        }
        printf("\n");
    }
    
}
        // 1       3       5       7       9
        // 11      13      15      17      19
        // 21      23      25      27      29
        // 31      33      35      37      39
        // 41      43      45      47      49
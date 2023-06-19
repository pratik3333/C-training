#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        // flag=1;
        for ( j = 1; j <=5; j++)
        {
             printf("%d",(i+j)%2);  
        }
        printf("\n");
    }
    
}

// 01010
// 10101
// 01010
// 10101
// 01010
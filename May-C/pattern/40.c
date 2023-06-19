#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d",i%2);
        }
        printf("\n");
    }
    
}

// 1
// 00
// 111
// 0000
// 11111
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for ( i = 0; i <=5; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf("%d",i%2);
            
        }
        printf("\n");
    }
    
}

// 0
// 11
// 000
// 1111
// 00000
// 111111
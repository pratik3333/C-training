#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 0; i <5; i++)
    {
        for ( j = 1; j <i*2; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}


// 1
// 123
// 12345
// 1234567
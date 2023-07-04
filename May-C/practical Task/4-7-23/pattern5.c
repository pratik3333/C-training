#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        char ch='A';
        for ( j = 1; j <=5; j++)
        {
            if (i>=j)
            {
                printf("%c",ch);
            }
            ch++;
        }
        printf("\n");
    }
    
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {   char ch='a';
        for ( j = 1; j <=5; j++)
        {
            if (j>=6-i)
            {
                printf("%c",ch++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}
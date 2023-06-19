#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    char ch='a';

    for ( i = 1; i <=5; i++)
    {
        for ( j = i; j <=5; j++)
        {
            if (j>=i)
            {
                printf(" ");

            }
            else
            {
                printf("%c",ch);
            }
            
        }
        printf('\n');
        ch++;
    }
    
}
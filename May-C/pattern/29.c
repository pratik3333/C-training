#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    char ch='A';
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            if (ch<='Z')
            {
                printf("%c",ch);
                ch++;
            }
            else
            {
                ch='A';
            }
        }
        printf("\n");
    }
    
}

// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY
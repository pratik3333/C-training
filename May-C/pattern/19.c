#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, f = 1;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (((j>=6-i && j<=4+i&&i<=5) ||(i>5&&j<=15-i)&& i<j+6) && f)
            {
                printf("*");
                // f=0;
            }
            else
            {
                printf(" ");
                // f=1;
            }
        }
        printf("\n");
    }

}
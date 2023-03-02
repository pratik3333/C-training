#include<stdio.h>
#include<conio.h>

void main()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j<=9; j++)
        {
            if (j>=6-i && j<=i+4)
            {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    
    getch();
}
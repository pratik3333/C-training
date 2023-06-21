// fabonacci series

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    int a = 0, b = 1, c = a + b;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("\t%d", c);
                c = a + b;
                a = b;
                b = c;
            }
        }
        printf("\n");
    }
}
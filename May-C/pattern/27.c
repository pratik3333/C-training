#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {

            printf("\t%d", (2 * (i + j)) - 3);
        }
        printf("\n");
    }
}

        // 1       3       5       7       9
        // 3       5       7       9       11
        // 5       7       9       11      13
        // 7       9       11      13      15
        // 9       11      13      15      17
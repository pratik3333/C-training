#include <stdio.h>
void main()
{
    int i, j, k = 15;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
            {
                printf("\t%d", k);
                k--;
            }
        }
        printf("\n");
    }
}

        // 15      14      13      12      11
        // 10      9       8       7
        // 6       5       4
        // 3       2
        // 1
#include <stdio.h>
void main()
{
    int i, j, a[3][3], sum;
    printf("\nEnter the matrix value:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {

        sum = 0;
        if (i % 2 == 0)
        {
            for (j = 0; j < 3; j++)
            {
                sum = sum + a[i][j];
            }
            printf("\nsum of even row is %d", sum);
        }
    }

    for (j = 0; j < 3; j++)
    {
        sum = 0;
        if (j % 2 != 0)
        {
            for (i = 0; i < 3; i++)

            {
                sum = sum + a[i][j];
            }
            printf("\nsum of odd column  is  %d", sum);
        }
    }
}
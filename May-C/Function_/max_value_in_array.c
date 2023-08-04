#include <stdio.h>
int i, j, max;
int getmax(int x[])
{
    int max = x[0];
    for (i = 1; i < 5; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }
    return max;
}

void main()
{
    int a[5];
    printf("\nEnter five values in array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = getmax(a);
    printf("\nMaximum value is %d", result);
}
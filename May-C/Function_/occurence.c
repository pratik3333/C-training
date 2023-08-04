#include <stdio.h>
int i, j, temp;

int getoccurence(int x[])
{
    int count = 1;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (x[i] == x[i + 1])
        {
            ++count;
        }
        else
        {
            // return count;
            printf("\n%d---count is ---- %d", x[i], count);
            count = 1;
        }
    }
}

void main()
{
    int a[5];
    printf("\nEnter five values in array \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = getoccurence(a);
}
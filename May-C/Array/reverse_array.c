#include <stdio.h>
void main()
{
    int a[5], i, j, temp;
    printf("\nEnter the five values of array:- \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nDisplay array before reverse\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("\nDisplay array after reverse\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
}
#include <stdio.h>
void main()
{
    int a[5], i, j, value, flag = 0;

    printf("Enter five elements of array: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter which value you want to delete: ");
    scanf("%d", &value);

    for (i = 0; i < 5; i++)
    {
        if (a[i] == value)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        for (j = i; j < 5; j++)
        {
            a[j] = a[j + 1];
        }
        printf("\nDisplay array after deleting value: \n");
        for (i = 0; i < 4; i++)
        {
            printf("\t%d", a[i]);
        }
    }
    else
    {
        printf("\nValue not found\n");
    }
}
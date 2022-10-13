// write a menu driven program to create a array of size 10, take random values from useer
// a) show all elements.
// b) sort array in ascending order.
// c) sort array in descending order.
// d) max value from array.
// e) find min value from array.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice, s[10], i, j, temp, min, max;

    printf("Press 1 to show all elements\n");
    printf("Press 2 to sort array in ascending order\n");
    printf("Press 3 to sort array in descending order\n");
    printf("Press 4 to show max value from array\n");
    printf("Press 5 to show min value from array.\n\n");
    scanf("%d", &choice);
    printf("Enter the 10 values of array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &s[i]);
    }

    switch (choice)
    {
    case 1:
        printf("all elements of array:\n");
        for (i = 0; i < 10; i++)
        {
            printf(" %d", s[i]);
        }
        break;

    case 2:
        for (i = 0; i < 10; i++)
        {
            for (j = (i + 1); j < 10; j++)
            {
                if (s[i] > s[j])
                {
                    int temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        printf("Sorted array in ascending order\n");

        for (i = 0; i < 10; i++)
        {
            printf(" %d", s[i]);
        }

        break;
    case 3:
        for (i = 0; i < 10; i++)
        {
            for (j = (i + 1); j < 10; j++)
            {
                if (s[i] < s[j])
                {
                    int temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        printf("Sorted array in descending order\n");

        for (i = 0; i < 10; i++)
        {
            printf(" %d", s[i]);
        }

        break;

    case 4:
        int max = s[0];
        for (i = 1; i < 10; i++)
        {
            if (s[i] > max)
            {
                max = s[i];
            }
        }
        printf("maximum value is %d\n", max);

        break;

    case 5:
        int min = s[0];
        for (i = 1; i < 10; i++)
        {
            if (min > s[i])
            {
                min = s[i];
            }
        }
        printf("minimum value is %d\n", min);

        break;

    default:
        printf("wrong input");
        break;
    }

    return 0;
}

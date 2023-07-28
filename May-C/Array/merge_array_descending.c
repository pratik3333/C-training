#include <stdio.h>
void main()
{
    int a[3], b[3], c[6], i, j, temp;
    printf("\nEnter the 3 elements of first array\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the 3 elements of second array\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }

    // Storing a block elements in c block
    for (i = 0; i <3; i++)
    {
        c[i] = a[i];
    }

    // storing b block elements in c block
    for (i=3; i <6; i++)
    {
        c[i] = b[i];
    }

    // printing c block elements
    printf("\nElements of c block\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\t", c[i]);
    }
}
#include <stdio.h>
void main()
{
    int i, a[6], index, value;
    printf("Enter the five elements of array: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the index: ");
    scanf("%d", &index);

    printf("\nEnter the value: ");
    scanf("%d", &value);

    for (i = 4; i >= index; i--)
    {

        a[i + 1] = a[i];
    }
    a[index] = value;

    // Printing the array value after putting value on specific index
    printf("After putting value: ");
    for (i = 0; i < 6; i++)
    {
        printf("\t%d", a[i]);
    }
}
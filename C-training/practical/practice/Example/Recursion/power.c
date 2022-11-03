// write a program input the teo values consider first as base and second as index
//  and calculate its power using recursion.

#include <stdio.h>
int p = 1;

int power(int base, int index)
{
    if (index != 0)
    {
        p = p * base;
        power(base, --index);
    }
    return p;
}
int main(int argc, char const *argv[])
{
    int base, index;
    printf("Enter the base and index value: ");
    scanf("%d%d", &base,&index);
    int result = power(base, index);
    printf("\n power is %d\n", result);
    return 0;
}

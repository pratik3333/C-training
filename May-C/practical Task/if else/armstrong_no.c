// Check number is armstrong number or not

#include <stdio.h>
#include <math.h>
int main()
{
    int no, rem, count = 0, rev = 0, temp, r;
    printf("Enter the number: ");
    scanf("%d", &no);

    temp = no;
    while (no != 0)
    {
        no = no / 10;
        ++count;
    }
    printf("\ncount is %d", count);

    int sum = 0;
    no = temp;
    while (no != 0)
    {
        r = no % 10;
        sum = sum + pow(r, count);
        no = no / 10;
    }
    if (temp == sum)
    {
        printf("\nArmstrong number");
    }
    else
    {
        printf("\nNot armstrong number");
    }

    return 0;
}
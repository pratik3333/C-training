#include <stdio.h>
#include <math.h>
void main()
{
    int no, count, i, temp, sum, rem,k;
    printf("Enter the number\n : ");
    scanf("%d", &k);

    for (i = 10; i <= k; i++)
    {

        temp = i, count = 0;

        while (i > 0)
        {
            count++;
            i = i / 10;
            
        }
        i = temp;

        sum = 0;
        while (i != 0)
        {
            rem = i % 10;
            sum = sum + pow(rem, count);
            i = i / 10;
        }

        if (i == sum)
        {
            printf("\n%d", i);
        }
    }
}
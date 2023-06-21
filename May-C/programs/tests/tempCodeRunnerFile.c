#include <stdio.h>
void main()
{
    int i, j, no, n, sum=0, count, temp, rem, p,k;
    printf("Enter the number: ");
    scanf("%d", &k);
    for (no = 1; no <= k; no++)
    {
         count = 0, temp = no,sum=0;

        while (temp > 0)
        {
            count++;
            no = no / 10;
        }
    }
}
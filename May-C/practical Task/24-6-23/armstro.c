#include <stdio.h>
#include <math.h>
void main()
{
    int no, count, i, temp, sum, rem,k;
    printf("Enter the number\n : ");
    scanf("%d",&k);//500

    for (i = 10; i <=k; i++)
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
        i=temp;

        if (i == sum)
        {
            printf("\n%d", i);
        }
    }
}

// 370
// 371
// 470
// in vscode it doesnt give us 153
// if we run in another compiler it gives 153 to ..... armstrong numbers

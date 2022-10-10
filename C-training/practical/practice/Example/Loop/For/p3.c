#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    for (i = 5; i < 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i == 5 || j == 6 + 3)
            {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

// output:-

// * * * * * * * * *
//         *
//         *
//         *
//         *
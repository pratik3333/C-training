#include <stdio.h>
int main(int argc, char const *argv[])
{

    int i;
    i = 0;
    while (i <= 10)
    {
        ++i;
        if (i % 2 == 0)
        {
            continue;
        }
        printf("I = %d\n", i);
    }
    return 0;
}

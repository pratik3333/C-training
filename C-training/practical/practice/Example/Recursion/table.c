// write a program to input the number and prints its table using a recursion.

#include <stdio.h>

int count = 0;
int main(int argc, char const *argv[])
{
    void table(int);
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);
    table(no);

    return 0;
}

void table(int x)
{
    if (count < 10)
    {
        count++;
        printf("%d\n", x * count);
        table(x);
    }
}
// write a program to print multiplication table of any number

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,no;
    printf("Enter the number: ");
    scanf("%d",&no);
    i=1;

    while (i<=10)
    {
        printf("%d\n",no*i);

        i++;

    }

    return 0;
}

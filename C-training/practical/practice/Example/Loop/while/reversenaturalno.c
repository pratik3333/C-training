// write a program to print all natural numbers in reverse (from n to 1). using while loop

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  no;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (no>=1)
    {
        printf("%d\n",no);
        no--;

    }
    
    return 0;
}

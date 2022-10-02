// write a C program to print all even numbers between 1 to 100 using while loop

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,no;
    printf("Even number between 1 to 100 are: ");

    while (i<=100)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        

        i++;
    }
    
    return 0;
}

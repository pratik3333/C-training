// write a c program to print all natural numbers from 1 to n using while loop

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no,i=1;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (i<=no)
    {
        printf("%d\n",i);

        i++;
    }

    
    
    return 0;
}

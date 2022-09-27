// write a program to print all even numbers upto n

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,no;
    i=1;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (i<=no)
    {
        if (i%2==0)
        {
            printf("%d\n\t",i);
        }

        i++;
        
        
    }
    

    return 0;
}


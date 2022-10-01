// write a program to print all prime numbers between 1 to n 

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=2,no,m=0,flag=0;
    printf("Enter the number: ");
    scanf("%d",&no);
    m=no/2;

    for (; i <= m; i++)
    {
        if (no%i==0)
        {
            flag=1;
            break;
        }

        
    }
    if (flag==0)
    {
        printf("%d",i);
    }
    
    return 0;
}

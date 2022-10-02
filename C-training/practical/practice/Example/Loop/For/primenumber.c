// write a program to print all prime numbers between 1 to n 

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no,i,flag=0;
    printf("Enter the number: ");
    scanf("%d",&no);

    for ( i = 2; no/2; i++)
    {
        if (no%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("Not prime number.");
    }
    else{
        printf("Prime number.");
    }
    
    return 0;
}

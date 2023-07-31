#include <stdio.h>
void main()
{
    void prime(no); // Declaration
    int no;
    printf("\nEnter the number\n");
    scanf("%d", &no);

    prime(no); // calling
}

void prime(no) // Defination
{
    int i, count;
    count=0;
    for (i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            count++;
            
        }
    }
    if (count==0)
    {
        printf("\n%d is a prime number.", no);
    }
    else
    {
        printf("\n%d is not a prime number.", no);
    }
}
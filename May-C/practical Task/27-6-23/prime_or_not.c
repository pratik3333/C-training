// WAP to check given number is prime or not

#include <stdio.h>
void main()
{
    int no, count = 0, i;
    printf("Enter the number: ");
    scanf("%d", &no);

    i = 2;
    while (i <= no / 2)
    {
        if (no % i == 0)
        {
            count = 1;
            break;
        }
        i++;
    }
    if (count==0)
    {
        printf("\n%d is a prime number",no);
    }
    else
    {
        printf("\n%d is not a prime number",no);
    }
    
}
// WAP to find factorial of number
#include<stdio.h>
void main()
{
    int no,i=1,fact=1;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (i<=no)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d number is %d",no,fact);
}
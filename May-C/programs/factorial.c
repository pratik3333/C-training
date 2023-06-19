#include<stdio.h>
void main()
{
    int no,i,fact=1;
    printf("Enter the number: ");
    scanf("%d",&no);
    for (i = 1; i <=no; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",no,fact);
    

}
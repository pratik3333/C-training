// WAP to Display the Reverse number using while loop
#include<stdio.h>
void main()
{
    int no,rev=0,rem;
    printf("Enter the  number: ");
    scanf("%d",&no);

    while (no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;

    }
    printf("Reverse number is : %d",rev);
}
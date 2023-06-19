#include<stdio.h>
#include<conio.h>
void main()
{
    int no,rem,mul=1;
    printf("Enter the number ");
    scanf("%d",&no);
    while (no!=0)
    {
        rem=no%10;
        mul=mul*rem;
        no=no/10;

    }
     printf("Product of a number is: %d",mul);    
}
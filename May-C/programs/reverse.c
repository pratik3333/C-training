#include<stdio.h>
#include<conio.h>
void main()
{
    int no,rev=0,rem;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (no>0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    printf("Reverse of given number is: %d",rev);
    
}
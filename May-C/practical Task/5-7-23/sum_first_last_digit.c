#include<stdio.h>
void main()
{
    int first,last,no,sum=0;
    printf("\nEnter the number: ");
    scanf("%d",&no);

    last=no%10;

    while (no>=10)
    {
        no=no/10;
    }
    first=no;

    printf("\nFirst number is %d",first);
    printf("\nLast number is %d",last);
    sum=first+last;
    printf("\nSum is %d",sum);
    
}
#include<stdio.h>

int rev=0;
int getReverse(no)
{
    int rem;
    while (no!=0)
    {
        rem=no%10;
        no=no/10;
        rev=rev*10+rem;
        return getReverse(no);
    }
    return rev;
}

void main()
{
    int no;
    printf("\nEnter the number ");
    scanf("%d",&no);

    int result=getReverse(no);
    printf("\nReverse number is %d",result);
}
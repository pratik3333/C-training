#include<stdio.h>
void main()
{
    void reverse(no);
    int no,rem,rev=0;
    printf("\nEnter the number\n");
    scanf("%d",&no);

    reverse(no);

}

void reverse(no)
{
    int rem, rev=0;
    while (no!=0)
    {
        rem=no%10;
        no=no/10;
        rev=rev*10+rem;
    }
    printf("\nReverse number is %d",rev);
}
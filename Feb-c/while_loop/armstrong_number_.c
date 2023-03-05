#include<stdio.h>
void main()
{
    int no,rem,sum=0,temp;

    printf("Enter the number: ");
    scanf("%d",&no);
    temp=no;

    while (no>0)
    {
        rem=no%10;
        sum=(rem*rem*rem)+sum;
        no=no/10;
    }
    if (temp==sum)
    {
        printf("Number is armstrong number.");
    }
    else
    {
        printf("Number is not armstrong number.");
    }
}
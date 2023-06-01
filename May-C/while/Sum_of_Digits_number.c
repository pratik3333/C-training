// Write a c program to calculate sum of digits of a number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,no,m;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (no>0)
    {
        m=no%10;
        sum=sum+m;
        no=no/10;
    }
    printf("The sum of digits of a number is :%d",sum);
    return 0;
}
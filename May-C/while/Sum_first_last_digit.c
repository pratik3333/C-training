// Write a cc program to print sum of first and last digit of number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int no,first,last,sum=0;
    printf("Enter the number: ");
    scanf("%d",&no);
    last=no%10;

    while (no>=10)
    {
        no=no/10;
    }
    first=no;

    printf("First digit is :%d\n",first);
    printf("Last digit is :%d\n",last);

    sum=first+last;
    printf("The sum of first and last digit is : %d",sum);
}
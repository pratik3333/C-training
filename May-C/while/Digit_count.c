// Write a program to count the digits in number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int no,count=0;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (no>0)
    {
        no=no/10;
        count++;
    }
    printf("Total number of digits is: %d", count);
}
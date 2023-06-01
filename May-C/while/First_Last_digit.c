// write a c program to find first and last digit of a number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int no,first,last;
    printf("enter the number: ");
    scanf("%d",&no);

    last=no % 10;
   

    while (no>=10)
    {
        no = no / 10;
    }
    
    first= no;
    printf("First Digit is : %d\n",first);
     printf("Last digit is: %d\n",last);
}
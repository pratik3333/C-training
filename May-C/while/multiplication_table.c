//Write a c program to print multiplication table of any number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int no,i=1;
    printf("Enter the number: ");
    scanf("%d",&no);

    printf("Multiplication table of %d \n",no);

    while (i<=10)
    {
        printf("%d = %d\n",i,no * i);
        i++;
    }
    
}
// WAP input a number and check number is armstrong number or not

#include<stdio.h>
#include<conio.h>
void main()
{
    int no,temp,count=0;

    printf("\nEnter the number: ");
    scanf("%d",&no);

    
    while (no>=1)
    {
        no=no/10;
        count++;
    }
    printf("\ncount is %d",count);
    printf("\nnumber is %d",no);



}
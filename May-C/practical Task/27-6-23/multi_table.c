// WAP to print multiplication table using while loop

#include<stdio.h>
void main()
{
    int no,i;
    printf("Enter the number: ");
    scanf("%d",&no);

    printf("\nmultiplication table is: ");
    i=1;
    while (i<=10)
    {
        printf("\n%d",i*no);
        i++;
    }
    
}
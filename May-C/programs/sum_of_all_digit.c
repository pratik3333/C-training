#include<stdio.h>
#include<conio.h>
void main()
{
    int no,sum=0,rem;
    printf("Enter the number: ");
    scanf("%d",&no);

    while (no!=0)
    {
        rem=no%10;
        sum=sum+rem;
        no=no/10;
    }
    printf("\n sum is %d",sum);
}
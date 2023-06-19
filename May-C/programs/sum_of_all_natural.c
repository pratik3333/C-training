#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum of all natural number up to %d is %d",n,sum);
}
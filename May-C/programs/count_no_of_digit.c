#include<stdio.h>
void main()
{
    int i,n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    while (n>0)
    {
        n=n/10;
        count++;
    }
    printf("\nTotal number of digits is %d ",count);
}
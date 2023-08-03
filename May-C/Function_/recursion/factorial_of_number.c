#include<stdio.h>

int x=1,fact=1;
int getFacto(no)
{
    while (x<=no)
    {
        fact=fact*x;
        ++x;
        return getFacto(no);
    }
    return fact;
}

void main()
{
    int no;
    printf("\nEnter the number");
    scanf("%d",&no);

    int result=getFacto(no);
    printf("\nFactorial of number is %d",result);
}
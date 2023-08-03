#include<stdio.h>
int p=1;
int power(base,index)
{
    while (index!=0)
    {
        p=p*base;
        return power(base,--index);
    }
    return p;
}

void main()
{
    int base,index;
    printf("\nEnter the base ");
    scanf("%d",&base);

    printf("\nEnter the index ");
    scanf("%d",&index);

    int result=power(base,index);
    printf("\nPower is %d",result);
}
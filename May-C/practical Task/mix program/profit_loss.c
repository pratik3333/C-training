#include<stdio.h>
void main()
{
    int cp,sp,amt;
    printf("Enter the cost price: ");
    scanf("%d",&cp);
    printf("ENter the selling price: ");
    scanf("%d",&sp);

    if (sp>cp)
    {
        amt=sp-cp;
        printf("Profit = %d",amt);
    }
    else if (cp>sp)
    {
        amt=cp-sp;
        printf("Loss = %d",amt);
    }
    else
    {
        printf("No profit No loss");
    }
}
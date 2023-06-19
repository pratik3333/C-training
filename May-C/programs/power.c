#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b,p=1;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    for ( i = 1; i <=b; i++)
    {
        p=p*a;
    }
    printf("\nPower is: %d",p);
}
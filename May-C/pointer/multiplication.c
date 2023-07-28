#include<stdio.h>
void main()
{
    int a=10,*b,i;

    b=&a;
    for ( i = 1; i <=10; i++)
    {
        printf("\n%d",*b*i);
    }
    
}
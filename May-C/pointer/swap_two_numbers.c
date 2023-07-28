#include<stdio.h>
void main()
{
    int a=10,b=20,*p,*q,temp;

    p=&a;
    q=&b;

    printf("\nBefore swapping a=%d b=%d\n",a,b);

    temp=*p;
    *p=*q;
    *q=temp;

    printf("\nAfter swapping p=%d q=%d",*p,*q);
    

}
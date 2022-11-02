#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,*p,*q,temp;
    p=&a;
    q=&b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Before swapping:%d %d\n",a,b);

    temp=*p;
    *p=*q;
    *q=temp;
    printf("After swapping: %d %d",*p,*q);

    return 0;
}

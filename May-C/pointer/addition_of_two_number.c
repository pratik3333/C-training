#include<stdio.h>
void main()
{
    int a=10,b=20,*c,*d,x;

    c=&a;
    d=&b;
    
    //  x=*c+*d;
     printf("x= %d",*c+*d);

}
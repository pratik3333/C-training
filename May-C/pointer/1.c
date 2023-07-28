#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=100,*ptr,*ptr1;
    printf("\naddress of a is %u",&a);
    printf("\nvalue of a is %d",a);
    printf("\naddress of ptr is %u",&ptr);
    printf("\nvalue of ptr is %d",ptr);
    printf("\n");
    ptr=500;
    printf("\nValue of ptr is %d",ptr);
    ptr1=&ptr;
    printf("\nValue of ptr1 is %d",*ptr1);
     




}
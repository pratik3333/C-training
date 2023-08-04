#include<stdio.h>
int getsum(int x[])
{
    int i,sum=0;

    for ( i = 0; i <5; i++)
    {
        sum=sum+x[i];
    }
    return sum;
}


void main()
{
    int a[5],i;
    printf("\nEnter the five values in arrry: ");

    for ( i = 0; i <5; i++)
    {
         scanf("%d",&a[i]);
    }
    
    // int result=getsum(&a); you can write here getsum(a) or getsum(&a) meaning is same.
    int result=getsum(a);
    printf("\nSum of every element is %d",result);
   
}
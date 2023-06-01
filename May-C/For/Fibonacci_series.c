// WAP to print fibonacci series using for loop

#include<stdio.h>
#include<conio.h>
void main()
{
     int i=1,sum,a=0,b=1,no;
    
    printf("\nEnter the number: ");
    scanf("%d",&no);
    printf("\n%d \n%d",a,b);

    for ( i = 0; i<=no; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf(" \n%d ",sum);
    }

    
}
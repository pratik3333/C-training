#include<stdio.h>
#include<conio.h>
void main()
{
    int i,no,sum=0,a=0,b=1;
    printf("Enter the number: ");
    scanf("%d",&no);

    for ( i = 3; i <=no; i++)
    {
        sum=a+b;
        a=b;
        b=sum;

    }

    printf("Nth number of fabonaci series is %d",sum);
    
}
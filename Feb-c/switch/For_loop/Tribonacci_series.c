#include<stdio.h>

void main()
{
    int no,i,a=0,b=1,c=2,d;
    printf("Enter the term...");
    
    scanf("%d",&no);
    
    for ( i = 1; i<=no; i++)
    {
        printf(" %d",a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    
}


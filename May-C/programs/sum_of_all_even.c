#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            sum=sum+i;
            printf("\t%d",i);
        }
        
    }
    printf("\nSum of all even numbers upto %d is %d",n,sum);
}
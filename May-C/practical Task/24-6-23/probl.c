#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        sum=(sum*10)+1;
        printf("%d\t",sum);
    }
    

}

// 1       11      111     1111    11111
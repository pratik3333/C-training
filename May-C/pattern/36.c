#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=1;
    for ( i = 1; i <=4; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("\t%d",n);
            n++;
        }
        printf("\n");
    }
    
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int n=5;
    int i,j;
    for ( i = n-1;  i>=0; i--)
    {
        for ( j = n-1; j>=i; j--)
        {
            printf("\t%c",i+65);
        }
        printf("\n");
    }
    
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            if (j<=6-i)
            {
                printf("%d",i%2);
            }
            
        }
        printf("\n");
    }
    
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,f=1;
    for ( i = 1; i <=9; i++)
    {
        for ( j = 1; j <=17; j++)
        {  
            if (j>i+1 && j<=18-i && f)
            {
                printf("*");
                f=0;
            
            }
            else
            {
                printf(" ");
                f=1;
                
            }
        }
        printf("\n");
    }
    
}

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,flag;
    
    for ( i =1; i <=5; i++)
    {
        int flag=1;
        for ( j = 1; j<=9; j++)
        {
            if (j>=6-i && j<=4+i && flag)
            {
            
                printf("*");
                flag=0;

            }    
                        
            else
            {
                printf(" ");
                flag=1;

            }

        }
        printf("\n");
    }
    return 0;
}
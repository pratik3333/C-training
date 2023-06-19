#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for ( i = 1; i <=5; i++)
    {
        k=1;
        for ( j = 1; j <=9; j++)
        {
            if (j>=6-i && j<=4+i)
            {
                if ((i%2==1 && j%2==1) || (i%2==0 && j%2==0))
                {
                    printf("%d",k);
                }

                else
                {
                    printf(" ");
                }
                
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
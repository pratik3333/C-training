#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    char character='A';
    for ( i = 1; i <= 5; i++)
    {
        character='A';
        for ( j = 1; j <= 5; j++)
        {
            if (j<=6-i)
            {
                if (i%2==1) 
                {
                    printf("%c",character);
                    character++;
                }
                else
                {
                    printf("%d",j);
                }
                
            }
            
        }
        printf("\n");
    }
    return 0;
}
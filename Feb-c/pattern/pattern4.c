#include<stdio.h>
#include<conio.h>

void main()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            if ( j<=6-i)
            
                printf("\t%d",6-j);
            
            else
            
                printf(" ");
            // i<=j
        
        }
        printf("\n");
    }
    getch();
}

        // 5       4       3       2       1
        // 5       4       3       2
        // 5       4       3
        // 5       4
        // 5
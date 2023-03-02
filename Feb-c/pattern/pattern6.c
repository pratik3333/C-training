#include<stdio.h>
#include<conio.h>

void main()
{

    // char character='A';
    for (char i = 65; i <= 70; i++)
    {
        for (char j = 65; j <=70; j++)
        {
            if (j<=i)
            {
                 
                // printf("\t%c",character);
                // character++;
                printf("%c",i);
               
            }
            else
            printf(" ");
            
        }
        printf("\n");
    }
    getch();
}

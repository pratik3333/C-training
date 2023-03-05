#include<stdio.h>
#include<conio.h>

void main()
{
    for (char i = 65; i <= 70; i++)
    {
        int flag=1;
        for (char j = 65; i <=70; j++)
        {
            if (j>=6-i && j<=i+4 && flag)
            {
                printf("%c",i);
                
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
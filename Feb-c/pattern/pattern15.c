#include <stdio.h>
void main()
{
    int i, j,flag,k=5;
    for (i = 1; i <= 5; i++)
    {
        int flag=1;
        for (j = 1; j <= 10; j++)
        {
            if (j>=i && j<=10-i && flag)
            {
                if (i%2==1)
                {
                    printf("%d",k);
                    flag=0;
                }
                else
                {
                    printf("*");
                    flag=0;
                }                  
            }
            else
            {
                printf(" ");
                flag=1;
            }  
        }
        k--;
        printf("\n");
    }
    return 0;
}
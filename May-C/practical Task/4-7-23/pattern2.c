#include<stdio.h>
void main()
{
    int i,j,x;
    for ( i = 1; i <=5; i++)
    {
        x=1;
        for ( j = 1; j <=5; j++)
        {
            if (j<=5-i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",x);
                x++;
            }
            
        }
        printf("\n");
    }
    
}

/*  1
   12
  123
 1234
12345 */
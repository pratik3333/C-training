#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {

        for ( j = 1; j <=5; j++)
        {
            if (j<=5-i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",i);
            
            }
            
        }
        printf("\n");
    }
    
}

/*  1
   22
  333
 4444
55555 */
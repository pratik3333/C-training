#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 0; j > i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k <=i; k++)
        {
            printf("* ");
        }
        printf("\n");
        
        
    }
    
    return 0;
}

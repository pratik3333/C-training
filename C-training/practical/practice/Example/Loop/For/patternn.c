#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 10; i <= 10; i++)
    {
        for ( j = 1; j <= j; j++)
        {
            if (i==5 || j==5)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

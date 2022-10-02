#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;

    for ( i = 1; i <=5; i++)
    {
        for ( j = 5; j >=1; j--)
        {
            printf("\t$");
        }
        
        printf("\n");
    }
    
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;

    for ( i = 1; i <=6; i++)
    {
        for ( j = 1; j <=6; j++)
        {
            if (i==6)
            {
                printf("%c",70);
            }

        }
        printf("\n");
        
    }
    
    return 0;
}

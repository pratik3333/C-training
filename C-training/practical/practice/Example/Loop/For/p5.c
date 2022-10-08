#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            if (j==1 || i==5 || i==1)
            {
                printf("*");
            }
            else if (j==5)
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

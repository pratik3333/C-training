#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i =1; i <6; i++)
    {
        for ( j = 1; j < 6; j++)
        {
            if (j>=6-i)
            {
                printf(" ");
            }else
            {
                printf("%c",j);
            }
        }
        printf("\n");
    }
    
    return 0;
}

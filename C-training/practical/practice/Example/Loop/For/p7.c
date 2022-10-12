#include <stdio.h>
int main(int argc, char const *argv[])
{
    char i,j;
    for ( i = 'A'; i <='F'; i++)
    {
        for ( j = 'A'; j <='F'; j++)
        {
            if ( i=='B' || j=='A')
            {
                printf("%c",j);
            }
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

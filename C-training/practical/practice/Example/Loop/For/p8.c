#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 1; i <=6; i++)
    {
        int k=i,g=1;
        for ( j = 1; i <=6; ++j)
        {
            if (j<=7-i)
            {
                printf("%c",k++ +64);
            }else{
                printf("%c", g++ +64);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}

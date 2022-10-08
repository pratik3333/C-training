#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (i<=j)
            {
                printf("%d",j);
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}


// Output:-

// 12345
//  2345
//   345
//    45
//     5

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for ( i = 1; i <=9; i++)
    {
        for ( j = 1; j <=9; j++)
        {
            if (j<=i)
            {
                printf("%d",j);
            }

             printf(" ");
            
        }
        printf("\n");
    }
    
    return 0;
}


// Output;-
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8  
// 1 2 3 4 5 6 7 8 9
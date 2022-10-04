#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    for (int  i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            if (i>=j)
            {
                printf("%d",j);
            }
            
        }
        printf("\n");
    }
    

    return 0;
}

// output:-

// 12345
//  2345
//   345
//    45
//     5
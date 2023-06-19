#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k , x=10;
    char ch;
    for (i = 1; i <= 5; i++)
    {
        // x=10;
        k=1;
        ch='A';
        for (j = 1; j <=x; j++)
        {
              
            if (j % 2 == 1)
            {
                printf("%d ",k);
                k++;
                
            }
            else
            {
                printf("%c ", ch);
                ch++;
            }
            
        }
        x = x - 2;
        printf("\n");
        
    }
}

// 1 A 2 B 3 C 4 D 5 E 
// 1 A 2 B 3 C 4 D
// 1 A 2 B 3 C
// 1 A 2 B
// 1 A
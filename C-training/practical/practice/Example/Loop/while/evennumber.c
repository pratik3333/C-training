#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    i=1;

    while (i<=10)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
        i++;
    }
    

    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int i,j;
    for ( i =1; i <=5; i++)
    {
        for ( j = 1; j <=5; j++)
        {
            if (j==1)
            {
                printf("%d",i);
            }
            else if (i==1)
            {
                printf("%d",j);
            }
            else if (j==6-i)
            {
                printf("%d",5);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

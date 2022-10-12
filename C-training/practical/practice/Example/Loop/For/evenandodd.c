#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,no;

    printf("Enter the number: ");
    scanf("%d",&no);

    for ( i = 1; i <=no; i++)
    {
        if (i%2==0)
        {
            printf("Even number=%d\t",i);
        }
        else if (i%2!=0)
        {
            printf("odd number=%d\n\t ",i);
        }
        else
        {
            printf("Wrong input");
        }    
    }

    return 0;
}

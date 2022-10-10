#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i,multi=1;

    printf("Enter the five values in array: ");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display the all values of array\n");
    for ( i = 0; i < 5; i++)
    {
        printf("a[%d] ------> %d\n",i,a[i]);

        multi=multi*a[i];
    }
        
    printf("Sum of all elementsnid %d\n",multi);
    
    return 0;
}

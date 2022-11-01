// write a c program to print 5 elements array.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i;
    printf("Enter the five values in array:\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("print given array:");
    for ( i = 0; i <5; i++)
    {
        printf(" %d",a[i]);
    }
    
    
    return 0;
}

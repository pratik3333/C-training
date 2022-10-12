// WAP to insert 5 elements into array and print it.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i;
    printf("Enter the five values of array:");
    for ( i = 0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("five values of array");
    for ( i = 0; i <5; i++)
    {

        printf(" %d",a[i]);
    }
    
    
    return 0;
}

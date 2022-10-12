// W.A.P. to insert 10 elements into array and calculate product of all elements into array.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[10],mul=1;

    printf("Enter the 10 elements of array:\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        mul=mul*a[i];
    }
    
    printf("Multiplication of all elements of array: %d",mul);
    return 0;
}

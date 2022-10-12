// W.A.P. to insert 10 elements into array and calculate sum of all elements of array.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[10],sum=0;

    printf("Enter the 10 value of array:\n");

    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i <10; i++)
    {
        

        sum=sum+a[i];
    }
    printf("Sum of all elements is: %d\n",sum);
    
    return 0;
}

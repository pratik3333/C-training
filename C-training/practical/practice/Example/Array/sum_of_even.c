// W.A.P. to insert 10 elements into array and calculate sum of all even numbers.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[10],sum=0,even;
    printf("Enter the 10 values of array:\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <10; i++)
    {
        if (a[i]%2==0)
        {
            sum=sum+a[i];
        }
        
    }
    printf("Sum of all even numbers in array is %d",sum);
    return 0;
}

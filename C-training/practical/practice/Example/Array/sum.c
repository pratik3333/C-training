// write a program input 5 values in array and calculate it's sum

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i,sum=0;
    printf("Enter the five values in array: ");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display the all values of array\n");
    for ( i = 0; i <5; i++)
    {
        printf("a[%d]---->%d\n",i,a[i]);

        sum=sum+a[i];

    }
    printf("Sum of all elements is %d\n",sum);
    
    return 0;
}

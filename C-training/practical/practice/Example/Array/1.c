// write a program input the 5 value in array and find the maximum value in array

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i,max;

    printf("Enter the five values in array:\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for ( i = 0; i < 5; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    printf("Maximum value is: %d\n",max);
    return 0;
}
